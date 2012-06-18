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
  $strongarm->value = 'node';
  $export['search_config_default_search'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_category_all';
  $strongarm->value = 0;
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
    'vimeo_feed' => 'vimeo_feed',
    'youtube_feed' => 'youtube_feed',
    'albiste' => 0,
    'flickr_image_set' => 0,
    'bideo' => 0,
    'deialdi' => 0,
    'page' => 0,
    'proposamena' => 0,
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
    'aiaraldea_banner' => 'aiaraldea_banner',
    'elkarrizketa_aurr' => 'elkarrizketa_aurr',
    'short_notice' => 'short_notice',
    'panel' => 'panel',
    'vimeo_feed' => 'vimeo_feed',
    'youtube_feed' => 'youtube_feed',
    'all' => 0,
    'albiste' => 0,
    'flickr_image_set' => 0,
    'bideo' => 0,
    'deialdi' => 0,
    'page' => 0,
    'proposamena' => 0,
  );
  $export['search_config_disable_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '100';
  $export['search_cron_limit'] = $strongarm;

  return $export;
}
