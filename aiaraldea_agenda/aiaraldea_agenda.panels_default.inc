<?php

/**
 * Implementation of hook_default_panels_mini().
 */
function aiaraldea_agenda_default_panels_mini() {
  $export = array();

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'agenda_alboko_barra';
  $mini->category = '';
  $mini->admin_title = 'Agenda alboko-barra';
  $mini->admin_description = '';
  $mini->requiredcontexts = FALSE;
  $mini->contexts = FALSE;
  $mini->relationships = FALSE;
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'egutegia-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'agenda/data',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-proposamenak_list-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'aste honetako proposamena',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'agenda_agenda_proposamena_pane',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'bidali zure deialdia',
      'body' => '<p><strong>Aiaraldea</strong> guztiko agenda oharrak bildu nahiko genituzke txoko honetan ekitaldiak, gizarte gaietakoak, kirol jarduerak, festak eta ospakizunak, kontzertuak, erakusketak...</p>
<p>Horretarako baina, komunikazio leiho txiki honetan zure ekarpena ezinbestekoa zaigu. Bidali egizu ondoren azaltzen den eposta helbidera zure deialdi proposamena eta berehalakoan argitaratuko dugu txoko honetan.</p>
<p>Zehaztu ezazu mesedez, tokia, ekitaldi mota, eguna, ordua eta antolatzailea zein den.</p>
<p class="agenda_eposta">><a href="mailto:agenda@aiaraldea.com">agenda@aiaraldea.com</a></p>

',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'agenda_albokobarra_harremanetan',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['agenda_alboko_barra'] = $mini;

  return $export;
}
