<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_irratia_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_irratia_imagecache_default_presets() {
  $items = array(
    'zabalera_osoa' => array(
      'presetname' => 'zabalera_osoa',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '620',
            'height' => '',
            'upscale' => 1,
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
function aiaraldea_irratia_node_info() {
  $items = array(
    'irrati_emanaldia' => array(
      'name' => t('Irrati emanaldia'),
      'module' => 'features',
      'description' => t('Irratsaio baten emanaldia'),
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Testua'),
      'min_word_count' => '25',
      'help' => '',
    ),
    'irratsaioa' => array(
      'name' => t('Irratsaioa'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Irratsaioaren izena'),
      'has_body' => '1',
      'body_label' => t('Irratsaioaren deskripzioa'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_irratia_views_api() {
  return array(
    'api' => '3.0',
  );
}
