<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_azala_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "mp3player" && $api == "mp3players") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function aiaraldea_azala_flag_default_flags() {
  $flags = array();
  // Exported flag: "Nabarmena".
  $flags['nabarmena'] = array(
    'content_type' => 'node',
    'title' => 'Nabarmena',
    'global' => '1',
    'types' => array(
      '0' => 'deialdi',
    ),
    'flag_short' => 'Nabarmendu',
    'flag_long' => 'Nabarmendu eduki hau zerrendetan agertzeko',
    'flag_message' => '',
    'unflag_short' => 'Nabardura kendu',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 11,
        '1' => 7,
      ),
      'unflag' => array(
        '0' => 11,
        '1' => 7,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'aiaraldea_azala',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_azala_imagecache_default_presets() {
  $items = array(
    'azala_azken_bideoa' => array(
      'presetname' => 'azala_azken_bideoa',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '288',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 'center',
            'ypos' => 'center',
            'alpha' => '80',
            'path' => 'sites/all/modules/custom/aiaraldeacom/aiaraldea_azala/play_irudia2.png',
          ),
        ),
      ),
    ),
    'azala_azken_bideoak' => array(
      'presetname' => 'azala_azken_bideoak',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '140',
            'height' => '80',
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 'center',
            'ypos' => 'center',
            'alpha' => '80',
            'path' => 'sites/all/modules/custom/aiaraldeacom/aiaraldea_azala/play_irudia2.png',
          ),
        ),
      ),
    ),
    'azala_elkarrizketa' => array(
      'presetname' => 'azala_elkarrizketa',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '206',
            'height' => '140',
          ),
        ),
      ),
    ),
    'deialdi_nabarmena' => array(
      'presetname' => 'deialdi_nabarmena',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '380',
            'height' => '210',
          ),
        ),
      ),
    ),
    'elkarrizketa_image' => array(
      'presetname' => 'elkarrizketa_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_azala_node_info() {
  $items = array(
    'elkarrizketa_aurr' => array(
      'name' => t('Elkarrizketa aurrerapena'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_azala_views_api() {
  return array(
    'api' => '3.0',
  );
}
