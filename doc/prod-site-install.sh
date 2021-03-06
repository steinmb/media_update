#!/bin/bash

# Parameters to this script

# First parameter is site, eg. 'w3.uib.no'
# set DATABASE as an enviroment variable before calling this script
if [ "$1" = "" ]; then
  echo First parameter is site, eg. 'w3.uib.no'
  echo set DATABASE as an enviroment variable before calling this script
  exit 1
fi
echo $PWD
FILE_DIR='/nettapp_w3/sites'
VERBOSE=' --verbose '
if [ "$2" = "-q" ]; then 
  VERBOSE=' ' 
fi
SITE_DIR=${1:-uib.no}
PROFILE="uib"
if [ "$DATABASE" = "" ]; then
  echo "DATABASE missing as environment. Use export DATABASE=pgsql://w3_admin:PWD@w3.pg.uib.no/w3"
  exit 1
fi
umask 002
find . -type d | xargs chmod g+s .
chgrp ansatt .
chmod -R g+w .

cd drupal || ( echo No drupal-dir ; exit 1 )

if [ -e sites/$SITE_DIR ]; then
    echo "drupal/sites/$SITE_DIR already exists, aborting."
    exit 1
fi

if [ $( hostname | egrep '(^attila.uib.no$|^attika.uib.no$|^attilatest.uib.no$)' | wc -l) -gt 0 ] ;then
  sudo mkdir -p /nettapp_w3/sites/$SITE_DIR || exit 1 
  sudo chmod g+ws /nettapp_w3/sites/$SITE_DIR
  sudo mkdir -p /nettapp_w3/sites/$SITE_DIR/files || exit 1 
  sudo mkdir -p  /nettapp_w3/sites/$SITE_DIR/private || exit 1 
  sudo chmod -R g+w /nettapp_w3/sites || exit 1
  sudo chown -R  $(whoami):apache /nettapp_w3/sites/$SITE_DIR || exit 1 
  mkdir --verbose -p ../var || exit 1
  mkdir --verbose -p  sites/$SITE_DIR  || ( echo Can not find $FILE_DIR/$SITE_DIR/files or unable to create target ; exit 1 )
  ln -s /nettapp_w3/sites/$SITE_DIR/files sites/$SITE_DIR/files  || ( echo Can not find $FILE_DIR/$SITE_DIR/files or unable to create target ; exit 1 )
  ln -s /nettapp_w3/sites/$SITE_DIR/private ../var/private || ( echo Can not find $FILE_DIR/$SITE_DIR/private or unable to create target; exit 1 )
  sleep 3
else
  echo "Not running on (^attila.uib.no$|^attika.uib.no$|^attilatest.uib.no$)"
  sleep 5
  mkdir --verbose -p ../var/private || exit 1
  mkdir --verbose -p ../var/files   || exit 1
  sudo chown -R apache:apache ../var/private
fi


set -x
drush site-install $PROFILE --db-url=$DATABASE --sites-subdir=$SITE_DIR --site-name=$SITE_DIR --site-mail="w3@it.uib.no" --site-name="Universitetet i Bergen" --account-name=admin --account-mail="w3@it.uib.no" --account-pass=admin --clean-url $VERBOSE --yes || exit 1

# run compass to create css
(cd ../themes/uib_zen && compass clean && compass compile -c config-prod.rb)

# The installer sometimes override variables that we try to enforce with uib_setup.
# Fix that by explictly reverting those changes.
drush -l http://$SITE_DIR features-revert --yes uib_setup

cat <<EOT >sites/default/settings.php
No default site.  You need to visit <a href="http://$SITE_DIR">$SITE_DIR</a> instead.
<?php
exit;
EOT

cd sites/$SITE_DIR || exit 1

chmod u+w . settings.php

# todo fix correct owner|perm

cat <<'EOT' >>settings.php

/**
  * Even more PHP settings.
  */
ini_set('memory_limit', '256M');
EOT

cat <<'EOT' >>drushrc.php
<?php
$options['structure-tables'] = array(
    'common' => array(
       'cache', 'cache_block', 'cache_bootstrap', 'cache_field', 'cache_filter',
       'cache_form', 'cache_image', 'cache_menu', 'cache_page', 'cache_path', 'cache_update',
       'history', 'sessions', 'watchdog',
    ),
);
EOT
(cd ../../.. && rm -f site && ln -s drupal/sites/$SITE_DIR site)

# todo: do we need this on prod?
# (cd ../../.. && bin/sql-dump $SITE_DIR)
#git init
#git add settings.php drushrc.php dump.sql
#git commit -m "site-install"
#git branch -m master site/$SITE_DIR
#git remote add origin git@git.uib.no:site/w3.uib.no.git
#set +x
#echo "Run 'cd site && git push origin site/$SITE_DIR' to upload"

cd ../../..

if [ "$2" = "--no-import" ]; then 
	#This if-sentence is for testruns
	sudo chown -R apache:apache /nettapp_w3/sites/$SITE_DIR || exit 1 
	exit 0
fi

# import all of jur/hr
bin/site-drush --yes vset uib_test_dir ALL
bin/site-drush mi --all $VERBOSE --strict=0 --area_subset=uib_areas_subset_jurhf.txt

# build menu
bin/site-drush uib-migrate-build-menu $VERBOSE

# enable uib_prod
bin/site-drush pm-enable --yes uib_prod

# sync some users, areas from sebra, etc
sh -x bin/update-some-stuff

#Password have timed out. Create a tmp-file
echo run bin/prod-fix-premission
