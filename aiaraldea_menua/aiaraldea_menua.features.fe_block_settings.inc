<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function aiaraldea_menua_default_fe_block_settings() {
  $export = array();

  // aiaraldeacom
  $theme = array();

  $theme['block-goiko_menua_placeholder'] = array(
    'module' => 'block',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-40',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'goiko_menua_placeholder',
  );

  $theme['menu-menu-goiko-menua'] = array(
    'module' => 'menu',
    'delta' => 'menu-goiko-menua',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-41',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['panels_mini-proposamenak_menu'] = array(
    'module' => 'panels_mini',
    'delta' => 'proposamenak_menu',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-33',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_albisteak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_albisteak',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-38',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_argazkiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_argazkiak',
    'theme' => 'aiaraldeacom',
    'status' => 0,
    'weight' => '3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_bideoak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_bideoak',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-36',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_deialdiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_deialdiak',
    'theme' => 'aiaraldeacom',
    'status' => '1',
    'weight' => '-34',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['aiaraldeacom'] = $theme;

  // rubik
  $theme = array();

  $theme['block-goiko_menua_placeholder'] = array(
    'module' => 'block',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '-26',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'goiko_menua_placeholder',
  );

  $theme['menu-menu-goiko-menua'] = array(
    'module' => 'menu',
    'delta' => 'menu-goiko-menua',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '-27',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['panels_mini-proposamenak_menu'] = array(
    'module' => 'panels_mini',
    'delta' => 'proposamenak_menu',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_albisteak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_albisteak',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_argazkiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_argazkiak',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_bideoak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_bideoak',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_deialdiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_deialdiak',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['rubik'] = $theme;

  // tao
  $theme = array();

  $theme['block-goiko_menua_placeholder'] = array(
    'module' => 'block',
    'theme' => 'tao',
    'status' => '1',
    'weight' => '-26',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'goiko_menua_placeholder',
  );

  $theme['menu-menu-goiko-menua'] = array(
    'module' => 'menu',
    'delta' => 'menu-goiko-menua',
    'theme' => 'tao',
    'status' => '1',
    'weight' => '-27',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['panels_mini-proposamenak_menu'] = array(
    'module' => 'panels_mini',
    'delta' => 'proposamenak_menu',
    'theme' => 'tao',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_albisteak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_albisteak',
    'theme' => 'tao',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_argazkiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_argazkiak',
    'theme' => 'tao',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_bideoak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_bideoak',
    'theme' => 'tao',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-menu_herri_zerrenda-b_deialdiak'] = array(
    'module' => 'views',
    'delta' => 'menu_herri_zerrenda-b_deialdiak',
    'theme' => 'tao',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
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
