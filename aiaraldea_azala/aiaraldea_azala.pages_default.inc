<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function aiaraldea_azala_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_autumn_2011';
  $page->task = 'page';
  $page->admin_title = 'Nagusia';
  $page->admin_description = '';
  $page->path = 'main_autumn_2011';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main_autumn_2011_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'main_autumn_2011';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'css_id' => 'main_autumn_2011_panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'ipe',
  );
  $display = new panels_display;
  $display->layout = 'akl_column_three';
  $display->layout_settings = '';
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'top_right' => NULL,
      'medium_left' => NULL,
      'medium_center' => NULL,
      'medium_right' => NULL,
      'bottom' => NULL,
      'bottom_right' => NULL,
      'header' => NULL,
      1 => NULL,
      2 => NULL,
      3 => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_alpha' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
    'center' => array(
      'style' => 'default',
    ),
    'top_right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
    'header' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = 'orri_nagusiko_bideo_berriak';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'orri_nagusiko_plaza';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aside_alpha'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aside_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'agenda_azala-agenda_azala_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '18',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aside_alpha'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'proposamenak_front_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'kultura leihoa',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['aside_alpha'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<style>
i.icon {
	margin: 2px;
    border: 2px solid white;
    display: inline-block;
    position: relative;
    vertical-align: top;
}
i.icon:after,
i.icon:before {
    border: 2px solid white;
    content: \'\';
    position: absolute;
}


/* Clock Icon */

i.clock {
    border-radius: 100%;
    height: 12px;
    width: 12px;
}
i.clock:after,
i.clock:before {
    border-left: none;
    width: 0;
}
i.clock:after {
    height: 2px;
    left: 5px;
    top: 2px;
}
i.clock:before {
    height: 2px;
    left: 7px;
    top: 4px;
    -webkit-transform: rotate(90deg);
       -moz-transform: rotate(90deg);
        -ms-transform: rotate(90deg);
         -o-transform: rotate(90deg);
            transform: rotate(90deg);
}

</style>

<style>
span.icon-box{
background-color:#2d3c01;
padding:2px;
margin:4px;
display:inline-block;
width:20px;
height:20px;
border-radius:100%;
}
span.icon-box:hover{
padding:6px;
margin:0px;
}
</style>

<div style="background-color: #dadadf;padding: 10px;font-family: Exo,Verdana,serif;text-transform:uppercase;">
  <a href="http://elkargoa.aiaraldea.com">
    <div style="font-size: 32px;line-height: 32px;border-bottom:solid 1px #2d3c01;padding-bottom:5px;margin-bottom:10px;">
      <div style="font-weight:lighter;">Elkar·Ekin</div>
      <div><strong>Aiaraldea</strong><span style="font-weight:lighter;">goa</span></div>
    </div>
  </a>
  <div style="text-align:center;"><iframe src="//player.vimeo.com/video/96791745" width="280" height="156" seamless frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe></div>


  <a href="http://elkargoa.aiaraldea.com">
    <div style="font-size: 20px;line-height: 18px;padding:15px 0;border-bottom:solid 1px #2d3c01;">
      <div><span style="font-weight:lighter;">Batu zure </span><strong>energia</strong></div>
      <div><span style="font-weight:lighter;">Euskararen </span><strong>elkargoan</strong></div>
    </div>
  </a>

  <div style="font-weight:lighter;padding:10px 0;border-bottom:solid 1px #2d3c01;font-size: 12px;line-height: 20px;">
    <div style="width:140px;float:left;text-align:center;">
      <a href="http://elkargoa.aiaraldea.com/mota/argia/">
        <span class="icon-box"><i class="clock icon"></i> 
        </span><span>Denbora eman</span>
      </a>
    </div>
    <div style="width:140px;margin-left:140px;text-align:center;">
      <a href="http://elkargoa.aiaraldea.com/mota/argia/">
        <span class="icon-box"><span style="color:white;font-weight:bold;font-size: 18px;">€</span>
        </span><span>Dirua eman</span>
      </a>
    </div>
    <div style="clear:both;"></div>
  </div>

  <a href="http://elkargoa.aiaraldea.com">
    <div style="text-align:center;padding-top:15px;font-size: 16px;line-height: 16px;">
      <span style="font-weight:bolder;">Aiaraldea</span><span style="font-weight:lighter;">Herri</span><span style="font-weight:bolder;color:#CCCC00;">Elkargoa</span>
    </div>
  </a>
</div>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['aside_beta'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Twitter timeline',
      'title' => 'Aiaraldea Twitterren',
      'body' => '<a class="twitter-timeline" href="https://twitter.com/aiaraldea" data-widget-id="344721690888122368">@aiaraldea(r)en Txioak</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['aside_beta'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatearen_home_panels-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['aside_beta'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_iritzi_blokea-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-7'] = $pane;
    $display->panels['aside_beta'][3] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_iritzi_blokea-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-8'] = $pane;
    $display->panels['aside_beta'][4] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Iritzi gehiago lotura',
      'title' => '',
      'body' => '<div class="more-link"><a href="iritzia">Iritzi gehiago</a></div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-9'] = $pane;
    $display->panels['aside_beta'][5] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_azken_iruzkinak_1_2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-10'] = $pane;
    $display->panels['aside_beta'][6] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'aside_beta';
    $pane->type = 'block';
    $pane->subtype = 'adzerk-azk49793';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-11'] = $pane;
    $display->panels['aside_beta'][7] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'irratia_azala-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-12'] = $pane;
    $display->panels['aside_beta'][8] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Eguraldia Amurrion',
      'title' => 'Eguraldia Amurrion',
      'body' => '<p><script type="text/javascript" src="http://www.aemet.es/eu/eltiempo/prediccion/municipios/launchwidget/amurrio-id01002?w=g3p01110010ohmffffffw300z167xCCCC00t2D3C01r0s3n2"></script></p><noscript><a target=\'_blank\' style=\'font-weight: bold;font-size: 1.20em;\' href=\'http://www.aemet.es/eu/eltiempo/prediccion/municipios/amurrio-id01002\'>Eguraldia. Kontsultatu AEMETeko iragarpena-erako Amurrio</a></noscript>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-13'] = $pane;
    $display->panels['aside_beta'][9] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'aiaraldea_banner_nodequeue_1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-14'] = $pane;
    $display->panels['aside_beta'][10] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
    $pane->panel = 'header_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'albisteak_azala_1_1-estra_gunea_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Albisteak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-15'] = $pane;
    $display->panels['header_beta'][0] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => 'Udako postalak',
      'title' => 'Udako postal lehiaketa',
      'body' => '<p><script type="text/javascript">// <![CDATA[
