<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_agenda_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_deialdi';
  $strongarm->value = '1';
  $export['comment_anonymous_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_deialdi';
  $strongarm->value = '1';
  $export['comment_controls_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_deialdi';
  $strongarm->value = '2';
  $export['comment_default_mode_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_deialdi';
  $strongarm->value = '1';
  $export['comment_default_order_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_deialdi';
  $strongarm->value = '50';
  $export['comment_default_per_page_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_deialdi';
  $strongarm->value = '2';
  $export['comment_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_deialdi';
  $strongarm->value = '1';
  $export['comment_form_location_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_deialdi';
  $strongarm->value = '1';
  $export['comment_preview_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_deialdi';
  $strongarm->value = '1';
  $export['comment_subject_field_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_deialdi';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '3',
    'comment_settings' => '4',
    'menu' => '-4',
    'taxonomy' => '-3',
    'path' => '5',
    'scheduler_settings' => '6',
  );
  $export['content_extra_weights_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_deialdi';
  $strongarm->value = '0';
  $export['language_content_type_deialdi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_deialdi';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_deialdi'] = $strongarm;

  return $export;
}
