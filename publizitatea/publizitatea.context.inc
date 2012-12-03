<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function publizitatea_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publizitatea_orri_guztietan';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'adzerk-azk24056' => array(
          'module' => 'adzerk',
          'delta' => 'azk24056',
          'region' => 'absolute_top',
          'weight' => 0,
        ),
        'adzerk-azk22008' => array(
          'module' => 'adzerk',
          'delta' => 'azk22008',
          'region' => 'absolute_top',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['publizitatea_orri_guztietan'] = $context;

  return $export;
}
