<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_base_taxonomy_default_vocabularies() {
  return array(
    'aiaraldea_non' => array(
      'name' => 'Non',
      'description' => 'lekua',
      'help' => 'Idatzi zer herrian gertatu edo gertatuko den. Herri bat baino gehiago zehazteko komaz banatu.',
      'relations' => '1',
      'hierarchy' => '1',
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
    'etiketak' => array(
      'name' => 'Etiketak',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_etiketak',
      'weight' => '-8',
      'nodes' => array(
        'albiste' => 'albiste',
        'bideo' => 'bideo',
      ),
    ),
  );
}
