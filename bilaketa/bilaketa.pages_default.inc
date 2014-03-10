<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function bilaketa_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_http_response';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'search/apachesolr_search',
  );
  $export['search_node_http_response'] = $handler;

  return $export;
}
