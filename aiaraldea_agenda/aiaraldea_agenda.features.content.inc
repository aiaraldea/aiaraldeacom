<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_agenda_content_default_fields() {
  $fields = array();

  // Exported field: field_embeddedimages
  $fields['deialdi-field_embeddedimages'] = array(
    'field_name' => 'field_embeddedimages',
    'type_name' => 'deialdi',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      '4' => array(
        'format' => 'agenda_deitale_irudia_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__agenda_deitale_irudia__original',
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
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
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
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
        'attach' => 0,
      ),
      'filefield_source_imce_mode' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Irudiak',
      'weight' => '1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_erantsi
  $fields['deialdi-field_erantsi'] = array(
    'field_name' => 'field_erantsi',
    'type_name' => 'deialdi',
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
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Erantsiak',
      'weight' => '2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_lekua
  $fields['deialdi-field_lekua'] = array(
    'field_name' => 'field_lekua',
    'type_name' => 'deialdi',
    'display_settings' => array(
      'weight' => '-2',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lekua][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'reference' => 'reference',
        'remote' => 'remote',
      ),
      'autocomplete_xss' => '0',
      'obey_access_controls' => 1,
      'label' => 'Lekua',
      'weight' => '-2',
      'description' => 'Deialdia non gertatuko den, adib. "Amurrio Antzokia"',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_noiz
  $fields['deialdi-field_noiz'] = array(
    'field_name' => 'field_noiz',
    'type_name' => 'deialdi',
    'display_settings' => array(
      'weight' => '-1',
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
        'format' => 'long',
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+1 hour',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '15',
      'text_parts' => array(),
      'year_range' => '-1:+3',
      'label_position' => 'above',
      'label' => 'Noiz',
      'weight' => '-1',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Erantsiak');
  t('Irudiak');
  t('Lekua');
  t('Noiz');

  return $fields;
}
