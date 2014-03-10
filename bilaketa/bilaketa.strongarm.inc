<?php

/**
 * Implementation of hook_strongarm().
 */
function bilaketa_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_default_search';
  $strongarm->value = 'apachesolr_search';
  $export['search_config_default_search'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_category_all';
  $strongarm->value = 1;
  $export['search_config_disable_category_all'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_index_type';
  $strongarm->value = array(
    'aiaraldea_banner' => 'aiaraldea_banner',
    'elkarrizketa_aurr' => 'elkarrizketa_aurr',
    'short_notice' => 'short_notice',
    'panel' => 'panel',
    'albiste' => 0,
    'artikulua' => 0,
    'flickr_image_set' => 0,
    'argazkiak' => 0,
    'bideo' => 0,
    'bideoak' => 0,
    'deialdi' => 0,
    'egunkari_alea' => 0,
    'hitzordua' => 0,
    'iritzi_gutuna' => 0,
    'page' => 0,
    'proposamena' => 0,
    'zutabea' => 0,
  );
  $export['search_config_disable_index_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_negative';
  $strongarm->value = 0;
  $export['search_config_disable_negative'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_or';
  $strongarm->value = 0;
  $export['search_config_disable_or'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_phrase';
  $strongarm->value = 0;
  $export['search_config_disable_phrase'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_type';
  $strongarm->value = array(
    'albiste' => 'albiste',
    'artikulua' => 'artikulua',
    'flickr_image_set' => 'flickr_image_set',
    'argazkiak' => 'argazkiak',
    'aiaraldea_banner' => 'aiaraldea_banner',
    'bideo' => 'bideo',
    'bideoak' => 'bideoak',
    'deialdi' => 'deialdi',
    'egunkari_alea' => 'egunkari_alea',
    'elkarrizketa_aurr' => 'elkarrizketa_aurr',
    'hitzordua' => 'hitzordua',
    'iritzi_gutuna' => 'iritzi_gutuna',
    'short_notice' => 'short_notice',
    'page' => 'page',
    'panel' => 'panel',
    'proposamena' => 'proposamena',
    'zutabea' => 'zutabea',
    'all' => 0,
  );
  $export['search_config_disable_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '0';
  $export['search_cron_limit'] = $strongarm;

  return $export;
}
