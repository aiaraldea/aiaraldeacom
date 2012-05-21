<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function aiaraldea_albisteak_user_default_permissions() {
  $permissions = array();

  // Exported permission: create albiste content
  $permissions['create albiste content'] = array(
    'name' => 'create albiste content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any albiste content
  $permissions['delete any albiste content'] = array(
    'name' => 'delete any albiste content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own albiste content
  $permissions['delete own albiste content'] = array(
    'name' => 'delete own albiste content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any albiste content
  $permissions['edit any albiste content'] = array(
    'name' => 'edit any albiste content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own albiste content
  $permissions['edit own albiste content'] = array(
    'name' => 'edit own albiste content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
