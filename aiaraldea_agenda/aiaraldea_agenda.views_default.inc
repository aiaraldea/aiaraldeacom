<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_agenda_views_default_views() {
  $views = array();

  // Exported view: agenda
  $view = new view;
  $view->name = 'agenda';
  $view->description = 'Agenda';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Erlazioa: Banderak: nabarmena */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'nabarmena';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
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
  /* Eremua: Taxonomia: Termino guztiak */
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
  /* Eremua: Edukia: Lekua (field_lekua) */
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
  /* Eremua: Edukia: Noiz (field_noiz) */
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
  /* Ordenazio irizpidea: Edukia: Noiz (field_noiz) */
  $handler->display->display_options['sorts']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['sorts']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['sorts']['field_noiz_value']['field'] = 'field_noiz_value';
  /* Argumentua: Data: Data (node) */
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
    'deialdi' => 'deialdi',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Data: Data (node) */
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
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane by term */
  $handler = $view->new_display('panel_pane', 'Content pane by term', 'panel_pane_1');
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
  /* Eremua: Taxonomia: Termino guztiak */
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
  /* Eremua: Edukia: Lekua (field_lekua) */
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
  $handler->display->display_options['fields']['field_lekua_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['label_type'] = 'none';
  /* Eremua: Edukia: Noiz (field_noiz) */
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
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['title'] = 'Agenda: %1';
  $handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomia: Termino',
    ),
    'date_argument' => array(
      'type' => 'panel',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Data: Data (node)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane by date */
  $handler = $view->new_display('panel_pane', 'Content pane by date', 'panel_pane_2');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Testu hutsa: Globala: Testu eremua */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'Hilabete honetan oraindik ez dago deialdirik. Bidali iezaguzu zure deialdia eposta bidez.';
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
  /* Eremua: Taxonomia: Termino guztiak */
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
  /* Eremua: Edukia: Lekua (field_lekua) */
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
  $handler->display->display_options['fields']['field_lekua_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['label_type'] = 'none';
  /* Eremua: Edukia: Noiz (field_noiz) */
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
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argumentua: Data: Data (node) */
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
  $handler->display->display_options['pane_description'] = 'Agenda by date';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'date_argument' => array(
      'type' => 'panel',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Data: Data (node)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['agenda'] = array(
    t('Defaults'),
    t('Agenda'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Guztiak'),
    t('Agenda: %1'),
    t('%1'),
    t('Content pane by term'),
    t('View panes'),
    t('Content pane by date'),
    t('Hilabete honetan oraindik ez dago deialdirik. Bidali iezaguzu zure deialdia eposta bidez.'),
    t('Agenda by date'),
  );

  $views[$view->name] = $view;

  // Exported view: egutegia
  $view = new view;
  $view->name = 'egutegia';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'egutegia';
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  /* Eremua: Edukia: Noiz (field_noiz) */
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
  /* Eremua: Edukia: Lekua (field_lekua) */
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
  $handler->display->display_options['fields']['field_lekua_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lekua_value']['label_type'] = 'none';
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
  /* Eremua: Taxonomia: Termino */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Ordenazio irizpidea: Edukia: Noiz (field_noiz) */
  $handler->display->display_options['sorts']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['sorts']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['sorts']['field_noiz_value']['field'] = 'field_noiz_value';
  /* Argumentua: Data: Data (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'node_data_field_noiz.field_noiz_value' => 'node_data_field_noiz.field_noiz_value',
  );
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-0:+3';
  $handler->display->display_options['arguments']['date_argument']['date_method'] = 'OR';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'month';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deialdi' => 'deialdi',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Date browser */
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'date_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['render_pager'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'panel_pane_1' => 'panel_pane_1',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'date_argument' => array(
      'type' => 'panel',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Data: Data (node)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['egutegia'] = array(
    t('Defaults'),
    t('egutegia'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('Date browser'),
    t('Content pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  return $views;
}
