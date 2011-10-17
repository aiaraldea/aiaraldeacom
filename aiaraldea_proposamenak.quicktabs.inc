<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function aiaraldea_proposamenak_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'proposamenak';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'proposamenak';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_proposamenak_list-block_2',
      'hide_title' => 1,
      'title' => 'Musika',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_proposamenak_list-block_3',
      'hide_title' => 1,
      'title' => 'Literatura',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_proposamenak_list-block_4',
      'hide_title' => 1,
      'title' => 'Zinema',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_proposamenak_list-block_1',
      'hide_title' => 1,
      'title' => 'Agenda',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';
  $export['proposamenak'] = $quicktabs;

  return $export;
}
