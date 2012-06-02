<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function short_notice_user_default_permissions() {
  $permissions = array();

  // Exported permission: create short_notice content
  $permissions['create short_notice content'] = array(
    'name' => 'create short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any short_notice content
  $permissions['delete any short_notice content'] = array(
    'name' => 'delete any short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own short_notice content
  $permissions['delete own short_notice content'] = array(
    'name' => 'delete own short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any short_notice content
  $permissions['edit any short_notice content'] = array(
    'name' => 'edit any short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own short_notice content
  $permissions['edit own short_notice content'] = array(
    'name' => 'edit own short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish any short_notice content
  $permissions['publish any short_notice content'] = array(
    'name' => 'publish any short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish own short_notice content
  $permissions['publish own short_notice content'] = array(
    'name' => 'publish own short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish any short_notice content
  $permissions['unpublish any short_notice content'] = array(
    'name' => 'unpublish any short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish own short_notice content
  $permissions['unpublish own short_notice content'] = array(
    'name' => 'unpublish own short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view unpublished short_notice content
  $permissions['view unpublished short_notice content'] = array(
    'name' => 'view unpublished short_notice content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
