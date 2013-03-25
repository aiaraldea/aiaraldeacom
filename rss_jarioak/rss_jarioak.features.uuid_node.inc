<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function rss_jarioak_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => 'eu',
    'uid' => '0',
    'status' => '1',
    'created' => '1273778627',
    'changed' => '1340746578',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '0',
    'title' => 'RSS jarioak',
    'body' => '<!--                 #content-area table{                  }                
    #content-area thead {                     background-color:#2D3C01;                     color:#ffffff;                 }                 
    #content-area tr.odd {                     background-color: #F5F5CC;                 }                
    #content-area thead th {                     padding: 6px;                     text-align: center;                 }                 
    #content-area tbody th {                     padding: 6px;                     text-align: left;                 }                
    #content-area td {                     padding: 6px;                 }                 
    #aiaraldea_rss_table td {                     text-align: center;                 }                 
    #aiaraldea_rss_table img {                     border: none;                 }              --> 
    <table id="aiaraldea_rss_table" style="width: 100%;">
        <thead> 
            <tr>
                <th>Atala</th> 
                <th>RSS 2.0</th> 
                <th>Bloglines</th> 
                <th>Google Reader</th>
            </tr> 
        </thead> 
        <tbody>
            <tr class="odd">
                <th>Guztiak</th> 
                <td><a href="/feed"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td> 
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td> 
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td>
            </tr>
            <tr class="even">
                <th>Albisteak</th> 
                <td><a href="/feed/albiste"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td>
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed/albiste"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td> 
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed/albiste"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td></tr> 
            <tr class="odd">
                <th>Agenda</th> 
                <td><a href="/feed/deialdi"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td> 
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed/deialdi"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td>
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed/deialdi"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td>
            </tr> 
            <tr class="even">
                <th>Proposamenak</th> 
                <td><a href="/feed/proposamena"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td> 
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed/proposamena"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td> 
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed/proposamena"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td>
            </tr> 
            <tr class="odd">
                <th>Bideoak</th> 
                <td><a href="/feed/bideo"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td> 
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed/bideo"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td> 
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed/bideo"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td>
            </tr>
            <tr class="odd">
                <th>Argazki bildumak</th> 
                <td><a href="/feed/flickr_image_set"> <img src="/misc/feed.png" border="0" alt="Eskuratu RSS jarioa" /> </a></td> 
                <td><a href="http://www.bloglines.com/sub/http://www.aiaraldea.com/feed/flickr_image_set"> <img src="http://static.bloglines.com/images/sub_modern9.gif" border="0" alt="Bloglines bidez harpidetu" /> </a></td> 
                <td><a href="http://fusion.google.com/add?feedurl=http%3A//www.aiaraldea.com/feed/flickr_image_set"><img src="http://gmodules.com/ig/images/plus_google.gif" alt="Gehitu Googlera" /></a></td>
            </tr>
        </tbody>
    </table>',
    'teaser' => '<!--                 #content-area table{                  }                
    #content-area thead {                     background-color:#2D3C01;                     color:#ffffff;                 }                 
    #content-area tr.odd {                     background-color: #F5F5CC;                 }                
    #content-area thead th {                     padding: 6px;                     text-align: center;                 }                 
    #content-area tbody th {                     padding: 6px;                     text-align: left;                 }                
    #content-ar',
    'log' => '',
    'revision_timestamp' => '1340746578',
    'format' => '2',
    'name' => '',
    'picture' => '',
    'data' => NULL,
    'path' => 'rss-jarioak',
    'last_comment_timestamp' => '1340047112',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'radioactivity' => array(
      'energy' => array(
        '1' => 18.868514510223,
        '2' => 37.881548448539,
      ),
    ),
    'pathauto_perform_alias' => FALSE,
    'date' => '2010-05-13 20:23:47 +0100',
  );
  return $nodes;
}
