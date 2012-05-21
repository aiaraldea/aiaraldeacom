<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function albiste_sailak_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function albiste_sailak_imagecache_default_presets() {
  $items = array(
    'albisteak_azala_1gunea' => array(
      'presetname' => 'albisteak_azala_1gunea',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '366',
            'height' => '190',
          ),
        ),
      ),
    ),
    'albisteak_azala_2gunea' => array(
      'presetname' => 'albisteak_azala_2gunea',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '180',
            'height' => '120',
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
function albiste_sailak_views_api() {
  return array(
    'api' => '2',
  );
}
