<?php

/**
 * Implementation of hook_apachesolr_environments().
 */
function bilaketa_apachesolr_environments() {
  $export = array();

  $environment = new stdClass;
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'openshift server';
  $environment->url = 'http://solr-aiaraldea.rhcloud.com/solr/aiaraldea';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'albiste',
      1 => 'argazkiak',
      2 => 'artikulua',
      3 => 'bideo',
      4 => 'bideoak',
      5 => 'egunkari_alea',
      6 => 'flickr_image_set',
      7 => 'iritzi_gutuna',
      8 => 'page',
      9 => 'proposamena',
      10 => 'zutabea',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
