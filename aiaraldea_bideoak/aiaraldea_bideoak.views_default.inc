<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_bideoak_views_default_views() {
  $views = array();

  // Exported view: azken_bideoak_1_2
  $view = new view;
  $view->name = 'azken_bideoak_1_2';
  $view->description = 'Azken bideoak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'video_thumbnail';
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.m.d';
  /* Sort criterion: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 1;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bideo' => 'bideo',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Hiztegia */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Termino */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['value'] = 'bliptv vimeo';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;

  /* Display: Azken bideoak */
  $handler = $view->new_display('block', 'Azken bideoak', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-display-azken-bideoak';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_bideo_embed' => 'field_bideo_embed',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'azala_azken_bideoak_linked';
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.m.d';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bideo' => 'bideo',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Termino */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['value'] = 'vimeo bliptv';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;

  /* Display: Azken bideoa */
  $handler = $view->new_display('block', 'Azken bideoa', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-display-azken-bideoa';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.m.d';
  /* Eremua: Nodoa: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'video_preview';
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Eremua: Nodoa: Iruzkin kopurua */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comment-form';
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty'] = 'Komentatu';
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 1;
  $handler->display->display_options['fields']['comment_count']['suffix'] = ' erantzun';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bideo' => 'bideo',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Termino */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['value'] = 'vimeo bliptv';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;
  $translatables['azken_bideoak_1_2'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('Azken bideoak'),
    t('Azken bideoa'),
    t('Nid'),
    t('node/[nid]#comment-form'),
    t('Komentatu'),
    t('.'),
    t(','),
    t(' erantzun'),
  );

  $views[$view->name] = $view;

  // Exported view: bideo_ikusienak
  $view = new view;
  $view->name = 'bideo_ikusienak';
  $view->description = 'bideo ikusiaenak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 8;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'bideo_zerrenda_linked';
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'y.m.d';
  /* Sort criterion: Radioactivity (ikusienak astean): Node energy */
  $handler->display->display_options['sorts']['energy']['id'] = 'energy';
  $handler->display->display_options['sorts']['energy']['table'] = 'radioactivity_node_1_s';
  $handler->display->display_options['sorts']['energy']['field'] = 'energy';
  $handler->display->display_options['sorts']['energy']['order'] = 'DESC';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bideo' => 'bideo',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['bideo_ikusienak'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );

  $views[$view->name] = $view;

  // Exported view: bideoak
  $view = new view;
  $view->name = 'bideoak';
  $view->description = 'Azken bideoak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Bideoak';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'video_thumbnail';
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.m.d';
  /* Sort criterion: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 1;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bideo' => 'bideo',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Hiztegia */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

  /* Display: Bideoak */
  $handler = $view->new_display('panel_pane', 'Bideoak', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Edukia: Bideo (field_bideo) */
  $handler->display->display_options['fields']['field_bideo_embed']['id'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['table'] = 'node_data_field_bideo';
  $handler->display->display_options['fields']['field_bideo_embed']['field'] = 'field_bideo_embed';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_embed']['format'] = 'bideo_zerrenda_linked';
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.m.d';
  $translatables['bideoak'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Guztiak'),
    t('Bideoak'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  return $views;
}
