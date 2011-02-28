<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_banner_views_default_views() {
  $views = array();

  // Exported view: aiaraldea_banner_nodequeue_1
  $view = new view;
  $view->name = 'aiaraldea_banner_nodequeue_1';
  $view->description = 'Display a list of all nodes in queue \'banner queue 1\'';
  $view->tag = 'nodequeue';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->override_option('relationships', array(
    'nodequeue_rel' => array(
      'id' => 'nodequeue_rel',
      'table' => 'node',
      'field' => 'nodequeue_rel',
      'label' => 'queue',
      'required' => 1,
      'limit' => TRUE,
      'qids' => array(
        '1' => '1',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_banner_link_url' => array(
      'label' => 'Banner link',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_banner_link_url',
      'table' => 'node_data_field_banner_link',
      'field' => 'field_banner_link_url',
      'relationship' => 'none',
    ),
    'field_banner_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => '[field_banner_link_url]',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'image_plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_banner_image_fid',
      'table' => 'node_data_field_banner_image',
      'field' => 'field_banner_image_fid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'position' => array(
      'id' => 'position',
      'table' => 'nodequeue_nodes',
      'field' => 'position',
      'order' => 'ASC',
      'relationship' => 'nodequeue_rel',
    ),
  ));
  $handler->override_option('arguments', array(
    'qid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'Guztiak',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'qid',
      'table' => 'nodequeue_nodes',
      'field' => 'qid',
      'relationship' => 'nodequeue_rel',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '5' => 0,
        '4' => 0,
      ),
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'aiaraldea_banner' => 0,
        'proposamena' => 0,
        'panel' => 0,
        'albiste' => 0,
        'bideo' => 0,
        'deialdi' => 0,
        'feed' => 0,
        'page' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '2' => 0,
        '3' => 0,
        '1' => 0,
        '4' => 0,
        '5' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Banner queue');
  $handler->override_option('use_pager', '1');
  $handler->override_option('use_more', 1);
  $handler->override_option('use_more_text', 'gehiago');
  $handler = $view->new_display('block', 'Blokea', 'block');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
  ));
  $handler->override_option('block_description', 'Banner queue');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
