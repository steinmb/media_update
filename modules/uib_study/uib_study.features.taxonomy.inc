<?php
/**
 * @file
 * uib_study.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uib_study_taxonomy_default_vocabularies() {
  return array(
    'uib_nus' => array(
      'name' => 'uib_nus',
      'machine_name' => 'uib_nus',
      'description' => 'Nuskoder from http://www.ssb.no/utdanning/norsk-standard-for-utdanningsgruppering',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'uib_study_labels' => array(
      'name' => 'uib_study_labels',
      'machine_name' => 'uib_study_labels',
      'description' => 'Labels used to pick uib_study nodes for special views',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
