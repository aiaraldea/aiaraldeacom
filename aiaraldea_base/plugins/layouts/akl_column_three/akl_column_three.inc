<?php

$plugin = array(
  'title' => t('AKL three columns'),
  'theme' => 'akl_column_three',
  'icon' => 'akl-column-three.png',
  'category' => 'Aiaraldea',
  'panels' => array(
    'header_alpha' => t('Header alpha'),
    'header_beta' => t('Header beta'),
    'main' => t('Main'),
    'aside_alpha' => t('Aside alpha'),
    'aside_beta' => t('Aside beta'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_akl_column_three().
 */
//function akl_preprocess_akl_column_three(&$vars) {
//  $vars['css_id'] = strtr($vars['css_id'], '_', '-');
//}
