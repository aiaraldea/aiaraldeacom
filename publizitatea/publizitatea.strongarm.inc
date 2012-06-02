<?php

/**
 * Implementation of hook_strongarm().
 */
function publizitatea_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_delivery_url';
  $strongarm->value = 'd1.openx.org';
  $export['openx_delivery_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_delivery_url_https';
  $strongarm->value = 'd1.openx.org';
  $export['openx_delivery_url_https'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_site_vars';
  $strongarm->value = array();
  $export['openx_site_vars'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_zones';
  $strongarm->value = array(
    0 => array(
      'id' => '231610',
      'name' => 'Goialdea',
      'delete' => 'ezabatu',
    ),
    1 => array(
      'id' => '231630',
      'name' => 'Goialdea - eskuina',
      'delete' => 'ezabatu',
    ),
    2 => array(
      'id' => '254545',
      'name' => 'Orrilapurra',
      'delete' => 'ezabatu',
    ),
  );
  $export['openx_zones'] = $strongarm;

  return $export;
}
