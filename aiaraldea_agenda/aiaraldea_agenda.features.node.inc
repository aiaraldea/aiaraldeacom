<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _aiaraldea_agenda_node_info() {
  $items = array(
    'deialdi' => array(
      'name' => t('Deialdi'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '1',
      'body_label' => t('Testua'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
