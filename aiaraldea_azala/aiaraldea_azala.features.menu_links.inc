<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function aiaraldea_azala_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-goiko-menua:albisteak/elkarrizketa
  $menu_links['menu-goiko-menua:albisteak/elkarrizketa'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'albisteak/elkarrizketa',
    'router_path' => 'albisteak',
    'link_title' => 'Elkarrizketak',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Elkarrizketak');


  return $menu_links;
}
