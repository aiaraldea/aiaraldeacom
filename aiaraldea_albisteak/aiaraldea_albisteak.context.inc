<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function aiaraldea_albisteak_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-section-albisteak_menu2';
  $context->description = 'Albisteak menuan';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'albiste' => 'albiste',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'albisteak',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Albisteak menuan');
  $export['context_ui-section-albisteak_menu2'] = $context;

  return $export;
}
