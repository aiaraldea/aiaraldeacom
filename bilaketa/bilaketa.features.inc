<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function bilaketa_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => 1);
  }
  elseif ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => 3);
  }
  elseif ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => 1);
  }
  elseif ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
