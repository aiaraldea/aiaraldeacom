<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_proposamenak_views_default_views() {
  $views = array();

  // Exported view: proposamenak_list
  $view = new view;
  $view->name = 'proposamenak_list';
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
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['keys'] = array(
    'AND' => array(
      'comment' => array(
        'changed' => 0,
      ),
      'node' => array(
        'proposamena' => 'proposamena',
        'albiste' => 0,
        'artikulua' => 0,
        'flickr_image_set' => 0,
        'argazkiak' => 0,
        'aiaraldea_banner' => 0,
        'bideo' => 0,
        'bideoak' => 0,
        'deialdi' => 0,
        'egunkari_alea' => 0,
        'elkarrizketa_aurr' => 0,
        'hitzordua' => 0,
        'iritzi_gutuna' => 0,
        'short_notice' => 0,
        'page' => 0,
        'panel' => 0,
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Irudia (field_proposamena_irudia) */
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
  /* Eremua: Nodoa: Testua */
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
  /* Eremua: Edukia: Kolaboratzilea (field_kolaboratzaile) */
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
  /* Eremua: Edukia: Audio (field_audio) */
  $handler->display->display_options['fields']['field_audio_fid']['id'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['table'] = 'node_data_field_audio';
  $handler->display->display_options['fields']['field_audio_fid']['field'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_audio_fid']['format'] = 'mini';
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Taxonomia: Terminoaren IDa */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'term_node';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Agenda */
  $handler = $view->new_display('block', 'Blokea Agenda', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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

  /* Display: Content pane agenda */
  $handler = $view->new_display('panel_pane', 'Content pane agenda', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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

  /* Display: Zerrenda */
  $handler = $view->new_display('panel_pane', 'Zerrenda', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Edukia: Irudia (field_proposamena_irudia) */
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
  $handler->display->display_options['fields']['field_proposamena_irudia_fid']['format'] = 'proposamenak_zerrenda_linked';
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
  /* Eremua: Nodoa: Testua */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
  /* Eremua: Edukia: Kolaboratzilea (field_kolaboratzaile) */
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
  /* Eremua: Edukia: Audio (field_audio) */
  $handler->display->display_options['fields']['field_audio_fid']['id'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['table'] = 'node_data_field_audio';
  $handler->display->display_options['fields']['field_audio_fid']['field'] = 'field_audio_fid';
  $handler->display->display_options['fields']['field_audio_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_audio_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_audio_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_audio_fid']['format'] = 'mini';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argumentua: Taxonomia: Terminoaren IDa */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'term_node';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['proposamenak_list'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('Blokea Agenda'),
    t('Blokea Musika'),
    t('Blokea Literatura'),
    t('Blokea Zinema'),
    t('Content pane agenda'),
    t('View panes'),
    t('Zerrenda'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
  );

  $views[$view->name] = $view;

  // Exported view: proposamenak_menu
  $view = new view;
  $view->name = 'proposamenak_menu';
  $view->description = 'Proposamenak menu';
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
        'proposamena' => 'proposamena',
        'albiste' => 0,
        'artikulua' => 0,
        'flickr_image_set' => 0,
        'argazkiak' => 0,
        'aiaraldea_banner' => 0,
        'bideo' => 0,
        'bideoak' => 0,
        'deialdi' => 0,
        'egunkari_alea' => 0,
        'elkarrizketa_aurr' => 0,
        'hitzordua' => 0,
        'iritzi_gutuna' => 0,
        'short_notice' => 0,
        'page' => 0,
        'panel' => 0,
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 1;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Taxonomia: Terminoaren IDa */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'term_node';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Blokea Agenda */
  $handler = $view->new_display('block', 'Blokea Agenda', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Agenda';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Musika';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Literatura';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Zinema';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposamena' => 'proposamena',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Iragazkia: Taxonomia: Terminoaren IDa (sakontasunarekin) */
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
  $translatables['proposamenak_menu'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('Blokea Agenda'),
    t('Agenda'),
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
