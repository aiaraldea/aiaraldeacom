<?php

/**
 * Implementation of hook_user_default_roles().
 */
function komunitatea_user_default_roles() {
  $roles = array();

  // Exported role: Kides
  $roles['Kides'] = array(
    'name' => 'Kides',
  );

  return $roles;
}
