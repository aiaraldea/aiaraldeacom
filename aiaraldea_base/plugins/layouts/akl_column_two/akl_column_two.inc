<?php

$plugin = array(
  'title' => t('AKL two columns'),
  'theme' => 'akl_column_two',
  'icon' => 'akl-column-two.png',
  'category' => 'akl',
  'panels' => array(
    'header' => t('Header'),
    'main' => t('Main'),
    'aside' => t('Aside'),
    'footer' => t('Footer'),
  ),
);

/**
 * Implementation of theme_preprocess_akl_column_two().
 */
//function akl_preprocess_akl_column_two(&$vars) {
//  $vars['css_id'] = strtr($vars['css_id'], '_', '-');
//}
