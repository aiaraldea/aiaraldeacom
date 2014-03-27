<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function aiaraldea_irratia_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-irratia
  $menus['menu-irratia'] = array(
    'menu_name' => 'menu-irratia',
    'title' => 'Irratia',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Irratia');


  return $menus;
}
