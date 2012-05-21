<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_azala_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_elkarrizketa_aurr';
  $strongarm->value = '0';
  $export['comment_anonymous_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_elkarrizketa_aurr';
  $strongarm->value = '3';
  $export['comment_controls_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_elkarrizketa_aurr';
  $strongarm->value = '4';
  $export['comment_default_mode_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_elkarrizketa_aurr';
  $strongarm->value = '1';
  $export['comment_default_order_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_elkarrizketa_aurr';
  $strongarm->value = '50';
  $export['comment_default_per_page_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_elkarrizketa_aurr';
  $strongarm->value = '2';
  $export['comment_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_elkarrizketa_aurr';
  $strongarm->value = '0';
  $export['comment_form_location_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_elkarrizketa_aurr';
  $strongarm->value = '1';
  $export['comment_preview_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_elkarrizketa_aurr';
  $strongarm->value = '1';
  $export['comment_subject_field_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_elkarrizketa_aurr';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-4',
    'path' => '4',
    'scheduler_settings' => '-1',
  );
  $export['content_extra_weights_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_elkarrizketa_aurr';
  $strongarm->value = '0';
  $export['language_content_type_elkarrizketa_aurr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_elkarrizketa_aurr';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_elkarrizketa_aurr'] = $strongarm;

  return $export;
}
