<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_proposamenak_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_proposamena';
  $strongarm->value = '1';

  $export['comment_anonymous_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_proposamena';
  $strongarm->value = '3';

  $export['comment_controls_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_proposamena';
  $strongarm->value = '2';

  $export['comment_default_mode_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_proposamena';
  $strongarm->value = '1';

  $export['comment_default_order_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_proposamena';
  $strongarm->value = '50';

  $export['comment_default_per_page_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_proposamena';
  $strongarm->value = '1';

  $export['comment_form_location_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_proposamena';
  $strongarm->value = '1';

  $export['comment_preview_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_proposamena';
  $strongarm->value = '2';

  $export['comment_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_proposamena';
  $strongarm->value = '1';

  $export['comment_subject_field_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_proposamena';
  $strongarm->value = array(
    'title' => '-2',
    'body_field' => '4',
    'revision_information' => '5',
    'comment_settings' => '6',
    'menu' => '-1',
    'taxonomy' => '-3',
    'path' => '7',
    'scheduler_settings' => '8',
  );

  $export['content_extra_weights_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_proposamena';
  $strongarm->value = '0';

  $export['language_content_type_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_proposamena';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_proposamena'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_proposamena_pattern';
  $strongarm->value = 'proposamenak/[term-raw]/[title-raw]';

  $export['pathauto_node_proposamena_pattern'] = $strongarm;
  return $export;
}
