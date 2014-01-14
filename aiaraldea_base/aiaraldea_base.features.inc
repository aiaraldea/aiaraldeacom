<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_base_imagecache_default_presets() {
  $items = array(
    'erabiltzailea_zerrendak' => array(
      'presetname' => 'erabiltzailea_zerrendak',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '20',
            'height' => '20',
          ),
        ),
      ),
    ),
  );
  return $items;
}
