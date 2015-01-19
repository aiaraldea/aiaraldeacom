<?php

/**
 * Implementation of hook_views_default_views().
 */
function egunkaria_views_default_views() {
  $views = array();

  // Exported view: egunkaria
  $view = new view;
  $view->name = 'egunkaria';
  $view->description = '';
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
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'AND' => array(
      'comment' => array(
        'changed' => 0,
      ),
      'node' => array(
        'egunkari_alea' => 'egunkari_alea',
        'albiste' => 0,
        'artikulua' => 0,
        'flickr_image_set' => 0,
        'argazkiak' => 0,
        'aiaraldea_banner' => 0,
        'bideo' => 0,
        'bideoak' => 0,
        'deialdi' => 0,
        'elkarrizketa_aurr' => 0,
        'hitzordua' => 0,
        'iritzi_gutuna' => 0,
        'short_notice' => 0,
        'page' => 0,
        'panel' => 0,
        'proposamena' => 0,
        'zutabea' => 0,
      ),
      'node_only' => array(
        'node_changed' => 0,
      ),
    ),
    'OR' => array(
      'nodequeue' => array(
        1 => 0,
      ),
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Azala (field_azala) */
  $handler->display->display_options['fields']['field_azala_fid']['id'] = 'field_azala_fid';
  $handler->display->display_options['fields']['field_azala_fid']['table'] = 'node_data_field_azala';
  $handler->display->display_options['fields']['field_azala_fid']['field'] = 'field_azala_fid';
  $handler->display->display_options['fields']['field_azala_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_azala_fid']['format'] = 'image_nodelink';
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-n-j';
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'egunkari_alea' => 'egunkari_alea',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['pane_title'] = 'Egunkaria - guztiak';

  /* Display: Azkena */
  $handler = $view->new_display('panel_pane', 'Azkena', 'panel_pane_azkena');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Egunkaria';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Edukia: Azala (field_azala) */
  $handler->display->display_options['fields']['field_azala_fid']['id'] = 'field_azala_fid';
  $handler->display->display_options['fields']['field_azala_fid']['table'] = 'node_data_field_azala';
  $handler->display->display_options['fields']['field_azala_fid']['field'] = 'field_azala_fid';
  $handler->display->display_options['fields']['field_azala_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_azala_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_azala_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_azala_fid']['format'] = 'image_nodelink';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'egunkari_alea' => 'egunkari_alea',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratze data */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '-5 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['allow_null'] = 1;
  $handler->display->display_options['pane_title'] = 'Egunkaria - azkena';
  $translatables['egunkaria'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Egunkaria - guztiak'),
    t('View panes'),
    t('Azkena'),
    t('Egunkaria'),
    t('Egunkaria - azkena'),
  );

  $views[$view->name] = $view;

  return $views;
}
