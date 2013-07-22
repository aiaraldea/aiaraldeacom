<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function komunitatea_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-komunitatearen
  $menus['menu-komunitatearen'] = array(
    'menu_name' => 'menu-komunitatearen',
    'title' => 'Komunitatearen Plaza',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Komunitatearen Plaza');


  return $menus;
}
