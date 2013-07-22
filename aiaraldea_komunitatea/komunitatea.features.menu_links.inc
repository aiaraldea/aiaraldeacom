<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function komunitatea_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-komunitatearen:node/8783
  $menu_links['menu-komunitatearen:node/8783'] = array(
    'menu_name' => 'menu-komunitatearen',
    'link_path' => 'node/8783',
    'router_path' => 'node/%',
    'link_title' => 'Zer da hau?',
    'options' => array(
      'attributes' => array(
        'title' => 'Zer da hau?',
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
  t('Zer da hau?');


  return $menu_links;
}
