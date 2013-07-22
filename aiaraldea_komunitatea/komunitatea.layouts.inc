<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function komunitatea_default_panels_layout() {
  $export = array();

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'komunitatearen_plaza';
  $layout->admin_title = 'komunitatearen_plaza';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'rigth',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.95941952273829',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'rigth' => array(
        'type' => 'region',
        'title' => 'rigth',
        'width' => '30.040580477261706',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'komu-rigth',
      ),
    ),
  );
  $export['komunitatearen_plaza'] = $layout;

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'user_panel';
  $layout->admin_title = 'user_panel';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'rigth',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.95941952273829',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'rigth' => array(
        'type' => 'region',
        'title' => 'rigth',
        'width' => '30.040580477261706',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'komu-rigth',
      ),
    ),
  );
  $export['user_panel'] = $layout;

  return $export;
}
