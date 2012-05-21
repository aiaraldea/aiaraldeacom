<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function aiaraldea_agenda_taxonomy_default_vocabularies() {
  return array(
    'aiaraldea_deialdi_mota' => array(
      'name' => 'Deialdi mota',
      'description' => '',
      'help' => 'Idatzi deialdiaren mota, adib. Kontzertua, Erakusketa, edo Jaiak. Deialdi motak laburra izan behar du! Ez idatzi deialdiaren deskribapena hemen!',
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
  );
}
