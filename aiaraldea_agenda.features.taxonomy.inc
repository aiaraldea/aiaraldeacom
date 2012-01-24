<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_agenda_taxonomy_default_vocabularies() {
  return array(
    'aiaraldea_deialdi_mota' => array(
      'name' => 'Deialdi mota',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_aiaraldea_deialdi_mota',
      'weight' => '-9',
      'nodes' => array(
        'deialdi' => 'deialdi',
      ),
    ),
//    'aiaraldea_non' => array(
//      'name' => 'Non',
//      'description' => 'Herria',
//      'help' => 'Idatzi zer herrian gertatu edo gertatuko den',
//      'relations' => '1',
//      'hierarchy' => '0',
//      'multiple' => '0',
//      'required' => '1',
//      'tags' => '1',
//      'module' => 'features_aiaraldea_non',
//      'weight' => '-10',
//      'nodes' => array(
//        'albiste' => 'albiste',
//        'bideo' => 'bideo',
//        'deialdi' => 'deialdi',
//      ),
//    ),
  );
}