widgetContext = { "url": "http://udakoargazkiak2014.aiaraldea.com/widget/azkenak", "width": "380", "height": "196", "widgetid": "web_widget_iframe_888c955d2c9840385216ff53b9f6efd5" };
// ]]></script><script id="web_widget_iframe_888c955d2c9840385216ff53b9f6efd5" type="text/javascript" src="http://udakoargazkiak2014.aiaraldea.com/sites/all/modules/web_widgets/iframe/web_widgets_iframe.js"></script></p>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-16'] = $pane;
    $display->panels['main'][0] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title Aktualitatea',
      'title' => '',
      'body' => '<h2 class="pane-title">Aktualitatea</h2>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-17'] = $pane;
    $display->panels['main'][1] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-18'] = $pane;
    $display->panels['main'][2] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-19'] = $pane;
    $display->panels['main'][3] = 'new-19';
    $pane = new stdClass;
    $pane->pid = 'new-20';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '1',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-20'] = $pane;
    $display->panels['main'][4] = 'new-20';
    $pane = new stdClass;
    $pane->pid = 'new-21';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-21'] = $pane;
    $display->panels['main'][5] = 'new-21';
    $pane = new stdClass;
    $pane->pid = 'new-22';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-22'] = $pane;
    $display->panels['main'][6] = 'new-22';
    $pane = new stdClass;
    $pane->pid = 'new-23';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-23'] = $pane;
    $display->panels['main'][7] = 'new-23';
    $pane = new stdClass;
    $pane->pid = 'new-24';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_5',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-24'] = $pane;
    $display->panels['main'][8] = 'new-24';
    $pane = new stdClass;
    $pane->pid = 'new-25';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-25'] = $pane;
    $display->panels['main'][9] = 'new-25';
    $pane = new stdClass;
    $pane->pid = 'new-26';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-26'] = $pane;
    $display->panels['main'][10] = 'new-26';
    $pane = new stdClass;
    $pane->pid = 'new-27';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $display->content['new-27'] = $pane;
    $display->panels['main'][11] = 'new-27';
    $pane = new stdClass;
    $pane->pid = 'new-28';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $display->content['new-28'] = $pane;
    $display->panels['main'][12] = 'new-28';
    $pane = new stdClass;
    $pane->pid = 'new-29';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $display->content['new-29'] = $pane;
    $display->panels['main'][13] = 'new-29';
    $pane = new stdClass;
    $pane->pid = 'new-30';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $display->content['new-30'] = $pane;
    $display->panels['main'][14] = 'new-30';
    $pane = new stdClass;
    $pane->pid = 'new-31';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aktualitate gehiago lotura',
      'title' => '',
      'body' => '<div class="more-link"><a href="aktualitatea">Aktualitate gehiago</a></div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $display->content['new-31'] = $pane;
    $display->panels['main'][15] = 'new-31';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main_autumn_2011_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'main_autumn_2011';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => '2014ko_uda',
    'no_blocks' => 0,
    'css_id' => 'main_autumn_2011_panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'ipe',
  );
  $display = new panels_display;
  $display->layout = 'akl_column_three';
  $display->layout_settings = '';
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'top_right' => NULL,
      'medium_left' => NULL,
      'medium_center' => NULL,
      'medium_right' => NULL,
      'bottom' => NULL,
      'bottom_right' => NULL,
      'header' => NULL,
      1 => NULL,
      2 => NULL,
      3 => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_alpha' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
    'center' => array(
      'style' => 'default',
    ),
    'top_right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
    'header' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = 'orri_nagusiko_bideo_berriak';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'orri_nagusiko_plaza';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aside_alpha'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aside_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'agenda_azala-agenda_azala_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '18',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aside_alpha'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aside_alpha';
    $pane->type = 'panels_mini';
    $pane->subtype = 'proposamenak_front_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'kultura leihoa',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['aside_alpha'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<style>
