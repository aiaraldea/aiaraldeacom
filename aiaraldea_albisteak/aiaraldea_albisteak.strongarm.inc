<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_albisteak_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_albiste';
  $strongarm->value = '2';
  $export['comment_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_albiste';
  $strongarm->value = '1';
  $export['comment_anonymous_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_albiste';
  $strongarm->value = '3';
  $export['comment_controls_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_albiste';
  $strongarm->value = '2';
  $export['comment_default_mode_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_albiste';
  $strongarm->value = '1';
  $export['comment_default_order_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_albiste';
  $strongarm->value = '50';
  $export['comment_default_per_page_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_albiste';
  $strongarm->value = '1';
  $export['comment_form_location_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_albiste';
  $strongarm->value = '0';
  $export['comment_preview_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_albiste';
  $strongarm->value = '0';
  $export['comment_subject_field_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_albiste';
  $strongarm->value = array(
    'apachesolr' => '100',
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '3',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '5',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '4',
    'custom_breadcrumbs' => '30',
    'flag' => '0',
    'path_redirect' => '30',
    'scheduler_settings' => '6',
    'nodewords' => '10',
  );
  $export['content_extra_weights_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_albiste';
  $strongarm->value = '0';
  $export['language_content_type_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_albiste';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'revision',
  );
  $export['node_options_albiste'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_albiste';
  $strongarm->value = 1;
  $export['scheduler_albiste'] = $strongarm;

  return $export;
}
