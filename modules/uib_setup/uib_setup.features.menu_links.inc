<?php
/**
 * @file
 * uib_setup.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uib_setup_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_webdesk:webdesk
  $menu_links['management_webdesk:webdesk'] = array(
    'menu_name' => 'management',
    'link_path' => 'webdesk',
    'router_path' => 'webdesk',
    'link_title' => 'Webdesk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_webdesk:webdesk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_aktuelt:http://www.uib.no/aktuelt
  $menu_links['menu-global-menu-no_aktuelt:http://www.uib.no/aktuelt'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/aktuelt',
    'router_path' => '',
    'link_title' => 'Aktuelt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_aktuelt:http://www.uib.no/aktuelt',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_bibliotek:http://www.uib.no/ub/
  $menu_links['menu-global-menu-no_bibliotek:http://www.uib.no/ub/'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/ub/',
    'router_path' => '',
    'link_title' => 'Bibliotek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_bibliotek:http://www.uib.no/ub/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_forskning:http://www.uib.no/forskning
  $menu_links['menu-global-menu-no_forskning:http://www.uib.no/forskning'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/forskning',
    'router_path' => '',
    'link_title' => 'Forskning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_forskning:http://www.uib.no/forskning',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_internasjonalt:http://www.uib.no/internasjonalt
  $menu_links['menu-global-menu-no_internasjonalt:http://www.uib.no/internasjonalt'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/internasjonalt',
    'router_path' => '',
    'link_title' => 'Internasjonalt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_internasjonalt:http://www.uib.no/internasjonalt',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_om-uib:http://www.uib.no/om
  $menu_links['menu-global-menu-no_om-uib:http://www.uib.no/om'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/om',
    'router_path' => '',
    'link_title' => 'Om UiB',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_om-uib:http://www.uib.no/om',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu-no_utdanning:http://www.uib.no/utdanning
  $menu_links['menu-global-menu-no_utdanning:http://www.uib.no/utdanning'] = array(
    'menu_name' => 'menu-global-menu-no',
    'link_path' => 'http://www.uib.no/utdanning',
    'router_path' => '',
    'link_title' => 'Utdanning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu-no_utdanning:http://www.uib.no/utdanning',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_about-uib:http://www.uib.no/about
  $menu_links['menu-global-menu_about-uib:http://www.uib.no/about'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/about',
    'router_path' => '',
    'link_title' => 'About UiB',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_about-uib:http://www.uib.no/about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_education:http://www.uib.no/education
  $menu_links['menu-global-menu_education:http://www.uib.no/education'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/education',
    'router_path' => '',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_education:http://www.uib.no/education',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_international:http://www.uib.no/international
  $menu_links['menu-global-menu_international:http://www.uib.no/international'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/international',
    'router_path' => '',
    'link_title' => 'International',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_international:http://www.uib.no/international',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_library:http://www.uib.no/ub/en
  $menu_links['menu-global-menu_library:http://www.uib.no/ub/en'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/ub/en',
    'router_path' => '',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_library:http://www.uib.no/ub/en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_news:http://www.uib.no/news
  $menu_links['menu-global-menu_news:http://www.uib.no/news'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/news',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_news:http://www.uib.no/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-global-menu_research:http://www.uib.no/research
  $menu_links['menu-global-menu_research:http://www.uib.no/research'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'http://www.uib.no/research',
    'router_path' => '',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_research:http://www.uib.no/research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-webdesk-no_finn-innhold:webdesk/all-content
  $menu_links['menu-webdesk-no_finn-innhold:webdesk/all-content'] = array(
    'menu_name' => 'menu-webdesk-no',
    'link_path' => 'webdesk/all-content',
    'router_path' => 'webdesk/all-content',
    'link_title' => 'Finn innhold',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-webdesk-no_finn-innhold:webdesk/all-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-webdesk-no_legg-til-innhold:node/add/uib-article
  $menu_links['menu-webdesk-no_legg-til-innhold:node/add/uib-article'] = array(
    'menu_name' => 'menu-webdesk-no',
    'link_path' => 'node/add/uib-article',
    'router_path' => 'node/add/uib-article',
    'link_title' => 'Legg til innhold',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-webdesk-no_legg-til-innhold:node/add/uib-article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-webdesk-no_legg-til-omrde:node/add/area
  $menu_links['menu-webdesk-no_legg-til-omrde:node/add/area'] = array(
    'menu_name' => 'menu-webdesk-no',
    'link_path' => 'node/add/area',
    'router_path' => 'node/add/area',
    'link_title' => 'Legg til område',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-webdesk-no_legg-til-omrde:node/add/area',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-webdesk-no_legg-til-vitnesbyrd:node/add/uib-testimonial
  $menu_links['menu-webdesk-no_legg-til-vitnesbyrd:node/add/uib-testimonial'] = array(
    'menu_name' => 'menu-webdesk-no',
    'link_path' => 'node/add/uib-testimonial',
    'router_path' => 'node/add/uib-testimonial',
    'link_title' => 'Legg til vitnesbyrd',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-webdesk-no_legg-til-vitnesbyrd:node/add/uib-testimonial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-webdesk_add-area:node/add/area
  $menu_links['menu-webdesk_add-area:node/add/area'] = array(
    'menu_name' => 'menu-webdesk',
    'link_path' => 'node/add/area',
    'router_path' => 'node/add/area',
    'link_title' => 'Add area',
    'options' => array(
      'attributes' => array(
        'title' => 'This is where you add area',
      ),
      'identifier' => 'menu-webdesk_add-area:node/add/area',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-webdesk_add-content:node/add/uib-article
  $menu_links['menu-webdesk_add-content:node/add/uib-article'] = array(
    'menu_name' => 'menu-webdesk',
    'link_path' => 'node/add/uib-article',
    'router_path' => 'node/add/uib-article',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => 'This is where you add content',
      ),
      'identifier' => 'menu-webdesk_add-content:node/add/uib-article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-webdesk_add-testimonial:node/add/uib-testimonial
  $menu_links['menu-webdesk_add-testimonial:node/add/uib-testimonial'] = array(
    'menu_name' => 'menu-webdesk',
    'link_path' => 'node/add/uib-testimonial',
    'router_path' => 'node/add/uib-testimonial',
    'link_title' => 'Add testimonial',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-webdesk_add-testimonial:node/add/uib-testimonial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-webdesk_find-content:webdesk/all-content
  $menu_links['menu-webdesk_find-content:webdesk/all-content'] = array(
    'menu_name' => 'menu-webdesk',
    'link_path' => 'webdesk/all-content',
    'router_path' => 'webdesk/all-content',
    'link_title' => 'Find content',
    'options' => array(
      'attributes' => array(
        'title' => 'This is where you find all content',
      ),
      'identifier' => 'menu-webdesk_find-content:webdesk/all-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About UiB');
  t('Add area');
  t('Add content');
  t('Add testimonial');
  t('Aktuelt');
  t('Bibliotek');
  t('Education');
  t('Find content');
  t('Finn innhold');
  t('Forskning');
  t('Internasjonalt');
  t('International');
  t('Legg til innhold');
  t('Legg til område');
  t('Legg til vitnesbyrd');
  t('Library');
  t('News');
  t('Om UiB');
  t('Research');
  t('Utdanning');
  t('Webdesk');


  return $menu_links;
}
