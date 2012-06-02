<?php
// $Id: akl_column_one.inc,v 1.1.2.1 2011/02/14 10:32:22 fabsor Exp $

$plugin = array(
  'title' => t('akl one column'),
  'theme' => 'akl_column_one',
  'icon' => 'akl-column-one.png',
  'category' => 'akl',
  'panels' => array(
    'header_alpha' => t('Header alpha'),
    'header_beta' => t('Header beta'),
    'main' => t('Main'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_akl_column_one().
 */
//function akl_preprocess_akl_column_one(&$vars) {
//  $vars['css_id'] = strtr($vars['css_id'], '_', '-');
//}
