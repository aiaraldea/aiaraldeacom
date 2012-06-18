<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aiaraldea_albisteak_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 2);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function aiaraldea_albisteak_imagecache_default_presets() {
  $items = array(
    'albisteak_zerrendak' => array(
      'presetname' => 'albisteak_zerrendak',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '45',
          ),
        ),
      ),
    ),
    'albistearen_argazkiak' => array(
      'presetname' => 'albistearen_argazkiak',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '274',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'bideoa_albistean' => array(
      'presetname' => 'bideoa_albistean',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '274',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
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
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function aiaraldea_albisteak_node_info() {
  $items = array(
    'albiste' => array(
      'name' => t('Albiste'),
      'module' => 'features',
      'description' => t('A <em>albiste</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>albiste</em> entry. By default, a <em>albiste</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '25',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_albisteak_views_api() {
  return array(
    'api' => '2',
  );
}
