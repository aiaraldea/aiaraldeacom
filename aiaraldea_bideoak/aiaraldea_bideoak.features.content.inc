<?php

/**
 * Implementation of hook_content_default_fields().
 */
function aiaraldea_bideoak_content_default_fields() {
  $fields = array();

  // Exported field: field_bideo
  $fields['bideo-field_bideo'] = array(
    'field_name' => 'field_bideo',
    'type_name' => 'bideo',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      '4' => array(
        'format' => 'video_url',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '620',
      'video_height' => '380',
      'video_autoplay' => 0,
      'preview_width' => '380',
      'preview_height' => '210',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'bliptv' => 'bliptv',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
          'emthumb' => array(
            'emthumb' => array(
              'emthumb' => '',
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'emthumb' => 1,
      'emthumb_label' => 'Bideo custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the Bideo thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => 'bideo_thumbnails',
      'emthumb_custom_alt' => 0,
      'emthumb_custom_title' => 0,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 0,
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'label' => 'Bideo',
      'weight' => '-4',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_deskarga
  $fields['bideo-field_deskarga'] = array(
    'field_name' => 'field_deskarga',
    'type_name' => 'bideo',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      '4' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => 'Deskargatu',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Deskarga',
      'weight' => '11',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_rererrers
  $fields['bideo-field_rererrers'] = array(
    'field_name' => 'field_rererrers',
    'type_name' => 'bideo',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'bideo' => 0,
      'blog' => 0,
      'deialdi' => 0,
      'elkarrizketa' => 0,
      'page' => 0,
      'panel' => 0,
      'story' => 0,
    ),
    'referrer_fields' => array(
      'field_bideo_erlazionatuak' => 0,
      'field_erlazionatuak' => 0,
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'TITLE_ASC',
    'widget' => array(
      'label' => 'Erlazionatuak',
      'weight' => '2',
      'description' => '',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bideo');
  t('Deskarga');
  t('Erlazionatuak');

  return $fields;
}
