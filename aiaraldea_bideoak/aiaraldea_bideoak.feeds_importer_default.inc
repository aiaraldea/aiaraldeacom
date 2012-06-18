<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function aiaraldea_bideoak_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vimeo_feed';
  $feeds_importer->config = array(
    'name' => 'Vimeo feed',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'AiaraldeaVimeoParser',
      'config' => array(
        'vimeo_key' => 'f59f443ff7c3d1defcf5c0665bf49344fb25f8df',
        'vimeo_secret' => '9b900b46962c455a78820b3d6e16133964f464a2',
        'vimeo_user_id' => 'aiaraldea',
        'vimeo_data_request' => 'videos.getAll',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'bideo',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'etiketak',
            'target' => 'taxonomy:features_etiketak',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'non',
            'target' => 'taxonomy:features_aiaraldea_non',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'published_timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'video_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'watch_page',
            'target' => 'field_bideo',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jatorria',
            'target' => 'taxonomy:features_bideo_jatorria',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
      ),
    ),
    'content_type' => 'vimeo_feed',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['vimeo_feed'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'youtube_feed';
  $feeds_importer->config = array(
    'name' => 'Youtube feed',
    'description' => 'Youtube feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'AiaraldeaYoutubeParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'bideo',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'field_bideo',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'video_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'etiketak',
            'target' => 'taxonomy:features_etiketak',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'non',
            'target' => 'taxonomy:features_aiaraldea_non',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'published_timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jatorria',
            'target' => 'taxonomy:features_bideo_jatorria',
            'unique' => FALSE,
          ),
        ),
        'author' => '1',
        'authorize' => 0,
      ),
    ),
    'content_type' => 'youtube_feed',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['youtube_feed'] = $feeds_importer;

  return $export;
}
