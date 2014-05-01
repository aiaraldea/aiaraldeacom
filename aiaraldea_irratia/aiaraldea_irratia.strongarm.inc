<?php

/**
 * Implementation of hook_strongarm().
 */
function aiaraldea_irratia_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_irrati_emanaldia';
  $strongarm->value = 0;
  $export['comment_anonymous_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_irratsaioa';
  $strongarm->value = 0;
  $export['comment_anonymous_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_irrati_emanaldia';
  $strongarm->value = '3';
  $export['comment_controls_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_irratsaioa';
  $strongarm->value = '3';
  $export['comment_controls_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_irrati_emanaldia';
  $strongarm->value = '1';
  $export['comment_default_mode_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_irratsaioa';
  $strongarm->value = '4';
  $export['comment_default_mode_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_irrati_emanaldia';
  $strongarm->value = '1';
  $export['comment_default_order_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_irratsaioa';
  $strongarm->value = '1';
  $export['comment_default_order_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_irrati_emanaldia';
  $strongarm->value = '50';
  $export['comment_default_per_page_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_irratsaioa';
  $strongarm->value = '50';
  $export['comment_default_per_page_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_irrati_emanaldia';
  $strongarm->value = '1';
  $export['comment_form_location_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_irratsaioa';
  $strongarm->value = '0';
  $export['comment_form_location_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_irrati_emanaldia';
  $strongarm->value = '2';
  $export['comment_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_irratsaioa';
  $strongarm->value = '0';
  $export['comment_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_irrati_emanaldia';
  $strongarm->value = '1';
  $export['comment_preview_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_irratsaioa';
  $strongarm->value = '1';
  $export['comment_preview_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_irrati_emanaldia';
  $strongarm->value = '1';
  $export['comment_subject_field_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_irratsaioa';
  $strongarm->value = '1';
  $export['comment_subject_field_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_irrati_emanaldia';
  $strongarm->value = array(
    'apachesolr' => '8',
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '7',
    'menu' => '0',
    'path' => '4',
    'custom_breadcrumbs' => '6',
    'path_redirect' => '5',
  );
  $export['content_extra_weights_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_irratsaioa';
  $strongarm->value = array(
    'apachesolr' => '7',
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-3',
    'path' => '5',
    'custom_breadcrumbs' => '4',
    'path_redirect' => '6',
  );
  $export['content_extra_weights_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_irrati_emanaldia';
  $strongarm->value = '0';
  $export['language_content_type_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_irratsaioa';
  $strongarm->value = '0';
  $export['language_content_type_irratsaioa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_irrati_emanaldia';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_irrati_emanaldia'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_irratsaioa';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_irratsaioa'] = $strongarm;

  return $export;
}
