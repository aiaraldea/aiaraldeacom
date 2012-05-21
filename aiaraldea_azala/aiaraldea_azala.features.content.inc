<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_azala_content_default_fields() {
  $fields = array();

  // Exported field: field_elkaur_image
  $fields['elkarrizketa_aurr-field_elkaur_image'] = array(
    'field_name' => 'field_elkaur_image',
    'type_name' => 'elkarrizketa_aurr',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
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
      'file_path' => 'elkarrizketa_aurrerapenak',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '1M',
      'max_filesize_per_node' => '1M',
      'max_resolution' => '220x100',
      'min_resolution' => '220x100',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Banner image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner image');

  return $fields;
}
