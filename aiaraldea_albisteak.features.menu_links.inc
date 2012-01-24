<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function aiaraldea_albisteak_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-goiko-menua:albisteak
  $menu_links['menu-goiko-menua:albisteak'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'albisteak',
    'router_path' => 'albisteak',
    'link_title' => 'Albisteak',
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
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Albisteak');


  return $menu_links;
}
