<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function albiste_sailak_taxonomy_default_vocabularies() {
  return array(
    'albiste_kokapena' => array(
      'name' => 'Albistearen kokapena',
      'description' => 'Albistea azalean agertzen denean zein tokitan agertu behar den.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_albiste_kokapena',
      'weight' => '0',
      'nodes' => array(
        'albiste' => 'albiste',
      ),
    ),
  );
}