i.icon {
	margin: 2px;
    border: 2px solid white;
    display: inline-block;
    position: relative;
    vertical-align: top;
}
i.icon:after,
i.icon:before {
    border: 2px solid white;
    content: \'\';
    position: absolute;
}


/* Clock Icon */

i.clock {
    border-radius: 100%;
    height: 12px;
    width: 12px;
}
i.clock:after,
i.clock:before {
    border-left: none;
    width: 0;
}
i.clock:after {
    height: 2px;
    left: 5px;
    top: 2px;
}
i.clock:before {
    height: 2px;
    left: 7px;
    top: 4px;
    -webkit-transform: rotate(90deg);
       -moz-transform: rotate(90deg);
        -ms-transform: rotate(90deg);
         -o-transform: rotate(90deg);
            transform: rotate(90deg);
}

</style>

<style>
span.icon-box{
background-color:#2d3c01;
padding:2px;
margin:4px;
display:inline-block;
width:20px;
height:20px;
border-radius:100%;
}
span.icon-box:hover{
padding:6px;
margin:0px;
}
</style>

<div style="background-color: #dadadf;padding: 10px;font-family: Exo,Verdana,serif;text-transform:uppercase;">
  <a href="http://elkargoa.aiaraldea.com">
    <div style="font-size: 32px;line-height: 32px;border-bottom:solid 1px #2d3c01;padding-bottom:5px;margin-bottom:10px;">
      <div style="font-weight:lighter;">Elkar·Ekin</div>
      <div><strong>Aiaraldea</strong><span style="font-weight:lighter;">goa</span></div>
    </div>
  </a>
  <div style="text-align:center;"><iframe src="//player.vimeo.com/video/96791745" width="280" height="156" seamless frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe></div>


  <a href="http://elkargoa.aiaraldea.com">
    <div style="font-size: 20px;line-height: 18px;padding:15px 0;border-bottom:solid 1px #2d3c01;">
      <div><span style="font-weight:lighter;">Batu zure </span><strong>energia</strong></div>
      <div><span style="font-weight:lighter;">Euskararen </span><strong>elkargoan</strong></div>
    </div>
  </a>

  <div style="font-weight:lighter;padding:10px 0;border-bottom:solid 1px #2d3c01;font-size: 12px;line-height: 20px;">
    <div style="width:140px;float:left;text-align:center;">
      <a href="http://elkargoa.aiaraldea.com/mota/argia/">
        <span class="icon-box"><i class="clock icon"></i> 
        </span><span>Denbora eman</span>
      </a>
    </div>
    <div style="width:140px;margin-left:140px;text-align:center;">
      <a href="http://elkargoa.aiaraldea.com/mota/argia/">
        <span class="icon-box"><span style="color:white;font-weight:bold;font-size: 18px;">€</span>
        </span><span>Dirua eman</span>
      </a>
    </div>
    <div style="clear:both;"></div>
  </div>

  <a href="http://elkargoa.aiaraldea.com">
    <div style="text-align:center;padding-top:15px;font-size: 16px;line-height: 16px;">
      <span style="font-weight:bolder;">Aiaraldea</span><span style="font-weight:lighter;">Herri</span><span style="font-weight:bolder;color:#CCCC00;">Elkargoa</span>
    </div>
  </a>
