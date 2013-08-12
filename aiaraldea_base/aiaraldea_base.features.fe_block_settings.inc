<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function aiaraldea_base_default_fe_block_settings() {
  $export = array();

  // aiaraldeacom
  $theme = array();

  $theme['block-aiaraldea_footer'] = array(
    'module' => 'block',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-45',
    'region' => 'closure_region',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'aiaraldea_footer',
  );

  $export['aiaraldeacom'] = $theme;

  // rubik
  $theme = array();

  $theme['block-aiaraldea_footer'] = array(
    'module' => 'block',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '-25',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'aiaraldea_footer',
  );

  $export['rubik'] = $theme;

  // tao
  $theme = array();

  $theme['block-aiaraldea_footer'] = array(
    'module' => 'block',
    'theme' => 'tao',
    'status' => '1',
    'weight' => '-25',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'aiaraldea_footer',
  );

  $export['tao'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
