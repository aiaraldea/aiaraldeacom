<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function aiaraldea_menua_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'goiko menuaren placeholder';
  $fe_block_boxes->format = '4';
  $fe_block_boxes->machine_name = 'goiko_menua_placeholder';
  $fe_block_boxes->body = '&nbsp;';

  $export['goiko_menua_placeholder'] = $fe_block_boxes;

  return $export;
}
