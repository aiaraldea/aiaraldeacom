<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function aiaraldea_agenda_user_default_permissions() {
  $permissions = array();

  // Exported permission: create deialdi content
  $permissions['create deialdi content'] = array(
    'name' => 'create deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any deialdi content
  $permissions['delete any deialdi content'] = array(
    'name' => 'delete any deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own deialdi content
  $permissions['delete own deialdi content'] = array(
    'name' => 'delete own deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any deialdi content
  $permissions['edit any deialdi content'] = array(
    'name' => 'edit any deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own deialdi content
  $permissions['edit own deialdi content'] = array(
    'name' => 'edit own deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish any deialdi content
  $permissions['publish any deialdi content'] = array(
    'name' => 'publish any deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish own deialdi content
  $permissions['publish own deialdi content'] = array(
    'name' => 'publish own deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish any deialdi content
  $permissions['unpublish any deialdi content'] = array(
    'name' => 'unpublish any deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish own deialdi content
  $permissions['unpublish own deialdi content'] = array(
    'name' => 'unpublish own deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache agenda_deitale_irudia
  $permissions['view imagecache agenda_deitale_irudia'] = array(
    'name' => 'view imagecache agenda_deitale_irudia',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view unpublished deialdi content
  $permissions['view unpublished deialdi content'] = array(
    'name' => 'view unpublished deialdi content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
