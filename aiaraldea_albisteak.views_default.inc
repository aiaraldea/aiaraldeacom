<?php

/**
 * Implementation of hook_views_default_views().
 */
function aiaraldea_albisteak_views_default_views() {
  $views = array();

  // Exported view: albisteak
  $view = new view;
  $view->name = 'albisteak';
  $view->description = 'Albisteak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'nid' => array(
          'label' => 'Nid',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'exclude' => 1,
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'relationship' => 'none',
      ),
      'value' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_user' => 0,
          'exclude' => 0,
          'id' => 'value',
          'table' => 'profile_values_profile_izen_abizenak',
          'field' => 'value',
          'relationship' => 'none',
      ),
      'tid' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'type' => 'separator',
          'separator' => ', ',
          'link_to_taxonomy' => 0,
          'limit' => 1,
          'vids' => array(
              2 => 2,
              3 => 0,
              1 => 0,
              4 => 0,
          ),
          'exclude' => 0,
          'id' => 'tid',
          'table' => 'term_node',
          'field' => 'tid',
          'relationship' => 'none',
      ),
      'created' => array(
          'label' => '',
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
          'date_format' => 'custom',
          'custom_date_format' => 'Y.m.d',
          'exclude' => 0,
          'id' => 'created',
          'table' => 'node',
          'field' => 'created',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
      'title' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 1,
          'exclude' => 0,
          'id' => 'title',
          'table' => 'node',
          'field' => 'title',
          'relationship' => 'none',
      ),
      'field_embeddedimages_fid_1' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'albisteak_zerrendak_linked',
          'multiple' => array(
              'group' => 1,
              'multiple_number' => '1',
              'multiple_from' => '0',
              'multiple_reversed' => 0,
          ),
          'exclude' => 0,
          'id' => 'field_embeddedimages_fid_1',
          'table' => 'node_data_field_embeddedimages',
          'field' => 'field_embeddedimages_fid',
          'relationship' => 'none',
      ),
      'body' => array(
          'label' => '',
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
              'trim' => 1,
              'max_length' => '200',
              'word_boundary' => 1,
              'ellipsis' => 1,
              'strip_tags' => 1,
              'html' => 1,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'exclude' => 0,
          'id' => 'body',
          'table' => 'node_revisions',
          'field' => 'body',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
      'comment_count' => array(
          'label' => '',
          'alter' => array(
              'alter_text' => 0,
              'text' => '[comment_count] erantzun',
              'make_link' => 1,
              'path' => 'node/[nid]#comment-form',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => 'Komentatu',
          'hide_empty' => 0,
          'empty_zero' => 1,
          'set_precision' => FALSE,
          'precision' => 0,
          'decimal' => '.',
          'separator' => ',',
          'prefix' => '',
          'suffix' => ' erantzun',
          'exclude' => 0,
          'id' => 'comment_count',
          'table' => 'node_comment_statistics',
          'field' => 'comment_count',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
  ));
  $handler->override_option('sorts', array(
      'created' => array(
          'order' => 'DESC',
          'granularity' => 'minute',
          'id' => 'created',
          'table' => 'node',
          'field' => 'created',
          'relationship' => 'none',
      ),
  ));
  $handler->override_option('arguments', array(
      'name' => array(
          'default_action' => 'ignore',
          'style_plugin' => 'default_summary',
          'style_options' => array(),
          'wildcard' => 'all',
          'wildcard_substitution' => 'Guztiak',
          'title' => 'Albisteak: %1',
          'breadcrumb' => '',
          'default_argument_type' => 'fixed',
          'default_argument' => '',
          'validate_type' => 'none',
          'validate_fail' => 'not found',
          'glossary' => 0,
          'ignorecase' => 0,
          'limit' => '0',
          'case' => 'none',
          'path_case' => 'none',
          'transform_dash' => 0,
          'add_table' => 0,
          'require_value' => 0,
          'id' => 'name',
          'table' => 'term_data',
          'field' => 'name',
          'validate_user_argument_type' => 'uid',
          'validate_user_roles' => array(
              2 => 0,
              8 => 0,
              11 => 0,
              6 => 0,
              7 => 0,
              5 => 0,
          ),
          'override' => array(
              'button' => 'Override',
          ),
          'relationship' => 'none',
          'default_options_div_prefix' => '',
          'default_taxonomy_tid_term_page' => 0,
          'default_taxonomy_tid_node' => 0,
          'default_taxonomy_tid_limit' => 0,
          'default_taxonomy_tid_vids' => array(
              2 => 0,
              3 => 0,
              1 => 0,
              4 => 0,
              5 => 0,
          ),
          'default_argument_user' => 0,
          'default_argument_fixed' => '',
          'default_argument_php' => '',
          'validate_argument_node_type' => array(
              'deialdi' => 0,
              'albiste' => 0,
              'aiaraldea_banner' => 0,
              'proposamena' => 0,
              'flickr_image_set' => 0,
              'short_notice' => 0,
              'udako_argazkiak_feed' => 0,
              'bideo' => 0,
              'feed' => 0,
              'panel' => 0,
              'page' => 0,
          ),
          'validate_argument_node_access' => 0,
          'validate_argument_nid_type' => 'nid',
          'validate_argument_vocabulary' => array(
              2 => 0,
              3 => 0,
              1 => 0,
              4 => 0,
              5 => 0,
          ),
          'validate_argument_type' => 'tid',
          'validate_argument_transform' => 0,
          'validate_user_restrict_roles' => 0,
          'validate_argument_php' => '',
      ),
  ));
  $handler->override_option('filters', array(
      'type' => array(
          'operator' => 'in',
          'value' => array(
              'albiste' => 'albiste',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
      ),
      'status' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'status',
          'table' => 'node',
          'field' => 'status',
          'relationship' => 'none',
      ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));
  $handler->override_option('title', 'Albisteak');
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('row_options', array(
      'inline' => array(
          'tid' => 'tid',
          'created' => 'created',
      ),
      'separator' => '',
      'hide_empty' => 0,
  ));
  $handler = $view->new_display('block', 'Blokea', 'block_1');
  $handler->override_option('items_per_page', 3);
  $handler->override_option('use_pager', '0');
  $handler->override_option('use_more', 1);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('use_more_text', 'Albiste gehiago');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Herriaren albisteak', 'block_2');
  $handler->override_option('fields', array(
      'nid' => array(
          'label' => 'Nid',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'exclude' => 1,
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'relationship' => 'none',
      ),
      'title' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 1,
          'exclude' => 0,
          'id' => 'title',
          'table' => 'node',
          'field' => 'title',
          'relationship' => 'none',
      ),
      'changed' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'date_format' => 'custom',
          'custom_date_format' => 'Y.n.j',
          'exclude' => 0,
          'id' => 'changed',
          'table' => 'node',
          'field' => 'changed',
          'override' => array(
              'button' => 'Use default',
          ),
          'relationship' => 'none',
      ),
  ));
  $handler->override_option('use_pager', '0');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->override_option('fields', array(
      'nid' => array(
          'label' => 'Nid',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'exclude' => 1,
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'relationship' => 'none',
      ),
      'value' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_user' => 0,
          'exclude' => 0,
          'id' => 'value',
          'table' => 'profile_values_profile_izen_abizenak',
          'field' => 'value',
          'relationship' => 'none',
      ),
      'tid' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'type' => 'separator',
          'separator' => ', ',
          'link_to_taxonomy' => 0,
          'limit' => 1,
          'vids' => array(
              2 => 2,
              3 => 0,
              1 => 0,
              4 => 0,
          ),
          'exclude' => 0,
          'id' => 'tid',
          'table' => 'term_node',
          'field' => 'tid',
          'relationship' => 'none',
      ),
      'created' => array(
          'label' => '',
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
          'date_format' => 'custom',
          'custom_date_format' => 'Y.m.d',
          'exclude' => 0,
          'id' => 'created',
          'table' => 'node',
          'field' => 'created',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
      'title' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 1,
          'exclude' => 0,
          'id' => 'title',
          'table' => 'node',
          'field' => 'title',
          'relationship' => 'none',
      ),
      'field_embeddedimages_fid_1' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'albisteak_zerrendak_linked',
          'multiple' => array(
              'group' => 1,
              'multiple_number' => '1',
              'multiple_from' => '0',
              'multiple_reversed' => 0,
          ),
          'exclude' => 0,
          'id' => 'field_embeddedimages_fid_1',
          'table' => 'node_data_field_embeddedimages',
          'field' => 'field_embeddedimages_fid',
          'relationship' => 'none',
      ),
      'body' => array(
          'label' => '',
          'alter' => array(
              'alter_text' => 0,
              'text' => '',
              'make_link' => 0,
              'path' => '',
              'absolute' => 0,
              'link_class' => '',
              'alt' => '',
              'rel' => '',
              'prefix' => '',
              'suffix' => '',
              'target' => '',
              'help' => '',
              'trim' => 1,
              'max_length' => '400',
              'word_boundary' => 1,
              'ellipsis' => 1,
              'html' => 1,
              'strip_tags' => 1,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'exclude' => 0,
          'id' => 'body',
          'table' => 'node_revisions',
          'field' => 'body',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Erabili lehenetsia',
          ),
      ),
      'comment_count' => array(
          'label' => '',
          'alter' => array(
              'alter_text' => 0,
              'text' => '[comment_count] erantzun',
              'make_link' => 1,
              'path' => 'node/[nid]#comment-form',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => 'Komentatu',
          'hide_empty' => 0,
          'empty_zero' => 1,
          'set_precision' => FALSE,
          'precision' => 0,
          'decimal' => '.',
          'separator' => ',',
          'prefix' => '',
          'suffix' => ' erantzun',
          'exclude' => 0,
          'id' => 'comment_count',
          'table' => 'node_comment_statistics',
          'field' => 'comment_count',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
  ));
  $handler->override_option('pane_title', '');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
      'name' => 'View panes',
      'weight' => 0,
  ));
  $handler->override_option('allow', array(
      'use_pager' => 0,
      'items_per_page' => 0,
      'offset' => 0,
      'link_to_view' => 0,
      'more_link' => 0,
      'path_override' => 0,
      'title_override' => 'title_override',
      'exposed_form' => 0,
      'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array(
      'name' => array(
          'type' => 'panel',
          'context' => 'term.description',
          'context_optional' => 0,
          'panel' => '0',
          'fixed' => '',
          'label' => 'Taxonomia: Termino',
      ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  // Exported view: albisteak_rss
  $view = new view;
  $view->name = 'albisteak_rss';
  $view->description = 'Albisteak RSS';
  $view->tag = 'rss, albisteak';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Lehenespenak', 'default');
  $handler->override_option('arguments', array(
      'type' => array(
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
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'validate_user_argument_type' => 'uid',
          'validate_user_roles' => array(
              '2' => 0,
              '3' => 0,
              '5' => 0,
              '4' => 0,
          ),
          'override' => array(
              'button' => 'Override',
          ),
          'relationship' => 'none',
          'default_options_div_prefix' => '',
          'default_argument_fixed' => '',
          'default_argument_user' => 0,
          'default_argument_php' => '',
          'validate_argument_node_type' => array(
              'panel' => 0,
              'albiste' => 0,
              'audio_eduki_mota' => 0,
              'bideo' => 0,
              'deialdi' => 0,
              'feed' => 0,
              'flickr_set' => 0,
              'page' => 0,
              'proposamena' => 0,
              'test1' => 0,
          ),
          'validate_argument_node_access' => 0,
          'validate_argument_nid_type' => 'nid',
          'validate_argument_vocabulary' => array(
              '2' => 0,
              '3' => 0,
              '1' => 0,
              '4' => 0,
          ),
          'validate_argument_type' => 'tid',
          'validate_argument_transform' => 0,
          'validate_user_restrict_roles' => 0,
          'validate_argument_php' => '',
      ),
      'name' => array(
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
          'glossary' => 0,
          'limit' => '0',
          'case' => 'none',
          'path_case' => 'none',
          'transform_dash' => 0,
          'add_table' => 0,
          'require_value' => 0,
          'id' => 'name',
          'table' => 'term_data',
          'field' => 'name',
          'validate_user_argument_type' => 'uid',
          'validate_user_roles' => array(
              '2' => 0,
              '3' => 0,
              '5' => 0,
              '4' => 0,
          ),
          'override' => array(
              'button' => 'Override',
          ),
          'relationship' => 'none',
          'default_options_div_prefix' => '',
          'default_argument_fixed' => '',
          'default_argument_user' => 0,
          'default_argument_php' => '',
          'validate_argument_node_type' => array(
              'panel' => 0,
              'albiste' => 0,
              'audio_eduki_mota' => 0,
              'bideo' => 0,
              'deialdi' => 0,
              'feed' => 0,
              'flickr_set' => 0,
              'page' => 0,
              'proposamena' => 0,
              'test1' => 0,
          ),
          'validate_argument_node_access' => 0,
          'validate_argument_nid_type' => 'nid',
          'validate_argument_vocabulary' => array(
              '2' => 0,
              '3' => 0,
              '1' => 0,
              '4' => 0,
          ),
          'validate_argument_type' => 'tid',
          'validate_argument_transform' => 0,
          'validate_user_restrict_roles' => 0,
          'validate_argument_php' => '',
      ),
  ));
  $handler->override_option('filters', array(
      'status' => array(
          'operator' => '=',
          'value' => '1',
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'status',
          'table' => 'node',
          'field' => 'status',
          'override' => array(
              'button' => 'Override',
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
  $handler->override_option('items_per_page', 20);
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
      'relationship' => 'none',
      'build_mode' => 'teaser',
      'links' => 1,
      'comments' => 0,
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
      'mission_description' => FALSE,
      'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
      'relationship' => 'none',
      'item_length' => 'default',
  ));
  $handler->override_option('path', 'feed');
  $handler->override_option('menu', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
      'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
      'name' => 'navigation',
  ));
  $handler->override_option('displays', array());
  $handler->override_option('sitename_title', FALSE);

  $views[$view->name] = $view;

  // Exported view: field_bideo_erlazionatuak
  $view = new view;
  $view->name = 'field_bideo_erlazionatuak';
  $view->description = 'Bideo erlazionatuak';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'field_bideo_embed' => array(
          'label' => '',
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
          'label_type' => 'none',
          'format' => 'bideoa_albistean_linked',
          'multiple' => array(
              'group' => TRUE,
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_bideo_embed',
          'table' => 'node_data_field_bideo',
          'field' => 'field_bideo_embed',
          'relationship' => 'none',
      ),
      'title' => array(
          'label' => '',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 1,
          'exclude' => 0,
          'id' => 'title',
          'table' => 'node',
          'field' => 'title',
          'relationship' => 'none',
      ),
  ));
  $handler->override_option('arguments', array(
      'nid' => array(
          'default_action' => 'default',
          'style_plugin' => 'default_summary',
          'style_options' => array(),
          'wildcard' => 'all',
          'wildcard_substitution' => 'All',
          'title' => '',
          'breadcrumb' => '',
          'default_argument_type' => 'node',
          'default_argument' => '',
          'validate_type' => 'none',
          'validate_fail' => 'not found',
          'break_phrase' => 1,
          'not' => 0,
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'relationship' => 'none',
          'default_options_div_prefix' => '',
          'default_argument_user' => 0,
          'default_argument_fixed' => '',
          'default_argument_php' => '',
          'validate_argument_node_type' => array(
              'blog' => 0,
              'panel' => 0,
              'bideo' => 0,
              'deialdi' => 0,
              'elkarrizketa' => 0,
              'page' => 0,
              'proposamena' => 0,
              'story' => 0,
          ),
          'validate_argument_node_access' => 0,
          'validate_argument_nid_type' => 'nid',
          'validate_argument_vocabulary' => array(
              '3' => 0,
              '1' => 0,
              '2' => 0,
              '4' => 0,
          ),
          'validate_argument_type' => 'tid',
          'user_argument_type' => '',
          'restrict_user_roles' => 0,
          'user_roles' => array(),
          'image_size' => array(
              '_original' => '_original',
              'thumbnail' => 'thumbnail',
              'preview' => 'preview',
          ),
          'validate_argument_php' => '',
          'validate_user_argument_type' => 'uid',
          'validate_user_roles' => array(
              '2' => 0,
              '3' => 0,
              '4' => 0,
          ),
          'override' => array(
              'button' => 'Override',
          ),
          'validate_argument_transform' => 0,
          'validate_user_restrict_roles' => 0,
      ),
  ));
  $handler->override_option('filters', array(
      'type' => array(
          'operator' => 'in',
          'value' => array(
              'bideo' => 'bideo',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
      ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
      'grouping' => '',
      'type' => 'ul',
  ));
  $handler = $view->new_display('block', 'Blokea', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: albisteak_etiketak
  $view = new view;
  $view->name = 'albisteak_etiketak';
  $view->description = 'Albisteen etiketak';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'name' => array(
          'label' => '',
          'alter' => array(
              'alter_text' => 0,
              'text' => '',
              'make_link' => 1,
              'path' => 'albisteak/[name]',
              'absolute' => 0,
              'link_class' => '',
              'alt' => '',
              'rel' => '',
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
          'hide_alter_empty' => 1,
          'link_to_taxonomy' => 0,
          'exclude' => 0,
          'id' => 'name',
          'table' => 'term_data',
          'field' => 'name',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
      'name_1' => array(
          'label' => 'Vocabulary name',
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
              'strip_tags' => 0,
              'html' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'exclude' => 1,
          'id' => 'name_1',
          'table' => 'vocabulary',
          'field' => 'name',
          'relationship' => 'none',
      ),
      'nid' => array(
          'label' => '',
          'alter' => array(
              'alter_text' => 1,
              'text' => '([nid])',
              'make_link' => 0,
              'path' => '',
              'absolute' => 0,
              'link_class' => '',
              'alt' => '',
              'rel' => '',
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
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'exclude' => 0,
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
      'views_sql_groupedfields' => array(
          'label' => 'Group By Fields',
          'alter' => array(
              'alter_text' => FALSE,
              'text' => '',
              'make_link' => FALSE,
              'path' => '',
              'alt' => '',
              'link_class' => '',
              'prefix' => '',
              'suffix' => '',
              'target' => '',
              'trim' => FALSE,
              'max_length' => '',
              'word_boundary' => TRUE,
              'ellipsis' => TRUE,
              'strip_tags' => FALSE,
              'html' => FALSE,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'exclude' => '1',
          'id' => 'views_sql_groupedfields',
          'table' => 'views_groupby',
          'field' => 'views_sql_groupedfields',
          'relationship' => 'none',
          'views_groupby_fields_to_group' => array(
              'name' => 'name',
              'name_1' => 'name_1',
          ),
          'views_groupby_sql_function' => 'count',
          'views_groupby_fields_to_aggregate' => array(
              'nid' => 'nid',
          ),
          'views_groupby_field_sortby' => 'nid',
          'views_groupby_sortby_direction' => 'desc',
      ),
  ));
  $handler->override_option('filters', array(
      'type' => array(
          'operator' => 'in',
          'value' => array(
              'albiste' => 'albiste',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
      ),
      'vid' => array(
          'operator' => 'in',
          'value' => array(
              1 => '1',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'vid',
          'table' => 'term_data',
          'field' => 'vid',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Override',
          ),
      ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));
  $handler->override_option('title', 'Etiketak');
  $handler->override_option('items_per_page', 30);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('pager_element', 1);
  $handler->override_option('row_options', array(
      'inline' => array(
          'name' => 'name',
          'name_1' => 'name_1',
          'nid' => 'nid',
      ),
      'separator' => '',
      'hide_empty' => 0,
  ));
  $handler = $view->new_display('panel_pane', 'Albisteen etiketak', 'panel_pane_1');
  $handler->override_option('pane_title', '');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
      'name' => 'View panes',
      'weight' => 0,
  ));
  $handler->override_option('allow', array(
      'use_pager' => FALSE,
      'items_per_page' => FALSE,
      'offset' => FALSE,
      'link_to_view' => FALSE,
      'more_link' => FALSE,
      'path_override' => FALSE,
      'title_override' => FALSE,
      'exposed_form' => FALSE,
      'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Albisteen etiketak, Herriak', 'panel_pane_2');
  $handler->override_option('filters', array(
      'type' => array(
          'operator' => 'in',
          'value' => array(
              'albiste' => 'albiste',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
      ),
      'vid' => array(
          'operator' => 'in',
          'value' => array(
              2 => '2',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
              'operator' => FALSE,
              'label' => '',
          ),
          'id' => 'vid',
          'table' => 'term_data',
          'field' => 'vid',
          'relationship' => 'none',
          'override' => array(
              'button' => 'Erabili lehenetsia',
          ),
      ),
  ));
  $handler->override_option('title', 'Herriak');
  $handler->override_option('items_per_page', 16);
  $handler->override_option('use_pager', '1');
  $handler->override_option('pager_element', 2);
  $handler->override_option('pane_title', '');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
      'name' => 'View panes',
      'weight' => 0,
  ));
  $handler->override_option('allow', array(
      'use_pager' => FALSE,
      'items_per_page' => FALSE,
      'offset' => FALSE,
      'link_to_view' => FALSE,
      'more_link' => FALSE,
      'path_override' => FALSE,
      'title_override' => FALSE,
      'exposed_form' => FALSE,
      'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
