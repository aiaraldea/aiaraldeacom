<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function aiaraldea_bideoak_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'feed',
    'language' => 'eu',
    'uid' => '1',
    'status' => '1',
    'created' => '1260913125',
    'changed' => '1288355938',
    'comment' => '2',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'blip.tv aiaraldea',
    'body' => 'aiaraldeainfo',
    'teaser' => 'aiaraldeainfo',
    'log' => '',
    'revision_timestamp' => '1288355938',
    'format' => '1',
    'name' => 'mairua',
    'picture' => '',
    'data' => 'a:8:{s:11:"remember_me";b:0;s:15:"l10n_client_key";s:36:"744:2ffba450fcda45be3e8c73f54a5a3076";s:13:"form_build_id";s:37:"form-e644dcde8b9000c469924c575e64d639";s:18:"admin_compact_mode";b:1;s:10:"blog_theme";s:3:"sky";s:5:"Title";s:14:"Druiden txokoa";s:11:"Description";s:35:"Aiaraldeko web garatzailearen bloga";s:6:"format";s:1:"1";}',
    'path' => 'content/bliptv-aiaraldea',
    'feed' => array(
      'nid' => '40',
      'vid' => '40',
      'url' => 'http://aiaraldea.blip.tv/rss',
      'feed_type' => 'XML feed',
      'processors' => array(
        '0' => 'feedapi_node',
      ),
      'parsers' => array(
        '0' => 'parser_simplepie',
      ),
      'next_refresh_time' => '1312840034',
      'hash' => 'fc2f5d26498d8c317047cb28e11d44ea',
      'link' => 'http://www.aiaraldea.com',
      'settings' => array(
        'feedapi_url' => 'http://aiaraldea.blip.tv/rss',
        'refresh_on_create' => 1,
        'update_existing' => 1,
        'refresh_time' => '0',
        'items_delete' => '0',
        'parsers' => array(
          'parser_simplepie' => array(
            'cache_lifetime' => '3600',
          ),
        ),
        'processors' => array(
          'feedapi_node' => array(
            'content_type' => 'bideo',
            'input_format' => '0',
            'node_date' => 'feed',
            'x_dedupe' => '0',
          ),
        ),
      ),
      'half_done' => '1',
    ),
    'last_comment_timestamp' => '1260913125',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'radioactivity' => array(
      'energy' => array(
        '1' => 1,
        '2' => 1.8827065040784,
      ),
    ),
    'uuid' => '7fd115e0-cc28-11e0-8eba-0024e8f3c06a',
    'revision_uuid' => '7fd13dd6-cc28-11e0-8eba-0024e8f3c06a',
    'pathauto_perform_alias' => FALSE,
    'date' => '2009-12-15 23:38:45 +0200',
  );
  return $nodes;
}
