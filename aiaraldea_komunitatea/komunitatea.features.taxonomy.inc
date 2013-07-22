<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function komunitatea_taxonomy_default_vocabularies() {
  return array(
    'arloak' => array(
      'name' => 'Arloak',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_arloak',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
