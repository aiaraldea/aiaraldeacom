<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_bideoak_ct_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_bideoak_ct_node_info() {
  $items = array(
    'bideo' => array(
      'name' => t('Bideo'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Deskribapena'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
