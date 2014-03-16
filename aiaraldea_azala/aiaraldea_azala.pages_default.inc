<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function aiaraldea_azala_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_autumn_2011';
  $page->task = 'page';
  $page->admin_title = 'Nagusia';
  $page->admin_description = '';
  $page->path = 'main_autumn_2011';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main_autumn_2011_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'main_autumn_2011';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'css_id' => 'main_autumn_2011_panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'ipe',
  );
  $display = new panels_display;
  $display->layout = 'akl_column_three';
  $display->layout_settings = '';
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'top_right' => NULL,
      'medium_left' => NULL,
      'medium_center' => NULL,
      'medium_right' => NULL,
      'bottom' => NULL,
      'bottom_right' => NULL,
      'header' => NULL,
      1 => NULL,
      2 => NULL,
      3 => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_alpha' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
    'center' => array(
      'style' => 'default',
    ),
    'top_right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
    'header' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = 'orri_nagusiko_bideo_berriak';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'orri_nagusiko_plaza';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aside_alpha'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aside_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'egunkaria-panel_pane_azkena';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aside_alpha'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'orri_nagusiko_agenda';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['aside_alpha'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'proposamenak_front_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'kulturleihoa',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['aside_alpha'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatearen_home_panels-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['aside_beta'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Eguraldia Amurrion',
      'title' => 'Eguraldia Amurrion',
      'body' => '<p><script type="text/javascript" src="http://www.aemet.es/eu/eltiempo/prediccion/municipios/launchwidget/amurrio-id01002?w=g3p01110010ohmffffffw300z167xCCCC00t2D3C01r0s3n2"></script></p><noscript><a target=\'_blank\' style=\'font-weight: bold;font-size: 1.20em;\' href=\'http://www.aemet.es/eu/eltiempo/prediccion/municipios/amurrio-id01002\'>Eguraldia. Kontsultatu AEMETeko iragarpena-erako Amurrio</a></noscript>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-6'] = $pane;
    $display->panels['aside_beta'][1] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Twitter timeline',
      'title' => 'Aiaraldea Twitterren',
      'body' => '<a class="twitter-timeline" href="https://twitter.com/aiaraldea" data-widget-id="344721690888122368">@aiaraldea(r)en Txioak</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-7'] = $pane;
    $display->panels['aside_beta'][2] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'aside_beta';
    $pane->type = 'views';
    $pane->subtype = 'azala_azken_iruzkinak_1_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Azken Iruzkinak',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-8'] = $pane;
    $display->panels['aside_beta'][3] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'aside_beta';
    $pane->type = 'block';
    $pane->subtype = 'adzerk-azk49793';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-9'] = $pane;
    $display->panels['aside_beta'][4] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'aside_beta';
    $pane->type = 'views';
    $pane->subtype = 'aiaraldea_banner_nodequeue_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-10'] = $pane;
    $display->panels['aside_beta'][5] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'irratia_feeds-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '60',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-11'] = $pane;
    $display->panels['aside_beta'][6] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'header_alpha';
    $pane->type = 'views';
    $pane->subtype = 'short_notices';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-12'] = $pane;
    $display->panels['header_alpha'][0] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'header_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'albisteak_azala_1_1-estra_gunea_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Albisteak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-13'] = $pane;
    $display->panels['header_beta'][0] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title Aktualitatea',
      'title' => '',
      'body' => '<h2 class="pane-title">Aktualitatea</h2>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-14'] = $pane;
    $display->panels['main'][0] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-15'] = $pane;
    $display->panels['main'][1] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-16'] = $pane;
    $display->panels['main'][2] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '1',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-17'] = $pane;
    $display->panels['main'][3] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-18'] = $pane;
    $display->panels['main'][4] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-19'] = $pane;
    $display->panels['main'][5] = 'new-19';
    $pane = new stdClass;
    $pane->pid = 'new-20';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-20'] = $pane;
    $display->panels['main'][6] = 'new-20';
    $pane = new stdClass;
    $pane->pid = 'new-21';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-21'] = $pane;
    $display->panels['main'][7] = 'new-21';
    $pane = new stdClass;
    $pane->pid = 'new-22';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-22'] = $pane;
    $display->panels['main'][8] = 'new-22';
    $pane = new stdClass;
    $pane->pid = 'new-23';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_5',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-23'] = $pane;
    $display->panels['main'][9] = 'new-23';
    $pane = new stdClass;
    $pane->pid = 'new-24';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-24'] = $pane;
    $display->panels['main'][10] = 'new-24';
    $pane = new stdClass;
    $pane->pid = 'new-25';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $display->content['new-25'] = $pane;
    $display->panels['main'][11] = 'new-25';
    $pane = new stdClass;
    $pane->pid = 'new-26';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $display->content['new-26'] = $pane;
    $display->panels['main'][12] = 'new-26';
    $pane = new stdClass;
    $pane->pid = 'new-27';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $display->content['new-27'] = $pane;
    $display->panels['main'][13] = 'new-27';
    $pane = new stdClass;
    $pane->pid = 'new-28';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aktualitate gehiago lotura',
      'title' => '',
      'body' => '<div class="more-link"><a href="aktualitatea">Aktualitate gehiago</a></div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $display->content['new-28'] = $pane;
    $display->panels['main'][14] = 'new-28';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_autumn_2011'] = $page;

 return $pages;

}
