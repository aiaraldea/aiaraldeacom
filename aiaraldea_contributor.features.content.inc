<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_contributor_content_default_fields() {
  $fields = array();

  // Exported field: field_kolaboratzaile
  $fields['proposamena-field_kolaboratzaile'] = array(
    'field_name' => 'field_kolaboratzaile',
    'type_name' => 'proposamena',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
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
    'multiple' => '1',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Kolaboratzilea');

  return $fields;
}
