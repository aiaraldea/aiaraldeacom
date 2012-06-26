<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_banner_views_default_views() {
  $views = array();

  // Exported view: aiaraldea_banner_nodequeue_1
  $view = new view;
  $view->name = 'aiaraldea_banner_nodequeue_1';
  $view->description = 'Display a list of all nodes in queue \'banner queue 1\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->display->display_options['title'] = 'Banner queue';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Erlazioa: Nodequeue: Queue (qid) */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['qids'] = array(
    1 => '1',
  );
  /* Eremua: Edukia: Banner link (field_banner_link) */
  $handler->display->display_options['fields']['field_banner_link_url']['id'] = 'field_banner_link_url';
  $handler->display->display_options['fields']['field_banner_link_url']['table'] = 'node_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link_url']['field'] = 'field_banner_link_url';
  $handler->display->display_options['fields']['field_banner_link_url']['label'] = 'Banner link';
  $handler->display->display_options['fields']['field_banner_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_banner_link_url']['link_to_node'] = 0;
  /* Eremua: Edukia: Banner image (field_banner_image) */
  $handler->display->display_options['fields']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['fields']['field_banner_image_fid']['table'] = 'node_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['path'] = '[field_banner_link_url]';
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_banner_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_banner_image_fid']['format'] = 'image_plain';
  /* Sort criterion: Nodequeue: Kokapena */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Argumentua: Nodequeue: Queue ID */
  $handler->display->display_options['arguments']['qid']['id'] = 'qid';
  $handler->display->display_options['arguments']['qid']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['arguments']['qid']['field'] = 'qid';
  $handler->display->display_options['arguments']['qid']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['arguments']['qid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['qid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['qid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['qid']['not'] = 0;
  /* Iragazkia: Nodoa: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Blokea */
  $handler = $view->new_display('block', 'Blokea', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Banner queue';
  $translatables['aiaraldea_banner_nodequeue_1'] = array(
    t('Lehenespenak'),
    t('Banner queue'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('ilara'),
    t('Banner link'),
    t('[field_banner_link_url]'),
    t('Guztiak'),
    t('Blokea'),
  );

  $views[$view->name] = $view;

  return $views;
}
