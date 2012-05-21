<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function aiaraldea_azala_default_panels_layout() {
  $export = array();

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'h_534_b';
  $layout->admin_title = 'h, (5|3|4),b';
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
        'class' => 'container_12',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0px',
        'region_separation' => '0px',
        'row_separation' => '10px',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 960,
        'width_type' => 'px',
        'children' => array(
          0 => 4,
          1 => 'main-row',
          2 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '1',
          1 => '2',
          2 => '3',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'region',
        'title' => '1',
        'width' => '380',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'grid_5',
      ),
      2 => array(
        'type' => 'region',
        'title' => '2',
        'width' => '220',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'grid_3',
      ),
      3 => array(
        'type' => 'region',
        'title' => '3',
        'width' => '300',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'grid_4',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'head',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'header',
        'width' => '940',
        'width_type' => 'px',
        'parent' => '4',
        'class' => 'grid_12',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'bottom',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => '940',
        'width_type' => 'px',
        'parent' => '5',
        'class' => 'grid_12',
      ),
    ),
  );
  $export['h_534_b'] = $layout;

  return $export;
}
