<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function komunitatea_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Menu de usuario';
  $fe_block_boxes->format = '5';
  $fe_block_boxes->machine_name = 'menu_user';
  $fe_block_boxes->body = '<?php global $user; ?>
<ul class="menu-user">
<li class="kaixo"><strong><?php print t(\'Kaixo! : \');?><?php print $user->name; ?></strong></li> |
<li><?php print l ("Profile", "user/".$user->uid."/edit"); ?></li> |
<li><?php print l ("Gehitu edukia", "users/".$user->name); ?></li> |
<li><a href="/logout">Irten</a></li>
</ul>';

  $export['menu_user'] = $fe_block_boxes;

  return $export;
}
