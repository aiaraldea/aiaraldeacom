<?php

/**
 * Implementation of hook_views_default_views().
 */
function flickr_image_sets_views_default_views() {
  $views = array();

  // Exported view: flickr_image_sets
  $view = new view;
  $view->name = 'flickr_image_sets';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Lehenespenak */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->display->display_options['title'] = 'Argazki bildumak';
  $handler->display->display_options['use_more_text'] = 'gehiago';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ezarri';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Garbitu';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 24;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementuak orriak';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Dena -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamendua';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
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
  $handler->display->display_options['fields']['field_photo_set_id']['format'] = 't_primary_for_sets';
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
  /* Argumentua: Taxonomia: Termino */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['title'] = 'Argazki bildumak: %1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['validate_type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vids'] = array(
    2 => 2,
    1 => 1,
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
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

  /* Display: Orria */
  $handler = $view->new_display('page', 'Orria', 'page_1');
  $handler->display->display_options['path'] = 'argazkiak';
  $translatables['flickr_image_sets'] = array(
    t('Lehenespenak'),
    t('Argazki bildumak'),
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
    t('Argazki bildumak: %1'),
    t('Nodo: Mota'),
    t('Orria'),
  );

  $views[$view->name] = $view;

  // Exported view: most_viewed_flickr_image_sets
  $view = new view;
  $view->name = 'most_viewed_flickr_image_sets';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 12;
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
  $handler->display->display_options['fields']['field_photo_set_id']['format'] = 't_primary_for_sets';
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
  /* Ordenazio irizpidea: Radioactivity (ikusienak astean): Node energy */
  $handler->display->display_options['sorts']['energy']['id'] = 'energy';
  $handler->display->display_options['sorts']['energy']['table'] = 'radioactivity_node_1_s';
  $handler->display->display_options['sorts']['energy']['field'] = 'energy';
  $handler->display->display_options['sorts']['energy']['order'] = 'DESC';
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
  $translatables['most_viewed_flickr_image_sets'] = array(
    t('Lehenespenak'),
    t('gehiago'),
    t('Ezarri'),
    t('Garbitu'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nodo: Mota'),
  );

  $views[$view->name] = $view;

  return $views;
}
