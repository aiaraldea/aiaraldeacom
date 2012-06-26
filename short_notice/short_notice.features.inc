<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function short_notice_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function short_notice_node_info() {
  $items = array(
    'short_notice' => array(
      'name' => t('Ohar laburra'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Gorputza'),
      'min_word_count' => '1',
      'help' => t('<strong>ADI!!</strong><br/>
Hemen argitaratuko duzun edukia seguruenez <a href="http://www.twitter.com/aiaraldea">Twitterren</a> ere plazaratu behar duzu.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function short_notice_views_api() {
  return array(
    'api' => '3.0',
  );
}
