<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function aiaraldea_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: create aiaraldea_banner content
  $permissions['create aiaraldea_banner content'] = array(
    'name' => 'create aiaraldea_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any aiaraldea_banner content
  $permissions['delete any aiaraldea_banner content'] = array(
    'name' => 'delete any aiaraldea_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own aiaraldea_banner content
  $permissions['delete own aiaraldea_banner content'] = array(
    'name' => 'delete own aiaraldea_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any aiaraldea_banner content
  $permissions['edit any aiaraldea_banner content'] = array(
    'name' => 'edit any aiaraldea_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own aiaraldea_banner content
  $permissions['edit own aiaraldea_banner content'] = array(
    'name' => 'edit own aiaraldea_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
