<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_bideoak_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
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
            'height' => '90',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_bideoak_views_api() {
  return array(
    'api' => '3.0',
  );
}
