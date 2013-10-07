<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function egunkaria_user_default_permissions() {
  $permissions = array();

  // Exported permission: create egunkari_alea content
  $permissions['create egunkari_alea content'] = array(
    'name' => 'create egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete any egunkari_alea content
  $permissions['delete any egunkari_alea content'] = array(
    'name' => 'delete any egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete own egunkari_alea content
  $permissions['delete own egunkari_alea content'] = array(
    'name' => 'delete own egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any egunkari_alea content
  $permissions['edit any egunkari_alea content'] = array(
    'name' => 'edit any egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit own egunkari_alea content
  $permissions['edit own egunkari_alea content'] = array(
    'name' => 'edit own egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: override egunkari_alea authored on option
  $permissions['override egunkari_alea authored on option'] = array(
    'name' => 'override egunkari_alea authored on option',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: override egunkari_alea comment settings
  $permissions['override egunkari_alea comment settings'] = array(
    'name' => 'override egunkari_alea comment settings',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: override egunkari_alea published option
  $permissions['override egunkari_alea published option'] = array(
    'name' => 'override egunkari_alea published option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: publish any egunkari_alea content
  $permissions['publish any egunkari_alea content'] = array(
    'name' => 'publish any egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: publish editable egunkari_alea content
  $permissions['publish editable egunkari_alea content'] = array(
    'name' => 'publish editable egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: publish own egunkari_alea content
  $permissions['publish own egunkari_alea content'] = array(
    'name' => 'publish own egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: unpublish any egunkari_alea content
  $permissions['unpublish any egunkari_alea content'] = array(
    'name' => 'unpublish any egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: unpublish editable egunkari_alea content
  $permissions['unpublish editable egunkari_alea content'] = array(
    'name' => 'unpublish editable egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: unpublish own egunkari_alea content
  $permissions['unpublish own egunkari_alea content'] = array(
    'name' => 'unpublish own egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: view unpublished egunkari_alea content
  $permissions['view unpublished egunkari_alea content'] = array(
    'name' => 'view unpublished egunkari_alea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  return $permissions;
}
