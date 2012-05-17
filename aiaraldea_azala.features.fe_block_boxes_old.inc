<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function aiaraldea_azala_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Oinaren edukia 2.0';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'aiaraldea_footer';
  $fe_block_boxes->body = '<div class="adr_cnt"><address class="vcard container_12 clearfix"> <span class="fn org" style="display: none;">Aiaraldea Komunikazio Leihoa</span> <span class="grid_3 prefix_2"> <span class="adr"> <span class="street-address">Nerbioi kalea 1, 3 esk.</span> <span class="locality">Laudio</span> , <span class="region">Araba</span> ,                         <span class="postal-code">01400</span> <span class="geo" style="display: none;">43.142753;-2.961508</span> </span> <span class="tel">94 656 85 54</span> </span> <span class="grid_3"> <span class="adr"> <span class="street-address">Aiara etorbidea 9</span> <span class="locality">Amurrio</span> , <span class="region">Araba</span> ,                         <span class="postal-code">01470</span> <span class="geo" style="display: none;">43.051969;-3.003763</span> </span> <span class="tel">945 06 66 84</span> </span> <span id="oina_eposta_helbideak" class="grid_3 prefix_1"> &gt; <a class="email" href="mailto:erredakzioa@aiaraldea.com">erredakzioa@aiaraldea.com</a><br /> &gt; <a class="email" href="mailto:agenda@aiaraldea.com">agenda@aiaraldea.com</a><br /> &gt; <a class="email" href="mailto:harremanak@aiaraldea.com">harremanak@aiaraldea.com</a> </span> </address></div>';

  $export['aiaraldea_footer'] = $fe_block_boxes;

  return $export;
}
