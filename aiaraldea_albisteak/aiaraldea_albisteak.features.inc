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
    'albistea_egilea' => array(
      'presetname' => 'albistea_egilea',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '40',
            'height' => '40',
          ),
        ),
      ),
    ),
    'albistea_irudi_txikia' => array(
      'presetname' => 'albistea_irudi_txikia',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80',
            'height' => '80',
          ),
        ),
      ),
    ),
    'albistea_nagusia' => array(
      'presetname' => 'albistea_nagusia',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '620',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'albisteak_zerrendak' => array(
      'presetname' => 'albisteak_zerrendak',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '85',
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
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '300',
            'height' => '168',
          ),
        ),
        '1' => array(
          'weight' => '-8',
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
      'min_word_count' => '100',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function aiaraldea_albisteak_rules_defaults() {
  return array(
    'rules' => array(
      'rules_eguneratze_data' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'eguneratze data',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'Albisteak data eguneratu',
          'aiaraldea_albisteak' => 'aiaraldea_albisteak',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'albiste' => 'albiste',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Eguneratutako edukia is Albiste',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Edukia',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
          '1' => array(
            '1' => array(
              '#type' => 'condition',
              '#settings' => array(
                'text1' => '[node:body] [node:title]',
                'text2' => '[node_unchanged:body] [node_unchanged:title]',
                'regex' => 0,
                '#eval input' => array(
                  'token_rules_input_evaluator' => array(
                    'text1' => array(
                      '0' => 'node',
                      '1' => ':global',
                    ),
                    'text2' => array(
                      '0' => 'node_unchanged',
                      '1' => ':global',
                    ),
                  ),
                ),
              ),
              '#name' => 'rules_condition_text_compare',
              '#info' => array(
                'label' => 'Textual comparison',
                'arguments' => array(
                  'text1' => array(
                    'label' => 'Text 1',
                    'type' => 'string',
                  ),
                  'text2' => array(
                    'label' => 'Text 2',
                    'type' => 'string',
                  ),
                ),
                'module' => 'Rules',
              ),
              '#negate' => 1,
              '#weight' => -1,
            ),
            '#weight' => 0,
            '#type' => 'OR',
            '0' => array(
              '#info' => array(
                'label' => 'Eguneratutako edukia\'s field \'field_embeddedimages\' has been changed',
                'arguments' => array(
                  'node' => array(
                    'type' => 'node',
                    'label' => 'Content containing changes',
                  ),
                  'node_unchanged' => array(
                    'type' => 'node',
                    'label' => 'Content not containing changes',
                  ),
                ),
                'module' => 'CCK',
              ),
              '#name' => 'content_rules_field_changed',
              '#settings' => array(
                'field_name' => 'field_embeddedimages',
                '#argument map' => array(
                  'node' => 'node',
                  'node_unchanged' => 'node_unchanged',
                ),
              ),
              '#type' => 'condition',
              '#weight' => 0,
            ),
            '2' => array(
              '#type' => 'condition',
              '#settings' => array(
                'field_name' => 'field_erantsi',
                '#argument map' => array(
                  'node' => 'node',
                  'node_unchanged' => 'node_unchanged',
                ),
              ),
              '#name' => 'content_rules_field_changed',
              '#info' => array(
                'label' => 'Eguneratutako edukia\'s field \'field_erantsi\' has been changed',
                'arguments' => array(
                  'node' => array(
                    'type' => 'node',
                    'label' => 'Content containing changes',
                  ),
                  'node_unchanged' => array(
                    'type' => 'node',
                    'label' => 'Content not containing changes',
                  ),
                ),
                'module' => 'CCK',
              ),
              '#weight' => 0,
            ),
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Populate eguneratutako edukia\'s field \'field_eguneratze_data\'',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Edukia',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_action_populate_field',
            '#settings' => array(
              'field_name' => 'field_eguneratze_data',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => NULL,
                  'value2' => NULL,
                  'timezone' => NULL,
                  'offset' => NULL,
                  'offset2' => NULL,
                  'rrule' => NULL,
                ),
              ),
              'code' => 'return array(
  0 => array(\'value\' => time())
);',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function aiaraldea_albisteak_views_api() {
  return array(
    'api' => '3.0',
  );
}
