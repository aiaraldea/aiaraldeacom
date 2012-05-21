<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_bideoak_ctools_plugin_api() {
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
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_bideoak_imagecache_default_presets() {
  $items = array(
    'bideo_azala' => array(
      'presetname' => 'bideo_azala',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '75',
          ),
        ),
      ),
    ),
    'bideo_zerrenda' => array(
      'presetname' => 'bideo_zerrenda',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '162',
            'height' => '112',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_bideoak_node_info() {
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
    'feed' => array(
      'name' => t('Feed'),
      'module' => 'features',
      'description' => t('Items from these feeds will be turned into nodes.'),
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
function aiaraldea_bideoak_views_api() {
  return array(
    'api' => '2',
  );
}
