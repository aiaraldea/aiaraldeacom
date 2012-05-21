<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function aiaraldea_albisteak_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-goiko-menua
  $menus['menu-goiko-menua'] = array(
    'menu_name' => 'menu-goiko-menua',
    'title' => 'Goiko menua',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Goiko menua');


  return $menus;
}
