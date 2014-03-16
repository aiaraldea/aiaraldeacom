<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function komunitatea_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function komunitatea_imagecache_default_presets() {
  $items = array(
    '600x450' => array(
      'presetname' => '600x450',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    '650x480' => array(
      'presetname' => '650x480',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'komunitatea_teaser' => array(
      'presetname' => 'komunitatea_teaser',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '300',
            'height' => '200',
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
function komunitatea_node_info() {
  $items = array(
    'argazkiak' => array(
      'name' => t('Argazkiak'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'artikulua' => array(
      'name' => t('Albistea'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'bideoak' => array(
      'name' => t('Komunitateko bideoa'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'hitzordua' => array(
      'name' => t('Hitzordua'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'iritzi_gutuna' => array(
      'name' => t('Iritzi gutuna'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'zutabea' => array(
      'name' => t('Zutabea'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function komunitatea_views_api() {
  return array(
    'api' => '3.0',
  );
}
