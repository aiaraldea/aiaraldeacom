<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_menua_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_menua_views_api() {
  return array(
    'api' => '3.0',
  );
}
