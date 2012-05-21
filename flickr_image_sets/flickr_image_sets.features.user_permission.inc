<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function flickr_image_sets_user_default_permissions() {
  $permissions = array();

  // Exported permission: create flickr_image_set content
  $permissions['create flickr_image_set content'] = array(
    'name' => 'create flickr_image_set content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any flickr_image_set content
  $permissions['delete any flickr_image_set content'] = array(
    'name' => 'delete any flickr_image_set content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any flickr_image_set content
  $permissions['edit any flickr_image_set content'] = array(
    'name' => 'edit any flickr_image_set content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: publish any flickr_image_set content
  $permissions['publish any flickr_image_set content'] = array(
    'name' => 'publish any flickr_image_set content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: unpublish any flickr_image_set content
  $permissions['unpublish any flickr_image_set content'] = array(
    'name' => 'unpublish any flickr_image_set content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
