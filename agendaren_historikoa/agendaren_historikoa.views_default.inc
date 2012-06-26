<?php

/**
 * Implementation of hook_views_default_views().
 */
function agendaren_historikoa_views_default_views() {
  $views = array();

  // Exported view: aurreko_deialdiak
  $view = new view;
  $view->name = 'aurreko_deialdiak';
  $view->description = '';
  $view->tag = 'agenda';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 200;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_noiz_value_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'field_lekua_value' => 'field_lekua_value',
    'field_noiz_value' => 'field_noiz_value',
    'tid_1' => 'tid_1',
    'title' => 'title',
    'field_noiz_value_1' => 'field_noiz_value_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'separator' => '',
    ),
    'field_lekua_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_noiz_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'tid_1' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_noiz_value_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Non';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Edukia: Lekua (field_lekua) */
  $handler->display->display_options['fields']['field_lekua_value']['id'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['table'] = 'node_data_field_lekua';
  $handler->display->display_options['fields']['field_lekua_value']['field'] = 'field_lekua_value';
  $handler->display->display_options['fields']['field_lekua_value']['label'] = 'Lekua';
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
  /* Eremua: Edukia: Noiz (field_noiz) */
  $handler->display->display_options['fields']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['fields']['field_noiz_value']['field'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value']['label'] = 'Noiz';
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
  $handler->display->display_options['fields']['field_noiz_value']['format'] = 'data_bakarrik';
  /* Eremua: Taxonomia: Termino guztiak */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Deialdi mota';
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid_1']['limit'] = 1;
  $handler->display->display_options['fields']['tid_1']['vids'] = array(
    3 => 3,
    2 => 0,
    1 => 0,
    4 => 0,
  );
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Zer';
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
  /* Eremua: Edukia: Noiz (field_noiz) */
  $handler->display->display_options['fields']['field_noiz_value_1']['id'] = 'field_noiz_value_1';
  $handler->display->display_options['fields']['field_noiz_value_1']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['fields']['field_noiz_value_1']['field'] = 'field_noiz_value';
  $handler->display->display_options['fields']['field_noiz_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_noiz_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_noiz_value_1']['format'] = 'taldekatzeko';
  /* Sort criterion: Edukia: Noiz (field_noiz) */
  $handler->display->display_options['sorts']['field_noiz_value']['id'] = 'field_noiz_value';
  $handler->display->display_options['sorts']['field_noiz_value']['table'] = 'node_data_field_noiz';
  $handler->display->display_options['sorts']['field_noiz_value']['field'] = 'field_noiz_value';
  $handler->display->display_options['sorts']['field_noiz_value']['order'] = 'DESC';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deialdi' => 'deialdi',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Termino */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Etiketa (herria, deialdi mota, etiketak)';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['name']['case'] = 1;

  /* Display: Orria */
  $handler = $view->new_display('page', 'Orria', 'page_1');
  $handler->display->display_options['path'] = 'admin/aurreko_deialdiak';
  $translatables['aurreko_deialdiak'] = array(
    t('Lehenespenak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Non'),
    t('Lekua'),
    t('Noiz'),
    t('Deialdi mota'),
    t('Zer'),
    t('Etiketa (herria, deialdi mota, etiketak)'),
    t('Orria'),
  );

  $views[$view->name] = $view;

  return $views;
}
