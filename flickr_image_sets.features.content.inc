<?php

/**
 * Implementation of hook_content_default_fields().
 */
function flickr_image_sets_content_default_fields() {
  $fields = array();

  // Exported field: field_photo_set
  $fields['flickr_image_set-field_photo_set'] = array(
    'field_name' => 'field_photo_set',
    'type_name' => 'flickr_image_set',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 's',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 's',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'flickrfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'flickrfield',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'type' => 'set_id',
          'id' => '',
          'nsid' => '26229914@N06',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Flickr Photo Set',
      'weight' => '-2',
      'description' => '',
      'type' => 'flickrfield',
      'module' => 'flickrfield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Flickr Photo Set');

  return $fields;
}
