<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_bideoak_ct_taxonomy_default_vocabularies() {
  return array(
    'bideo_jatorria' => array(
      'name' => 'Bideoen jatorria',
      'description' => 'Bideoa zein zerbitzutik inportatu den.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_bideo_jatorria',
      'weight' => '0',
      'nodes' => array(
        'bideo' => 'bideo',
      ),
    ),
  );
}
