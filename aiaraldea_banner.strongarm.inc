<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_banner_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_aiaraldea_banner';
  $strongarm->value = '0';
  $export['comment_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_aiaraldea_banner';
  $strongarm->value = '0';
  $export['comment_anonymous_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_aiaraldea_banner';
  $strongarm->value = '3';
  $export['comment_controls_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_aiaraldea_banner';
  $strongarm->value = '4';
  $export['comment_default_mode_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_aiaraldea_banner';
  $strongarm->value = '1';
  $export['comment_default_order_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_aiaraldea_banner';
  $strongarm->value = '50';
  $export['comment_default_per_page_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_aiaraldea_banner';
  $strongarm->value = '0';
  $export['comment_form_location_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_aiaraldea_banner';
  $strongarm->value = '1';
  $export['comment_preview_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_aiaraldea_banner';
  $strongarm->value = '1';
  $export['comment_subject_field_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_aiaraldea_banner';
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
  $export['content_extra_weights_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_aiaraldea_banner';
  $strongarm->value = '0';
  $export['language_content_type_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_aiaraldea_banner';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_aiaraldea_banner';
  $strongarm->value = 1;
  $export['scheduler_aiaraldea_banner'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_node_type_priority_aiaraldea_banner';
  $strongarm->value = '-1';
  $export['xmlsitemap_node_type_priority_aiaraldea_banner'] = $strongarm;

  return $export;
}
