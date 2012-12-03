<?php

/**
 * Implementation of hook_strongarm().
 */
function publizitatea_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adzerk_code';
  $strongarm->value = 'a:2:{s:4:"code";s:987:"<script type="text/javascript">var p="http",d="static";if(document.location.protocol=="https:"){p+="s";d="engine";}var z=document.createElement("script");z.type="text/javascript";z.async=true;z.src=p+"://"+d+".adzerk.net/ados.js";var s=document.getElementsByTagName("script")[0];s.parentNode.insertBefore(z,s);</script>
<script type="text/javascript">
var ados = ados || {};
ados.run = ados.run || [];
ados.run.push(function() {
/* load placement for account: aiaraldea, site: aiaraldea, size: 728x90 - Leaderboard, zone: Goialdea*/
ados_add_placement(4107, 19702, "azk24056", 4).setZone(12989);
/* load placement for account: aiaraldea, site: aiaraldea, size: 204x90 - 204 x 90, zone: Goialdea - eskuina*/
ados_add_placement(4107, 19702, "azk22008", 371).setZone(12990);
/* load placement for account: aiaraldea, site: aiaraldea, size: 300x250 - Medium Rectangle, zone: Orrilapurra*/
ados_add_placement(4107, 19702, "azk49793", 5).setZone(13828);
ados_load();
});</script>
";s:9:"ad_blocks";a:3:{i:0;s:8:"azk24056";i:1;s:8:"azk22008";i:2;s:8:"azk49793";}}';
  $export['adzerk_code'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_delivery_url';
  $strongarm->value = 'd1.openx.org';
  $export['openx_delivery_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_delivery_url_https';
  $strongarm->value = 'd1.openx.org';
  $export['openx_delivery_url_https'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_site_vars';
  $strongarm->value = array();
  $export['openx_site_vars'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openx_zones';
  $strongarm->value = array(
    0 => array(
      'id' => '231610',
      'name' => 'Goialdea',
      'delete' => 'ezabatu',
    ),
    1 => array(
      'id' => '273742',
      'name' => 'Goialdea - eskuina',
      'delete' => 'ezabatu',
    ),
    2 => array(
      'id' => '254545',
      'name' => 'Orrilapurra',
      'delete' => 'ezabatu',
    ),
  );
  $export['openx_zones'] = $strongarm;

  return $export;
}
