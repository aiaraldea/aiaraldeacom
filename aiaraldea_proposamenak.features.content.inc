<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_proposamenak_content_default_fields() {
  $fields = array();

  // Exported field: field_audio
  $fields['proposamena-field_audio'] = array(
    'field_name' => 'field_audio',
    'type_name' => 'proposamena',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'mp3player_proposamenak_detail',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'mp3playerwithdownload_proposamenak_detail',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3',
      'file_path' => 'audio',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_elkarrizketa_image' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'filefield_sources' => array(
        'remote' => 0,
        'reference' => 0,
      ),
      'label' => 'Audio',
      'weight' => '1',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_fitxa_teknikoa
  $fields['proposamena-field_fitxa_teknikoa'] = array(
    'field_name' => 'field_fitxa_teknikoa',
    'type_name' => 'proposamena',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
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
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '400',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fitxa_teknikoa][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fitxa teknikoa',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_kolaboratzaile
  $fields['proposamena-field_kolaboratzaile'] = array(
    'field_name' => 'field_kolaboratzaile',
    'type_name' => 'proposamena',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
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
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '200',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_kolaboratzaile][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Kolaboratzilea',
      'weight' => '2',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_proposamena_irudia
  $fields['proposamena-field_proposamena_irudia'] = array(
    'field_name' => 'field_proposamena_irudia',
    'type_name' => 'proposamena',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'proposamena_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'proposamena_default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'irudiak/proposamenak',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '1000x1000',
      'min_resolution' => '80x80',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_proposamena' => 0,
        'imagecache_elkarrizketa_image' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Irudia',
      'weight' => 0,
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio');
  t('Fitxa teknikoa');
  t('Irudia');
  t('Kolaboratzilea');

  return $fields;
}
