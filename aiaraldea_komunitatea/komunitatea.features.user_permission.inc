<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function komunitatea_user_default_permissions() {
  $permissions = array();

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: create argazkiak content
  $permissions['create argazkiak content'] = array(
    'name' => 'create argazkiak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: create artikulua content
  $permissions['create artikulua content'] = array(
    'name' => 'create artikulua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: create bideoak content
  $permissions['create bideoak content'] = array(
    'name' => 'create bideoak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: create hitzordua content
  $permissions['create hitzordua content'] = array(
    'name' => 'create hitzordua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: create iritzi_gutuna content
  $permissions['create iritzi_gutuna content'] = array(
    'name' => 'create iritzi_gutuna content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: create zutabea content
  $permissions['create zutabea content'] = array(
    'name' => 'create zutabea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete any argazkiak content
  $permissions['delete any argazkiak content'] = array(
    'name' => 'delete any argazkiak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete any artikulua content
  $permissions['delete any artikulua content'] = array(
    'name' => 'delete any artikulua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete any bideoak content
  $permissions['delete any bideoak content'] = array(
    'name' => 'delete any bideoak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete any hitzordua content
  $permissions['delete any hitzordua content'] = array(
    'name' => 'delete any hitzordua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete any iritzi_gutuna content
  $permissions['delete any iritzi_gutuna content'] = array(
    'name' => 'delete any iritzi_gutuna content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any zutabea content
  $permissions['delete any zutabea content'] = array(
    'name' => 'delete any zutabea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: delete own argazkiak content
  $permissions['delete own argazkiak content'] = array(
    'name' => 'delete own argazkiak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete own artikulua content
  $permissions['delete own artikulua content'] = array(
    'name' => 'delete own artikulua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete own bideoak content
  $permissions['delete own bideoak content'] = array(
    'name' => 'delete own bideoak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete own hitzordua content
  $permissions['delete own hitzordua content'] = array(
    'name' => 'delete own hitzordua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete own iritzi_gutuna content
  $permissions['delete own iritzi_gutuna content'] = array(
    'name' => 'delete own iritzi_gutuna content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: delete own zutabea content
  $permissions['delete own zutabea content'] = array(
    'name' => 'delete own zutabea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'kide',
    ),
  );

  // Exported permission: edit any argazkiak content
  $permissions['edit any argazkiak content'] = array(
    'name' => 'edit any argazkiak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any artikulua content
  $permissions['edit any artikulua content'] = array(
    'name' => 'edit any artikulua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any bideoak content
  $permissions['edit any bideoak content'] = array(
    'name' => 'edit any bideoak content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any hitzordua content
  $permissions['edit any hitzordua content'] = array(
    'name' => 'edit any hitzordua content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any iritzi_gutuna content
  $permissions['edit any iritzi_gutuna content'] = array(
    'name' => 'edit any iritzi_gutuna content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: edit any zutabea content
  $permissions['edit any zutabea content'] = array(
    'name' => 'edit any zutabea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content admin',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache 600x450
  $permissions['view imagecache 600x450'] = array(
    'name' => 'view imagecache 600x450',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache 650x480
  $permissions['view imagecache 650x480'] = array(
    'name' => 'view imagecache 650x480',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache komunitatea_teaser
  $permissions['view imagecache komunitatea_teaser'] = array(
    'name' => 'view imagecache komunitatea_teaser',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
