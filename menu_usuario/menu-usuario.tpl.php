<?php global $user; ?>
<ul class="menu-user">
  <li class="kaixo"><strong><?php print t('Kaixo! : ');?><?php print $user->name; ?></strong></li> |
  <li><?php print l ("Editatu Profila", "user/".$user->uid."/edit/Informazio%20pertsonala"); ?></li> |
  <li><?php print l ("Gehitu edukia", "user/"); ?></li> |
<li><a href="/logout">Irten</a></li>
</ul>
