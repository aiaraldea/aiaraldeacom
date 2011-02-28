<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_albisteak_taxonomy_default_vocabularies() {
  return array(
    'aiaraldea_non' => array(
      'name' => 'Non',
      'description' => 'lekua',
      'help' => 'Idatzi zer herrian gertatu edo gertatuko den',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_aiaraldea_non',
      'weight' => '-10',
      'nodes' => array(
        'albiste' => 'albiste',
        'bideo' => 'bideo',
        'deialdi' => 'deialdi',
      ),
    ),
  );
}
