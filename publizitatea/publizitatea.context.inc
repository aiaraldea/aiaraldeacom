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
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openx-0' => array(
          'module' => 'openx',
          'delta' => 0,
          'region' => 'absolute_top',
          'weight' => 0,
        ),
        'openx-1' => array(
          'module' => 'openx',
          'delta' => 1,
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
