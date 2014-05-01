<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_irratia_views_default_views() {
  $views = array();

  // Exported view: irrati_emanaldien_zerrenda
  $view = new view;
  $view->name = 'irrati_emanaldien_zerrenda';
  $view->description = '';
  $view->tag = 'irratia';
  $view->base_table = 'node';
  $view->human_name = 'Irrati emanaldien zerrenda';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
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
        'irrati_emanaldia' => 'irrati_emanaldia',
        'irratsaioa' => 'irratsaioa',
        'albiste' => 0,
        'artikulua' => 0,
        'flickr_image_set' => 0,
        'argazkiak' => 0,
        'aiaraldea_banner' => 0,
        'bideo' => 0,
        'deialdi' => 0,
        'egunkari_alea' => 0,
        'elkarrizketa_aurr' => 0,
        'hitzordua' => 0,
        'iritzi_gutuna' => 0,
        'bideoak' => 0,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'zerrendak-ilara clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Edukia: Irratsaioa (field_emanaldia_irratsaioa) */
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['id'] = 'field_emanaldia_irratsaioa_nid';
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['table'] = 'node_data_field_emanaldia_irratsaioa';
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['field'] = 'field_emanaldia_irratsaioa_nid';
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['element_wrapper_class'] = 'zerrendak-egilea';
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irratsaioa_nid']['label_type'] = 'none';
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'zerrendak-argitaratze-data';
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y.n.d';
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
  /* Eremua: Edukia: Irudia (field_emanaldia_irudia) */
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['id'] = 'field_emanaldia_irudia_fid';
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['table'] = 'node_data_field_emanaldia_irudia';
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['field'] = 'field_emanaldia_irudia_fid';
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['element_wrapper_class'] = 'zerrendak-irudia';
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_emanaldia_irudia_fid']['format'] = 'albisteak_zerrendak_linked';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '220';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Eremua: Edukia: Audio fitxategia (field_emanaldia_audio_lotura) */
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['id'] = 'field_emanaldia_audio_lotura_url';
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['table'] = 'node_data_field_emanaldia_audio_lotura';
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['field'] = 'field_emanaldia_audio_lotura_url';
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_emanaldia_audio_lotura_url']['format'] = 'mini_for_link';
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Argumentua: Edukia: Irratsaioa (field_emanaldia_irratsaioa) */
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['id'] = 'field_emanaldia_irratsaioa_nid';
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['table'] = 'node_data_field_emanaldia_irratsaioa';
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['field'] = 'field_emanaldia_irratsaioa_nid';
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_emanaldia_irratsaioa_nid']['not'] = 0;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'irrati_emanaldia' => 'irrati_emanaldia',
  );

  /* Display: Eduki panela */
  $handler = $view->new_display('panel_pane', 'Eduki panela', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Irrati emanaldiak';
  $handler->display->display_options['argument_input'] = array(
    'field_emanaldia_irratsaioa_nid' => array(
      'type' => 'panel',
      'context' => 'term.vid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Edukia: Irratsaioa (field_emanaldia_irratsaioa)',
    ),
  );
  $translatables['irrati_emanaldien_zerrenda'] = array(
    t('Lehenespenak'),
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
    t('Eduki panela'),
    t('Irrati emanaldiak'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: irratsaioen_zerrenda
  $view = new view;
  $view->name = 'irratsaioen_zerrenda';
  $view->description = '';
  $view->tag = 'irratia';
  $view->base_table = 'node';
  $view->human_name = 'Irratsaioen zerrenda';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->display->display_options['title'] = 'Irratsaioak';
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
        'irratsaioa' => 'irratsaioa',
        'albiste' => 0,
        'artikulua' => 0,
        'flickr_image_set' => 0,
        'argazkiak' => 0,
        'aiaraldea_banner' => 0,
        'bideo' => 0,
        'deialdi' => 0,
        'egunkari_alea' => 0,
        'elkarrizketa_aurr' => 0,
        'hitzordua' => 0,
        'iritzi_gutuna' => 0,
        'irrati_emanaldia' => 0,
        'bideoak' => 0,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'alboko-menuak';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 1;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'irratsaioa' => 'irratsaioa',
  );
  /* Iragazkia: Edukia: Aktiboa (field_irratsaioa_aktiboa) */
  $handler->display->display_options['filters']['field_irratsaioa_aktiboa_value']['id'] = 'field_irratsaioa_aktiboa_value';
  $handler->display->display_options['filters']['field_irratsaioa_aktiboa_value']['table'] = 'node_data_field_irratsaioa_aktiboa';
  $handler->display->display_options['filters']['field_irratsaioa_aktiboa_value']['field'] = 'field_irratsaioa_aktiboa_value';
  $handler->display->display_options['filters']['field_irratsaioa_aktiboa_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_irratsaioa_aktiboa_value']['allow_null'] = 1;

  /* Display: Eduki panela */
  $handler = $view->new_display('panel_pane', 'Eduki panela', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Irratsaioen zerrenda';
  $translatables['irratsaioen_zerrenda'] = array(
    t('Lehenespenak'),
    t('Irratsaioak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Eduki panela'),
    t('Irratsaioen zerrenda'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  return $views;
}
