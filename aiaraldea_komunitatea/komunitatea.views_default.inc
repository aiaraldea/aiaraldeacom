<?php

/**
 * Implementation of hook_views_default_views().
 */
function komunitatea_views_default_views() {
  $views = array();

  // Exported view: komunitatea_content_count
  $view = new view;
  $view->name = 'komunitatea_content_count';
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
  /* Goiburua: Globala: Testu eremua */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="k-cont">Argitaratutako edukiak</div>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Argumentua: Nodoa: Mota */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'summary desc by count';
  $handler->display->display_options['arguments']['type']['style_plugin'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['type']['style_options']['base_path'] = 'komunitatea';
  $handler->display->display_options['arguments']['type']['style_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['style_options']['inline'] = 0;
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['default_argument_skip_url'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikulua' => 'artikulua',
    'argazkiak' => 'argazkiak',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  $translatables['komunitatea_content_count'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('<div class="k-cont">Argitaratutako edukiak</div>'),
    t('Izenburua'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_content_count_int
  $view = new view;
  $view->name = 'komunitatea_content_count_int';
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
  /* Goiburua: Globala: Testu eremua */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="k-cont">Argitaratutako edukiak</div>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Argumentua: Nodoa: Mota */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'summary desc by count';
  $handler->display->display_options['arguments']['type']['style_plugin'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['type']['style_options']['base_path'] = 'komunitatea';
  $handler->display->display_options['arguments']['type']['style_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['style_options']['inline'] = 0;
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['default_argument_skip_url'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikulua' => 'artikulua',
    'argazkiak' => 'argazkiak',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  $translatables['komunitatea_content_count_int'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('<div class="k-cont">Argitaratutako edukiak</div>'),
    t('Izenburua'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_feed
  $view = new view;
  $view->name = 'komunitatea_feed';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Komunitatea feed';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Komunitatea - Aiaraldea Komunikazio Leihoa';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Komunitatearen edukiak';
  $handler->display->display_options['style_options']['mission_description'] = 0;
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'artikulua' => 'artikulua',
    'argazkiak' => 'argazkiak',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  $handler->display->display_options['path'] = 'feed/komunitatea';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['komunitatea_feed'] = array(
    t('Defaults'),
    t('Komunitatea - Aiaraldea Komunikazio Leihoa'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Feed'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_kide_erabiltzaileak
  $view = new view;
  $view->name = 'komunitatea_kide_erabiltzaileak';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Erabiltzaileak';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Azalpen laburra';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web-gunea';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value_1]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Ordenazio irizpidea: Erabiltzailea: Sortze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Erabiltzailea' => 'Erabiltzailea',
  );
  $translatables['komunitatea_kide_erabiltzaileak'] = array(
    t('Defaults'),
    t('Erabiltzaileak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Azalpen laburra'),
    t('Web-gunea'),
    t('[value_1]'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_kide_norbanakoak
  $view = new view;
  $view->name = 'komunitatea_kide_norbanakoak';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Norbanakoa';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web-gunea';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value_1]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Ordenazio irizpidea: Erabiltzailea: Sortze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Erabiltzailea: Zereginak */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Iragazkia: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['value'] = array(
    '-Norbanakoa' => '-Norbanakoa',
  );
  $translatables['komunitatea_kide_norbanakoak'] = array(
    t('Defaults'),
    t('Norbanakoa'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Informazio pertsonala: Azalpen laburra'),
    t('Web-gunea'),
    t('[value_1]'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_kide_taldeak
  $view = new view;
  $view->name = 'komunitatea_kide_taldeak';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Taldeak';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Azalpen laburra';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web-gunea';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value_1]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Ordenazio irizpidea: Erabiltzailea: Sortze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Erabiltzailea: Zereginak */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Iragazkia: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['value'] = array(
    '-Kolektiboa' => '-Kolektiboa',
  );
  $translatables['komunitatea_kide_taldeak'] = array(
    t('Defaults'),
    t('Taldeak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Azalpen laburra'),
    t('Web-gunea'),
    t('[value_1]'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_kide_total
  $view = new view;
  $view->name = 'komunitatea_kide_total';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Kideak';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Azalpen laburra';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web-gunea';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value_1]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Ordenazio irizpidea: Erabiltzailea: Sortze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Erabiltzailea: Zereginak */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Iragazkia: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['value'] = array(
    '-Norbanakoa' => '-Norbanakoa',
    '-Kolektiboa' => '-Kolektiboa',
    'Erabiltzailea' => 'Erabiltzailea',
  );
  $translatables['komunitatea_kide_total'] = array(
    t('Defaults'),
    t('Kideak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Azalpen laburra'),
    t('Web-gunea'),
    t('[value_1]'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatea_registered
  $view = new view;
  $view->name = 'komunitatea_registered';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => 8,
    11 => 11,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Erabiltzailea: Helb. elek. */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Eremua: Erabiltzailea: Sortze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Erabiltzaile mota';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Erabiltzailea: Zereginak */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Rol';
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['rid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rid']['hide_alter_empty'] = 1;
  /* Eremua: Erabiltzailea: Editatu lotura */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Editatu';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Ordenazio irizpidea: Erabiltzailea: Sortze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Profila: Informazio pertsonala: Erabiltzaile mota */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_tipo';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Profile: Informazio pertsonala: Erabiltzaile mota';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'value_kid';
  $handler->display->display_options['filters']['value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'komunitatea-registered';
  $translatables['komunitatea_registered'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Irudia'),
    t('Izena'),
    t('Helb. elek.'),
    t('Sortze data'),
    t('Erabiltzaile mota'),
    t('Rol'),
    t('Editatu'),
    t('Profile: Informazio pertsonala: Erabiltzaile mota'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_arloak
  $view = new view;
  $view->name = 'komunitatearen_arloak';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'komunitatearen_arloak';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Arloak';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary desc';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['name']['style_options']['base_path'] = 'komunitatea';
  $handler->display->display_options['arguments']['name']['style_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['style_options']['inline'] = 0;
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'argazkiak' => 'argazkiak',
    'artikulua' => 'artikulua',
    'audioa' => 'audioa',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Iragazkia: Taxonomia: Hiztegia */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'user',
      'context' => 'terms.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['komunitatearen_arloak'] = array(
    t('Defaults'),
    t('Arloak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Guztiak'),
    t('Content pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_home
  $view = new view;
  $view->name = 'komunitatearen_home';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'komunitatearen_home';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'komunitatea-home';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Testu hutsa: Globala: Testu eremua */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '...';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
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
  $handler->display->display_options['arguments']['name']['style_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikulua' => 'artikulua',
    'argazkiak' => 'argazkiak',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'wildcard',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term',
    ),
  );
  $translatables['komunitatearen_home'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Testu eremua'),
    t('...'),
    t('Guztiak'),
    t('Content pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_home_panels
  $view = new view;
  $view->name = 'komunitatearen_home_panels';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'komunitatearen_home';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Komunitatea';
  $handler->display->display_options['css_class'] = 'komunitatea-home';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Orri-oina: Globala: Testu eremua */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="ko-footer">
<span class="ko-footer-texto"><a href="/komunitatea">Komunitate gehiago</a></span>
</div>';
  $handler->display->display_options['footer']['area']['format'] = '5';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Testu hutsa: Globala: Testu eremua */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '...';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Edukia: Irudia (field_artikulua_img) */
  $handler->display->display_options['fields']['field_artikulua_img_fid']['id'] = 'field_artikulua_img_fid';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['table'] = 'node_data_field_artikulua_img';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['field'] = 'field_artikulua_img_fid';
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikulua' => 'artikulua',
    'argazkiak' => 'argazkiak',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_label_type'] = '0';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 1;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'erabiltzailea_zerrendak';
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'zerrendak-egilea komunitatea-float';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: argazkiak_herria */
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['id'] = 'field_argazkiak_herria_value';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['table'] = 'node_data_field_argazkiak_herria';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['field'] = 'field_argazkiak_herria_value';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['ui_name'] = 'argazkiak_herria';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_herria_value']['label_type'] = 'none';
  /* Eremua: artikulua_herria */
  $handler->display->display_options['fields']['field_artikulua_herria_value']['id'] = 'field_artikulua_herria_value';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['table'] = 'node_data_field_artikulua_herria';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['field'] = 'field_artikulua_herria_value';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['ui_name'] = 'artikulua_herria';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_artikulua_herria_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_artikulua_herria_value']['label_type'] = 'none';
  /* Eremua: bideoak_herria */
  $handler->display->display_options['fields']['field_bideoak_herria_value']['id'] = 'field_bideoak_herria_value';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['table'] = 'node_data_field_bideoak_herria';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['field'] = 'field_bideoak_herria_value';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['ui_name'] = 'bideoak_herria';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bideoak_herria_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideoak_herria_value']['label_type'] = 'none';
  /* Eremua: hitzordua_herria */
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['id'] = 'field_hitzordua_herria_value';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['table'] = 'node_data_field_hitzordua_herria';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['field'] = 'field_hitzordua_herria_value';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['ui_name'] = 'hitzordua_herria';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_herria_value']['label_type'] = 'none';
  /* Eremua: iritzi_herria */
  $handler->display->display_options['fields']['field_iritzi_herria_value']['id'] = 'field_iritzi_herria_value';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['table'] = 'node_data_field_iritzi_herria';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['field'] = 'field_iritzi_herria_value';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['ui_name'] = 'iritzi_herria';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_iritzi_herria_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_iritzi_herria_value']['label_type'] = 'none';
  /* Eremua: zutabea_herria */
  $handler->display->display_options['fields']['field_zutabea_herria_value']['id'] = 'field_zutabea_herria_value';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['table'] = 'node_data_field_zutabea_herria';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['field'] = 'field_zutabea_herria_value';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['ui_name'] = 'zutabea_herria';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['element_class'] = 'komunitatea-float ko-herriak';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zutabea_herria_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_zutabea_herria_value']['label_type'] = 'none';
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
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'komunitatea-float ko-fecha';
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 1;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['title']['element_class'] = 'komunitatea-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Articulo imágen */
  $handler->display->display_options['fields']['field_artikulua_img_fid']['id'] = 'field_artikulua_img_fid';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['table'] = 'node_data_field_artikulua_img';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['field'] = 'field_artikulua_img_fid';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['ui_name'] = 'Articulo imágen';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_artikulua_img_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_artikulua_img_fid']['format'] = '300x200_linked';
  /* Eremua: bideoak_azalpena */
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['id'] = 'field_bideoak_azalpena_embed';
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['table'] = 'node_data_field_bideoak_azalpena';
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['field'] = 'field_bideoak_azalpena_embed';
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['ui_name'] = 'bideoak_azalpena';
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_bideoak_azalpena_embed']['format'] = 'video_preview';
  /* Eremua: zutabea_testu */
  $handler->display->display_options['fields']['field_zutabea_testu_value']['id'] = 'field_zutabea_testu_value';
  $handler->display->display_options['fields']['field_zutabea_testu_value']['table'] = 'node_data_field_zutabea_testu';
  $handler->display->display_options['fields']['field_zutabea_testu_value']['field'] = 'field_zutabea_testu_value';
  $handler->display->display_options['fields']['field_zutabea_testu_value']['ui_name'] = 'zutabea_testu';
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_zutabea_testu_value']['label_type'] = 'none';
  /* Eremua: Edukia: Irudiak (field_argazkiak_irudiak) */
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['id'] = 'field_argazkiak_irudiak_fid';
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['table'] = 'node_data_field_argazkiak_irudiak';
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['field'] = 'field_argazkiak_irudiak_fid';
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_argazkiak_irudiak_fid']['format'] = '300x200_default';
  /* Eremua: iritzi_testua */
  $handler->display->display_options['fields']['field_iritzi_testua_value']['id'] = 'field_iritzi_testua_value';
  $handler->display->display_options['fields']['field_iritzi_testua_value']['table'] = 'node_data_field_iritzi_testua';
  $handler->display->display_options['fields']['field_iritzi_testua_value']['field'] = 'field_iritzi_testua_value';
  $handler->display->display_options['fields']['field_iritzi_testua_value']['ui_name'] = 'iritzi_testua';
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_iritzi_testua_value']['label_type'] = 'none';
  /* Eremua: artikulua_testua */
  $handler->display->display_options['fields']['field_artikulua_testua_value']['id'] = 'field_artikulua_testua_value';
  $handler->display->display_options['fields']['field_artikulua_testua_value']['table'] = 'node_data_field_artikulua_testua';
  $handler->display->display_options['fields']['field_artikulua_testua_value']['field'] = 'field_artikulua_testua_value';
  $handler->display->display_options['fields']['field_artikulua_testua_value']['ui_name'] = 'artikulua_testua';
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_artikulua_testua_value']['label_type'] = 'none';
  /* Eremua: hitzordua_img */
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['id'] = 'field_hitzordua_img_fid';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['table'] = 'node_data_field_hitzordua_img';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['field'] = 'field_hitzordua_img_fid';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['ui_name'] = 'hitzordua_img';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['element_class'] = 'ko-hitzordua-img';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_hitzordua_img_fid']['format'] = '150x100_default';
  /* Eremua: hitzordua_mota */
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['id'] = 'field_hitzordua_mota_value';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['table'] = 'node_data_field_hitzordua_mota';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['field'] = 'field_hitzordua_mota_value';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['ui_name'] = 'hitzordua_mota';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['label'] = 'Deialdi mota';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_mota_value']['link_to_node'] = 0;
  /* Eremua: Edukia: Hasiera eta bukaera (field_hitzordua_hora) - From date */
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['id'] = 'field_hitzordua_hora_value';
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['table'] = 'node_data_field_hitzordua_hora';
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['field'] = 'field_hitzordua_hora_value';
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['label'] = 'Hasiera eta bukaera';
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hitzordua_hora_value']['link_to_node'] = 0;
  /* Eremua: Nodoa: Lotura */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Irakurri';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'wildcard',
      'context' => 'term.description',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term',
    ),
  );
  $translatables['komunitatearen_home_panels'] = array(
    t('Defaults'),
    t('Komunitatea'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Testu eremua'),
    t('<div class="ko-footer">
<span class="ko-footer-texto"><a href="/komunitatea">Komunitate gehiago</a></span>
</div>'),
    t('...'),
    t('Content pane'),
    t('Deialdi mota'),
    t('Hasiera eta bukaera'),
    t('Irakurri'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_nodes_users
  $view = new view;
  $view->name = 'komunitatearen_nodes_users';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Komunitateko kideak';
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Erlazioa: Nodoa: Egilea */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Nodoa: User posted or commented */
  $handler->display->display_options['arguments']['uid_touch']['id'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_touch']['field'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['default_action'] = 'summary desc by count';
  $handler->display->display_options['arguments']['uid_touch']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_touch']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_touch']['default_argument_skip_url'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'argazkiak' => 'argazkiak',
    'artikulua' => 'artikulua',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['komunitatearen_nodes_users'] = array(
    t('Defaults'),
    t('Komunitateko kideak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('erabiltzailea'),
    t('Irudia'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_user_data
  $view = new view;
  $view->name = 'komunitatearen_user_data';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Sortze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Deskribapena';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value_1]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 0;
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $translatables['komunitatearen_user_data'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Sortze data'),
    t('Deskribapena'),
    t('Web'),
    t('[value_1]'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_user_posts
  $view = new view;
  $view->name = 'komunitatearen_user_posts';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Azken sarrerak';
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'argazkiak' => 'argazkiak',
    'artikulua' => 'artikulua',
    'audioa' => 'audioa',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $translatables['komunitatearen_user_posts'] = array(
    t('Defaults'),
    t('Azken sarrerak'),
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
    t('Content pane'),
    t('Argitaratze data'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: komunitatearen_user_r
  $view = new view;
  $view->name = 'komunitatearen_user_r';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Komunitateko kideak';
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Testu hutsa: Globala: Testu eremua */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No existe contenido';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Erlazioa: Erabiltzailea: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 1;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Eremua: Erabiltzailea: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Iragazkia: Erabiltzailea: Zereginak */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['komunitatearen_user_r'] = array(
    t('Defaults'),
    t('Komunitateko kideak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No existe contenido'),
    t('nodoak'),
    t('Uid'),
  );

  $views[$view->name] = $view;

  // Exported view: user_content
  $view = new view;
  $view->name = 'user_content';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Nire Edukiak';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'new_comments' => 'new_comments',
    'type' => 'type',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Testu hutsa: Globala: Testu eremua */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '.';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Eremua: Nodoa: Izenburua */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Eremua: Nodoa: Argitaratze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Eremua: Nodoa: Iruzkin berriak */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['external'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['new_comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['new_comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['new_comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['new_comments']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['new_comments']['hide_empty'] = 0;
  $handler->display->display_options['fields']['new_comments']['empty_zero'] = 0;
  $handler->display->display_options['fields']['new_comments']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['new_comments']['format_plural'] = 0;
  $handler->display->display_options['fields']['new_comments']['link_to_comment'] = 1;
  /* Eremua: Nodoa: Mota */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Eremua: Nodoa: Editatu lotura */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Editatu';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Eremua: Nodoa: Ezabatu lotura */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Ezabatu';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  /* Ordenazio irizpidea: Nodoa: Argitaratze data */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Iragazkia: Nodoa: Mota */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'argazkiak' => 'argazkiak',
    'artikulua' => 'artikulua',
    'audioa' => 'audioa',
    'bideoak' => 'bideoak',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'zutabea' => 'zutabea',
  );
  /* Iragazkia: Nodoa: Argitaratua */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['user_content'] = array(
    t('Defaults'),
    t('Nire Edukiak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('.'),
    t('Izenburua'),
    t('Argitaratze data'),
    t('Iruzkin berriak'),
    t(','),
    t('Mota'),
    t('Editatu'),
    t('Ezabatu'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  // Exported view: user_data
  $view = new view;
  $view->name = 'user_data';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Eremua: Erabiltzailea: Izena */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Eremua: Erabiltzailea: Irudia */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 0;
  /* Eremua: Erabiltzailea: Sortze data */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Eremua: Profila: Informazio pertsonala: Web-gunea */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_web';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Web';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 0;
  /* Eremua: Profila: Informazio pertsonala: Azalpen laburra */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_azalpen';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Deskribapena';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  /* Eremua: Erabiltzailea: Editatu lotura */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Editatu nire profila';
  /* Argumentua: Erabiltzailea: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $translatables['user_data'] = array(
    t('Defaults'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementuak orriak'),
    t('- Dena -'),
    t('Desplazamendua'),
    t('Sortze data'),
    t('Web'),
    t('Deskribapena'),
    t('Editatu nire profila'),
    t('Guztiak'),
  );

  $views[$view->name] = $view;

  return $views;
}
