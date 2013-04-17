<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_azala_views_default_views() {
  $views = array();

  // Exported view: agenda_azala
  $view = new view;
  $view->name = 'agenda_azala';
  $view->description = 'Agenda azalan';
  $view->tag = 'agenda';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'view-agenda';
  $handler->display->display_options['use_more_always'] = TRUE;
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
  /* Relationship: Flags: nabarmena */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'nabarmena';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Taxonomy: All terms */
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
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid_1']['limit'] = 1;
  $handler->display->display_options['fields']['tid_1']['vids'] = array(
    3 => 3,
    1 => 0,
    2 => 0,
    4 => 0,
  );
  /* Field: Node: Title */
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
  /* Field: Content: Lekua (field_lekua) */
  $handler->display->display_options['fields']['field_lekua_value']['id'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['table'] = 'node_data_field_lekua';
  $handler->display->display_options['fields']['field_lekua_value']['field'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['label_type'] = 'none';
  /* Field: Content: Noiz (field_noiz) */
  $handler->display->display_options['fields']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['fields']['field_noiz_value']['field'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_noiz_value']['format'] = 'short';
  /* Sort criterion: Content: Noiz (field_noiz) */
  $handler->display->display_options['sorts']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['sorts']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['sorts']['field_noiz_value']['field'] = 'field_noiz_value';
  /* Argument: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['wildcard'] = '0';
  $handler->display->display_options['arguments']['date_argument']['title'] = 'Agenda: %1';
  $handler->display->display_options['arguments']['date_argument']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'node_data_field_noiz.field_noiz_value' => 'node_data_field_noiz.field_noiz_value',
  );
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-0:+3';
  $handler->display->display_options['arguments']['date_argument']['date_method'] = 'AND';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'month';
  /* Argument: Taxonomy: Term */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deialdi' => 'deialdi',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_noiz.field_noiz_value' => 'node_data_field_noiz.field_noiz_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'OR';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'hour';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = '';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blokea */
  $handler = $view->new_display('block', 'Blokea', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;

  /* Display: Deiladi nabarmena */
  $handler = $view->new_display('panel_pane', 'Deiladi nabarmena', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'deialdi-nabarmena view-agenda';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Irudiak (field_embeddedimages) */
  $handler->display->display_options['fields']['field_embeddedimages_fid']['id'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['table'] = 'node_data_field_embeddedimages';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['field'] = 'field_embeddedimages_fid';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['format'] = 'deialdi_nabarmena_linked';
  $handler->display->display_options['fields']['field_embeddedimages_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_embeddedimages_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Taxonomy: All terms */
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
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid_1']['limit'] = 1;
  $handler->display->display_options['fields']['tid_1']['vids'] = array(
    3 => 3,
    1 => 0,
    2 => 0,
    4 => 0,
  );
  /* Field: Node: Title */
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
  /* Field: Content: Lekua (field_lekua) */
  $handler->display->display_options['fields']['field_lekua_value']['id'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['table'] = 'node_data_field_lekua';
  $handler->display->display_options['fields']['field_lekua_value']['field'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lekua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['label_type'] = 'none';
  /* Field: Content: Noiz (field_noiz) */
  $handler->display->display_options['fields']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['fields']['field_noiz_value']['field'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_noiz_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_noiz_value']['format'] = 'short';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deialdi' => 'deialdi',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_noiz.field_noiz_value' => 'node_data_field_noiz.field_noiz_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'OR';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'hour';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = '';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = FALSE;
  $translatables['agenda_azala'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Agenda: %1'),
    t('%1'),
    t('Blokea'),
    t('more'),
    t('Deiladi nabarmena'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: azala_azken_iruzkinak_1_2
  $view = new view;
  $view->name = 'azala_azken_iruzkinak_1_2';
  $view->description = 'Contains a block and a page to list recent comments; the block will automatically link to the page...';
  $view->tag = 'default';
  $view->base_table = 'comments';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Azken iruzkinak';
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 6;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comments';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comments';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] :';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  /* Field: Comment: Body */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'comments';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['text'] = '[comment]';
  $handler->display->display_options['fields']['comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment']['empty_zero'] = 0;
  /* Field: Comment: ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comments';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['cid']['alter']['text'] = '[comment]';
  $handler->display->display_options['fields']['cid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['cid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['cid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['cid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['cid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['cid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['cid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['cid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '([title])';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'comments';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter: Node: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter: Comment: In moderation */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comments';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comments';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]:';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Reply to';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comments';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'medium';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comments';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 1;
  /* Field: Comment: Body */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'comments';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = '';
  $handler->display->display_options['path'] = 'comments/recent';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Recent comments view';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['azala_azken_iruzkinak_1_2'] = array(
    t('Defaults'),
    t('Azken iruzkinak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node'),
    t('[name] :'),
    t('Body'),
    t('[comment]'),
    t('([title])'),
    t('Page'),
    t('more'),
    t('[name]:'),
    t('Reply to'),
    t('Block'),
    t('Recent comments view'),
    t('Content pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: elkarrzketa_aurrerapenak
  $view = new view;
  $view->name = 'elkarrzketa_aurrerapenak';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 3;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Banner image (field_elkaur_image) */
  $handler->display->display_options['fields']['field_elkaur_image_fid']['id'] = 'field_elkaur_image_fid';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['table'] = 'node_data_field_elkaur_image';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['field'] = 'field_elkaur_image_fid';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['format'] = 'image_plain';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'elkarrizketa_aurr' => 'elkarrizketa_aurr',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Banner image (field_elkaur_image) */
  $handler->display->display_options['fields']['field_elkaur_image_fid']['id'] = 'field_elkaur_image_fid';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['table'] = 'node_data_field_elkaur_image';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['field'] = 'field_elkaur_image_fid';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['path'] = 'elkarrizketak/plaza-irekia';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_elkaur_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_elkaur_image_fid']['format'] = 'image_plain';
  $translatables['elkarrzketa_aurrerapenak'] = array(
    t('Lehenespenak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('more'),
    t('elkarrizketak/plaza-irekia'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: flickr_image_sets_main_page_1_2
  $view = new view;
  $view->name = 'flickr_image_sets_main_page_1_2';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
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
  /* Field: Content: Flickr Photo Set (field_photo_set) */
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
  /* Field: Node: Title */
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
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  /* Filter: Node: Type */
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
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Last set */
  $handler = $view->new_display('panel_pane', 'Last set', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'last-one clearfix';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Previous sets */
  $handler = $view->new_display('panel_pane', 'Previous sets', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'latest-ones';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Flickr Photo Set (field_photo_set) */
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
  $handler->display->display_options['fields']['field_photo_set_id']['format'] = 't_primary_for_sets';
  /* Field: Node: Title */
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
  $translatables['flickr_image_sets_main_page_1_2'] = array(
    t('Lehenespenak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nodo: Mota'),
    t('Last set'),
    t('more'),
    t('View panes'),
    t('Previous sets'),
  );

  $views[$view->name] = $view;

  // Exported view: irratia_feeds
  $view = new view;
  $view->name = 'irratia_feeds';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'aggregator_item';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Aiaraldea Irratia';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="widget-wrap widget-inside">
<div class="textwidget">
<a onclick="window.open(this.href, this.target, \'width=250,height=180\'); return false;" target="_blank" href="http://fm.aiaraldea.com/_zuzenean_popupa.php">
<img alt="Zuzenean entzun" src="/sites/default/files/irratia/zuzenean.gif">
</a>
<div class="">
<a target="_blank" href="http://fm.aiaraldea.com">
<img alt="irratia blog" src="/sites/default/files/irratia/blog-lotura.gif">
</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = '5';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="irratia-footer">
<a target="_blank" href="http://fm.aiaraldea.com">Irratsaio gehiago</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = '5';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No existen feeds';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['display_as_link'] = 1;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['description_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['html'] = 1;
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['description_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description_1']['hide_alter_empty'] = 1;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['link']['display_as_link'] = 1;
  /* Sort criterion: Aggregator: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter: Aggregator feed: Feed ID */
  $handler->display->display_options['filters']['fid']['id'] = 'fid';
  $handler->display->display_options['filters']['fid']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['fid']['field'] = 'fid';
  $handler->display->display_options['filters']['fid']['value']['value'] = '1';
  $handler->display->display_options['filters']['fid']['allow_null'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'irratia';
  $translatables['irratia_feeds'] = array(
    t('Defaults'),
    t('Aiaraldea Irratia'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Text area'),
    t('<div class="widget-wrap widget-inside">
<div class="textwidget">
<a onclick="window.open(this.href, this.target, \'width=250,height=180\'); return false;" target="_blank" href="http://fm.aiaraldea.com/_zuzenean_popupa.php">
<img alt="Zuzenean entzun" src="/sites/default/files/irratia/zuzenean.gif">
</a>
<div class="">
<a target="_blank" href="http://fm.aiaraldea.com">
<img alt="irratia blog" src="/sites/default/files/irratia/blog-lotura.gif">
</a>
</div>'),
    t('<div class="irratia-footer">
<a target="_blank" href="http://fm.aiaraldea.com">Irratsaio gehiago</a>
</div>'),
    t('No existen feeds'),
    t('_blank'),
    t('Link'),
    t('Content pane'),
    t('View panes'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: proposamenak_azala_1_1
  $view = new view;
  $view->name = 'proposamenak_azala_1_1';
  $view->description = 'Proposamenak';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 1;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Irudia (field_proposamena_irudia) */
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['id'] = 'field_proposamena_irudia_fid';
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['table'] = 'node_data_field_proposamena_irudia';
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['field'] = 'field_proposamena_irudia_fid';
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['format'] = 'proposamena_linked';
  /* Field: Node: Title */
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
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Audio (field_audio) */
  $handler->display->display_options['fields']['field_audio_fid']['id'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['table'] = 'node_data_field_audio';
  $handler->display->display_options['fields']['field_audio_fid']['field'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_audio_fid']['format'] = 'mp3player_proposamenak_az1_2';
  /* Field: Content: Kolaboratzilea (field_kolaboratzaile) */
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['id'] = 'field_kolaboratzaile_value';
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['table'] = 'node_data_field_kolaboratzaile';
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['field'] = 'field_kolaboratzaile_value';
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_kolaboratzaile_value']['label_type'] = 'none';
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argument: Taxonomy: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'term_node';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Agenda */
  $handler = $view->new_display('block', 'Blokea Agenda', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    27 => '27',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Musika */
  $handler = $view->new_display('block', 'Blokea Musika', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Musika';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    24 => '24',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Literatura */
  $handler = $view->new_display('block', 'Blokea Literatura', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Literatura';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Zinema */
  $handler = $view->new_display('block', 'Blokea Zinema', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zinema';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $translatables['proposamenak_azala_1_1'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Blokea Agenda'),
    t('Agenda'),
    t('more'),
    t('Blokea Musika'),
    t('Musika'),
    t('Blokea Literatura'),
    t('Literatura'),
    t('Blokea Zinema'),
    t('Zinema'),
  );

  $views[$view->name] = $view;

  return $views;
}
