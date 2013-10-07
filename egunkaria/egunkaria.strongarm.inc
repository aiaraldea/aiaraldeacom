<?php

/**
 * Implementation of hook_strongarm().
 */
function egunkaria_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_egunkari_alea';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_egunkari_alea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_egunkari_alea_pattern';
  $strongarm->value = 'egunkaria/[yyyy]/[mm]/[title-raw]';
  $export['pathauto_node_egunkari_alea_pattern'] = $strongarm;

  return $export;
}
