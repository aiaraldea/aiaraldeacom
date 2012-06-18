<?php

/**
 * Implementation of hook_user_default_roles().
 */
function aiaraldea_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: content admin
  $roles['content admin'] = array(
    'name' => 'content admin',
  );

  // Exported role: itzultzaile
  $roles['itzultzaile'] = array(
    'name' => 'itzultzaile',
  );

  return $roles;
}
