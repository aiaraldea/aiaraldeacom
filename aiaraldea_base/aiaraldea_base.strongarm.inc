<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_base_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_aiaraldeacom_settings';
  $strongarm->value = array(
    'zen_block_editing' => 1,
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_touch_icon_plain' => 1,
    'toggle_touch_icon_precomp' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/aiaraldeacom/logo2.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'default_touch_icon_plain' => 1,
    'touch_icon_plain_path' => '',
    'touch_icon_plain_upload' => '',
    'default_touch_icon_precomp' => 1,
    'touch_icon_precomp_path' => '',
    'touch_icon_precomp_upload' => '',
  );
  $export['theme_aiaraldeacom_settings'] = $strongarm;

  return $export;
}
