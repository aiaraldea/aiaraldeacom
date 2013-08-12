<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_bereziak_views_default_views() {
  $views = array();

  // Exported view: albisteak_bereziak
  $view = new view;
  $view->name = 'albisteak_bereziak';
  $view->description = 'Albisteak azala';
  $view->tag = 'albisteak';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'view-albisteak';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
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
  /* Eremua: Profila: Informazio pertsonala: Izen abizenak */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_izen_abizenak';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 0;
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
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zerrendak-izenburua';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Edukia: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['id'] = 'field_embeddedimages_fid_1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['format'] = 'albisteak_azala_2gunea_linked';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Eremua: Nodoa: Iruzkin kopurua */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] erantzun';
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
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'albiste' => 'albiste',
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
  $handler->display->display_options['filters']['name']['value'] = '3. gunea';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;

  /* Display: Korrikaren plaza */
  $handler = $view->new_display('block', 'Korrikaren plaza', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-albisteak azala-albisteak-elkarrizketak';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Eremua: Profila: Informazio pertsonala: Izen abizenak */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_izen_abizenak';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 0;
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
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
    5 => 0,
  );
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
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
  /* Eremua: Edukia: Erantsiak (field_erantsi) */
  $handler->display->display_options['fields']['field_erantsi_fid']['id'] = 'field_erantsi_fid';
  $handler->display->display_options['fields']['field_erantsi_fid']['table'] = 'node_data_field_erantsi';
  $handler->display->display_options['fields']['field_erantsi_fid']['field'] = 'field_erantsi_fid';
  $handler->display->display_options['fields']['field_erantsi_fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['text'] = '[.pdf]';
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_erantsi_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_erantsi_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_erantsi_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_erantsi_fid']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Edukia: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid']['id'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['text'] = '[.jpg]';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Edukia: Bideo erlazionatuak (field_bideo_erlazionatuak) */
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['id'] = 'field_bideo_erlazionatuak_nid';
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['table'] = 'node_data_field_bideo_erlazionatuak';
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['field'] = 'field_bideo_erlazionatuak_nid';
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['text'] = '[.tv]';
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_bideo_erlazionatuak_nid']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Edukia: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['id'] = 'field_embeddedimages_fid_1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['format'] = 'albisteak_azala_2gunea_linked';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zerrendak-izenburua';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Eremua: Nodoa: Iruzkin kopurua */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] erantzun';
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
    'albiste' => 'albiste',
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
  $handler->display->display_options['filters']['name']['value'] = 'Korrikaren plaza';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;
  /* Iragazkia: Taxonomia: Hiztegia */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

  /* Display: araba euskarazeko storify-n jartzeko bista */
  $handler = $view->new_display('block', 'araba euskarazeko storify-n jartzeko bista', 'block_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'azala-albisteak-2gunea view-albisteak';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Eremua: Profila: Informazio pertsonala: Izen abizenak */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_izen_abizenak';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 0;
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
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zerrendak-izenburua';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Edukia: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['id'] = 'field_embeddedimages_fid_1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['format'] = 'albisteak_azala_2gunea_linked';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_reversed'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Eremua: Nodoa: Iruzkin kopurua */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] erantzun';
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
    'albiste' => 'albiste',
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
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['value'] = 'araba euskaraz';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;

  /* Display: Amurrioko jaiak 2013 */
  $handler = $view->new_display('block', 'Amurrioko jaiak 2013', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'azala-albisteak-2gunea view-albisteak';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Eremua: Profila: Informazio pertsonala: Izen abizenak */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_izen_abizenak';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 0;
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
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zerrendak-izenburua';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Edukia: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['id'] = 'field_embeddedimages_fid_1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['format'] = 'albisteak_azala_2gunea_linked';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_embeddedimages_fid_1']['multiple']['multiple_reversed'] = 0;
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Eremua: Nodoa: Iruzkin kopurua */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] erantzun';
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
    'albiste' => 'albiste',
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
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['value'] = 'amurrioko jaiak';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['name']['case'] = 1;
  /* Iragazkia: Data: Data (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['value']['value'] = '2013-01-01 00:00:00';
  $handler->display->display_options['filters']['date_filter']['allow_null'] = 1;
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = '';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2013:2013';
  $translatables['albisteak_bereziak'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('[comment_count] erantzun'),
    t('node/[nid]#comment-form'),
    t('Komentatu'),
    t('.'),
    t(','),
    t(' erantzun'),
    t('Guztiak'),
    t('Korrikaren plaza'),
    t('[.pdf]'),
    t('[.jpg]'),
    t('[.tv]'),
    t('araba euskarazeko storify-n jartzeko bista'),
    t('Amurrioko jaiak 2013'),
  );

  $views[$view->name] = $view;

  // Exported view: azken_bideoak_bereziak
  $view = new view;
  $view->name = 'azken_bideoak_bereziak';
  $view->description = 'Azken bideoak - bereziak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
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
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
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

  /* Display: araba euskarazeko storify-n jartzeko bista */
  $handler = $view->new_display('block', 'araba euskarazeko storify-n jartzeko bista', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-display-azken-bideoak';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argumentua: Nodoa: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '8993,8988,8981,8872,8533,8459';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
  $translatables['azken_bideoak_bereziak'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('araba euskarazeko storify-n jartzeko bista'),
  );

  $views[$view->name] = $view;

  // Exported view: flickr_image_sets_bereziak
  $view = new view;
  $view->name = 'flickr_image_sets_bereziak';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Flickr Photo Set (field_photo_set) */
  $handler->display->display_options['fields']['field_photo_set_id']['id'] = 'field_photo_set_id';
  $handler->display->display_options['fields']['field_photo_set_id']['table'] = 'node_data_field_photo_set';
  $handler->display->display_options['fields']['field_photo_set_id']['field'] = 'field_photo_set_id';
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_photo_set_id']['format'] = 'm_primary_for_sets';
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flickr_image_set' => 'flickr_image_set',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Nodo: Mota';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: araba euskarazeko storify-n jartzeko bista */
  $handler = $view->new_display('panel_pane', 'araba euskarazeko storify-n jartzeko bista', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Argazkiak';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'latest-ones';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Edukia: Flickr Photo Set (field_photo_set) */
  $handler->display->display_options['fields']['field_photo_set_id']['id'] = 'field_photo_set_id';
  $handler->display->display_options['fields']['field_photo_set_id']['table'] = 'node_data_field_photo_set';
  $handler->display->display_options['fields']['field_photo_set_id']['field'] = 'field_photo_set_id';
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['element_wrapper_class'] = 'zerrendak-argazkiak-irudia';
  $handler->display->display_options['fields']['field_photo_set_id']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo_set_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_photo_set_id']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_photo_set_id']['format'] = 't_primary_for_sets';
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zerrendak-argazkiak-izenburua';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flickr_image_set' => 'flickr_image_set',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Nodo: Mota';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'between';
  $handler->display->display_options['filters']['nid']['value']['min'] = '8975';
  $handler->display->display_options['filters']['nid']['value']['max'] = '9034';
  $handler->display->display_options['filters']['nid']['allow_null'] = 1;
  $translatables['flickr_image_sets_bereziak'] = array(
    t('Lehenespenak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nodo: Mota'),
    t('araba euskarazeko storify-n jartzeko bista'),
    t('Argazkiak'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  return $views;
}
