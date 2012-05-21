<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_banner_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function aiaraldea_banner_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->title = 'Azaleko bannerrak';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '0';
  $fe_nodequeue_queue->link = '';
  $fe_nodequeue_queue->link_remove = '';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '0';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '0';
  $fe_nodequeue_queue->i18n = '1';
  $fe_nodequeue_queue->name = 'queue1';
  $fe_nodequeue_queue->types = array(
    0 => 'aiaraldea_banner',
  );
  $fe_nodequeue_queue->roles = array();
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'aiaraldea_banner_queue_1';

  $export['aiaraldea_banner_queue_1'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_banner_node_info() {
  $items = array(
    'aiaraldea_banner' => array(
      'name' => t('Banner'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_banner_views_api() {
  return array(
    'api' => '2',
  );
}
