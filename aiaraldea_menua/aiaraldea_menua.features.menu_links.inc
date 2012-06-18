<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function aiaraldea_menua_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-goiko-menua:agenda
  $menu_links['menu-goiko-menua:agenda'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-goiko-menua:argazkiak
  $menu_links['menu-goiko-menua:argazkiak'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'argazkiak',
    'router_path' => 'argazkiak',
    'link_title' => 'Argazkiak',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-goiko-menua:bideoak
  $menu_links['menu-goiko-menua:bideoak'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'bideoak',
    'router_path' => 'bideoak',
    'link_title' => 'Bideoak',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-goiko-menua:node/1615
  $menu_links['menu-goiko-menua:node/1615'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'node/1615',
    'router_path' => 'node/%',
    'link_title' => 'Udazkeneko Multimedia Eskola',
    'options' => array(
      'attributes' => array(
        'title' => 'Udazkeneko Multimedia Eskola 2010',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-goiko-menua:node/33
  $menu_links['menu-goiko-menua:node/33'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Nor gara',
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
    'weight' => '-44',
  );
  // Exported menu link: menu-goiko-menua:proposamenak
  $menu_links['menu-goiko-menua:proposamenak'] = array(
    'menu_name' => 'menu-goiko-menua',
    'link_path' => 'proposamenak',
    'router_path' => 'proposamenak',
    'link_title' => 'Kultur leihoa',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Argazkiak');
  t('Bideoak');
  t('Kultur leihoa');
  t('Nor gara');
  t('Udazkeneko Multimedia Eskola');


  return $menu_links;
}
