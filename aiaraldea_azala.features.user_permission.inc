<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function aiaraldea_azala_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer front page
  $permissions['administer front page'] = array(
    'name' => 'administer front page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: create elkarrizketa_aurr content
  $permissions['create elkarrizketa_aurr content'] = array(
    'name' => 'create elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any elkarrizketa_aurr content
  $permissions['delete any elkarrizketa_aurr content'] = array(
    'name' => 'delete any elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own elkarrizketa_aurr content
  $permissions['delete own elkarrizketa_aurr content'] = array(
    'name' => 'delete own elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any elkarrizketa_aurr content
  $permissions['edit any elkarrizketa_aurr content'] = array(
    'name' => 'edit any elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own elkarrizketa_aurr content
  $permissions['edit own elkarrizketa_aurr content'] = array(
    'name' => 'edit own elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: publish any elkarrizketa_aurr content
  $permissions['publish any elkarrizketa_aurr content'] = array(
    'name' => 'publish any elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish own elkarrizketa_aurr content
  $permissions['publish own elkarrizketa_aurr content'] = array(
    'name' => 'publish own elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish any elkarrizketa_aurr content
  $permissions['unpublish any elkarrizketa_aurr content'] = array(
    'name' => 'unpublish any elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish own elkarrizketa_aurr content
  $permissions['unpublish own elkarrizketa_aurr content'] = array(
    'name' => 'unpublish own elkarrizketa_aurr content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
