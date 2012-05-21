<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_proposamenak_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "mp3player" && $api == "default_mp3player_player") {
    return array("version" => 1);
  }
  elseif ($module == "mp3player" && $api == "mp3players") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_proposamenak_imagecache_default_presets() {
  $items = array(
    'proposamena' => array(
      'presetname' => 'proposamena',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80',
            'height' => '80',
          ),
        ),
      ),
    ),
    'proposamenak_zerrenda' => array(
      'presetname' => 'proposamenak_zerrenda',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '40',
            'height' => '40',
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
function aiaraldea_proposamenak_node_info() {
  $items = array(
    'proposamena' => array(
      'name' => t('Proposamena'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Testua'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_proposamenak_views_api() {
  return array(
    'api' => '2',
  );
}
