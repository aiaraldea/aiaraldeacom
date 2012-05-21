<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_proposamenak_taxonomy_default_vocabularies() {
  return array(
    'aiaraldea_proposamenak_mota' => array(
      'name' => 'Proposamen mota',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_aiaraldea_proposamenak_mota',
      'weight' => '-7',
      'nodes' => array(
        'proposamena' => 'proposamena',
      ),
    ),
  );
}