</div>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['aside_beta'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Twitter timeline',
      'title' => 'Aiaraldea Twitterren',
      'body' => '<a class="twitter-timeline" href="https://twitter.com/aiaraldea" data-widget-id="344721690888122368">@aiaraldea(r)en Txioak</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['aside_beta'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatearen_home_panels-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['aside_beta'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_iritzi_blokea-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-7'] = $pane;
    $display->panels['aside_beta'][3] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_iritzi_blokea-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-8'] = $pane;
    $display->panels['aside_beta'][4] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Iritzi gehiago lotura',
      'title' => '',
      'body' => '<div class="more-link"><a href="iritzia">Iritzi gehiago</a></div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-9'] = $pane;
    $display->panels['aside_beta'][5] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'azala_azken_iruzkinak_1_2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-10'] = $pane;
    $display->panels['aside_beta'][6] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'aside_beta';
    $pane->type = 'block';
    $pane->subtype = 'adzerk-azk49793';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-11'] = $pane;
    $display->panels['aside_beta'][7] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'irratia_azala-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-12'] = $pane;
    $display->panels['aside_beta'][8] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'aside_beta';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Eguraldia Amurrion',
      'title' => 'Eguraldia Amurrion',
      'body' => '<p><script type="text/javascript" src="http://www.aemet.es/eu/eltiempo/prediccion/municipios/launchwidget/amurrio-id01002?w=g3p01110010ohmffffffw300z167xCCCC00t2D3C01r0s3n2"></script></p><noscript><a target=\'_blank\' style=\'font-weight: bold;font-size: 1.20em;\' href=\'http://www.aemet.es/eu/eltiempo/prediccion/municipios/amurrio-id01002\'>Eguraldia. Kontsultatu AEMETeko iragarpena-erako Amurrio</a></noscript>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-13'] = $pane;
    $display->panels['aside_beta'][9] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
    $pane->panel = 'aside_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'aiaraldea_banner_nodequeue_1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-14'] = $pane;
    $display->panels['aside_beta'][10] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
    $pane->panel = 'header_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'albisteak_azala_1_1-estra_gunea_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Albisteak',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-15'] = $pane;
    $display->panels['header_beta'][0] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => 'Udako postalak',
      'title' => 'Udako postal lehiaketa',
      'body' => '<p><script type="text/javascript">// <![CDATA[
widgetContext = { "url": "http://udakoargazkiak2014.aiaraldea.com/widget/azkenak", "width": "380", "height": "196", "widgetid": "web_widget_iframe_888c955d2c9840385216ff53b9f6efd5" };
// ]]></script><script id="web_widget_iframe_888c955d2c9840385216ff53b9f6efd5" type="text/javascript" src="http://udakoargazkiak2014.aiaraldea.com/sites/all/modules/web_widgets/iframe/web_widgets_iframe.js"></script></p>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-16'] = $pane;
    $display->panels['main'][0] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title Aktualitatea',
      'title' => '',
      'body' => '<h2 class="pane-title">Aktualitatea</h2>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-17'] = $pane;
    $display->panels['main'][1] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-18'] = $pane;
    $display->panels['main'][2] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-19'] = $pane;
    $display->panels['main'][3] = 'new-19';
    $pane = new stdClass;
    $pane->pid = 'new-20';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '1',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-20'] = $pane;
    $display->panels['main'][4] = 'new-20';
    $pane = new stdClass;
    $pane->pid = 'new-21';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-21'] = $pane;
    $display->panels['main'][5] = 'new-21';
    $pane = new stdClass;
    $pane->pid = 'new-22';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-22'] = $pane;
    $display->panels['main'][6] = 'new-22';
    $pane = new stdClass;
    $pane->pid = 'new-23';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-23'] = $pane;
    $display->panels['main'][7] = 'new-23';
    $pane = new stdClass;
    $pane->pid = 'new-24';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'albisteak_azala_1_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_5',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-24'] = $pane;
    $display->panels['main'][8] = 'new-24';
    $pane = new stdClass;
    $pane->pid = 'new-25';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-25'] = $pane;
    $display->panels['main'][9] = 'new-25';
    $pane = new stdClass;
    $pane->pid = 'new-26';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'argazkiak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-26'] = $pane;
    $display->panels['main'][10] = 'new-26';
    $pane = new stdClass;
    $pane->pid = 'new-27';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $display->content['new-27'] = $pane;
    $display->panels['main'][11] = 'new-27';
    $pane = new stdClass;
    $pane->pid = 'new-28';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bideoak_home-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $display->content['new-28'] = $pane;
    $display->panels['main'][12] = 'new-28';
    $pane = new stdClass;
    $pane->pid = 'new-29';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $display->content['new-29'] = $pane;
    $display->panels['main'][13] = 'new-29';
    $pane = new stdClass;
    $pane->pid = 'new-30';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'komunitatea_azala_aktualitatean-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $display->content['new-30'] = $pane;
    $display->panels['main'][14] = 'new-30';
    $pane = new stdClass;
    $pane->pid = 'new-31';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aktualitate gehiago lotura',
      'title' => '',
      'body' => '<div class="more-link"><a href="aktualitatea">Aktualitate gehiago</a></div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $display->content['new-31'] = $pane;
    $display->panels['main'][15] = 'new-31';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_autumn_2011'] = $page;

 return $pages;

}
