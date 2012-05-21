<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_agenda_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_agenda_node_info() {
  $items = array(
    'deialdi' => array(
      'name' => t('Deialdi'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Testua'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_agenda_views_api() {
  return array(
    'api' => '2',
  );
}
