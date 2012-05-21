<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_albisteak_content_default_fields() {
  $fields = array();

  // Exported field: field_bideo_erlazionatuak
  $fields['albiste-field_bideo_erlazionatuak'] = array(
    'field_name' => 'field_bideo_erlazionatuak',
    'type_name' => 'albiste',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'views',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'bideo' => 'bideo',
      'albiste' => 0,
      'blog' => 0,
      'deialdi' => 0,
      'elkarrizketa' => 0,
      'feed' => 0,
      'page' => 0,
      'panel' => 0,
      'proposamena' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_bideo_erlazionatuak][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bideo erlazionatuak',
      'weight' => 0,
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_embeddedimages
  $fields['albiste-field_embeddedimages'] = array(
    'field_name' => 'field_embeddedimages',
    'type_name' => 'albiste',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      '4' => array(
        'format' => 'albistearen_argazkiak_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'albisteak_zerrendak_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__albistearen_argazkiak__original',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'irudiak',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '500x300',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
        'attach' => 0,
      ),
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_proposamena' => 0,
        'imagecache_elkarrizketa_image' => 0,
      ),
      'insert_default' => 'image',
      'insert_class' => '',
      'insert_width' => '400',
      'fapi_image_author' => '',
      'fapi_image_author_help' => '',
      'custom_fapi_image_author' => 1,
      'custom_fapi_image_author_style' => 'textfield',
      'custom_fapi_image_author_required' => 1,
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Irudiak',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_erantsi
  $fields['albiste-field_erantsi'] = array(
    'field_name' => 'field_erantsi',
    'type_name' => 'albiste',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt png jpg gif png pdf mp3 ogg',
      'file_path' => 'erantsiak',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '10MB',
      'max_filesize_per_node' => '10MB',
      'filefield_sources' => array(),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Erantsiak',
      'weight' => '2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_erlazionatuak
  $fields['albiste-field_erlazionatuak'] = array(
    'field_name' => 'field_erlazionatuak',
    'type_name' => 'albiste',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'blog' => 'blog',
      'deialdi' => 'deialdi',
      'elkarrizketa' => 'elkarrizketa',
      'albiste' => 'albiste',
      'bideo' => 0,
      'page' => 0,
      'panel' => 0,
      'feed' => FALSE,
      'proposamena' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_erlazionatuak][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Erlazionatuak',
      'weight' => '1',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bideo erlazionatuak');
  t('Erantsiak');
  t('Erlazionatuak');
  t('Irudiak');

  return $fields;
}
