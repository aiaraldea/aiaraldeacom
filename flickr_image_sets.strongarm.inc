<?php

/**
 * Implementation of hook_strongarm().
 */
function flickr_image_sets_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_flickr_image_set';
  $strongarm->value = '1';
  $export['comment_anonymous_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_flickr_image_set';
  $strongarm->value = '3';
  $export['comment_controls_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_flickr_image_set';
  $strongarm->value = '2';
  $export['comment_default_mode_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_flickr_image_set';
  $strongarm->value = '1';
  $export['comment_default_order_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_flickr_image_set';
  $strongarm->value = '50';
  $export['comment_default_per_page_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_flickr_image_set';
  $strongarm->value = '2';
  $export['comment_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_flickr_image_set';
  $strongarm->value = '1';
  $export['comment_form_location_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_flickr_image_set';
  $strongarm->value = '0';
  $export['comment_preview_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_flickr_image_set';
  $strongarm->value = '0';
  $export['comment_subject_field_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_flickr_image_set';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'comment_settings' => '5',
    'menu' => '-4',
    'path' => '4',
    'custom_breadcrumbs' => '3',
    'path_redirect' => '2',
  );
  $export['content_extra_weights_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_photos_per_page';
  $strongarm->value = '50';
  $export['flickr_photos_per_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_flickr_image_set';
  $strongarm->value = '0';
  $export['language_content_type_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_flickr';
  $strongarm->value = '3';
  $export['lightbox2_flickr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_flickr_image_set';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_flickr_image_set'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_flickr_image_set_pattern';
  $strongarm->value = 'argazkiak/[title-raw]';
  $export['pathauto_node_flickr_image_set_pattern'] = $strongarm;

  return $export;
}
