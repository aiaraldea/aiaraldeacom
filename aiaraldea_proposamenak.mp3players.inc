<?php

/**
 * Implementation of hook_mp3player_default_players().
 */
function aiaraldea_proposamenak_mp3player_default_players() {
  $export = array();

  $player = new stdClass;
  $player->disabled = FALSE; /* Edit this to true to make a default player disabled initially */
  $player->api_version = 1;
  $player->name = 'proposamenak_azala';
  $player->autostart = 'no';
  $player->loopaudio = 'no';
  $player->animation = 'yes';
  $player->remaining = 'no';
  $player->noinfo = 'no';
  $player->initialvolume = '100';
  $player->buffer = '5';
  $player->encode = 'no';
  $player->checkpolicy = 'no';
  $player->rtl = 'no';
  $player->width = 290;
  $player->transparentpagebg = 'yes';
  $player->pagebg = '';
  $player->bg = 'E5E5E5';
  $player->leftbg = 'CCCCCC';
  $player->lefticon = '333333';
  $player->voltrack = 'F2F2F2';
  $player->volslider = '666666';
  $player->rightbg = 'B4B4B4';
  $player->rightbghover = '999999';
  $player->righticon = '333333';
  $player->righticonhover = 'FFFFFF';
  $player->loader = '009900';
  $player->track = 'FFFFFF';
  $player->tracker = 'DDDDDD';
  $player->border = 'CCCCCC';
  $player->skip = '666666';
  $player->text = '333333';
  $export['proposamenak_azala'] = $player;

  $player = new stdClass;
  $player->disabled = FALSE; /* Edit this to true to make a default player disabled initially */
  $player->api_version = 1;
  $player->name = 'proposamenak_detail';
  $player->autostart = 'no';
  $player->loopaudio = 'no';
  $player->animation = 'yes';
  $player->remaining = 'no';
  $player->noinfo = 'no';
  $player->initialvolume = '100';
  $player->buffer = '5';
  $player->encode = 'no';
  $player->checkpolicy = 'no';
  $player->rtl = 'no';
  $player->width = 560;
  $player->transparentpagebg = 'yes';
  $player->pagebg = '#D3C01';
  $player->bg = '2D3C01';
  $player->leftbg = 'CCCCCC';
  $player->lefticon = '333333';
  $player->voltrack = 'F2F2F2';
  $player->volslider = '666666';
  $player->rightbg = 'B4B4B4';
  $player->rightbghover = '999999';
  $player->righticon = '333333';
  $player->righticonhover = 'FFFFFF';
  $player->loader = '009900';
  $player->track = 'FFFFFF';
  $player->tracker = 'DDDDDD';
  $player->border = 'CCCCCC';
  $player->skip = '666666';
  $player->text = '333333';
  $export['proposamenak_detail'] = $player;

  $player = new stdClass;
  $player->disabled = FALSE; /* Edit this to true to make a default player disabled initially */
  $player->api_version = 1;
  $player->name = 'proposamenak_list';
  $player->autostart = 'no';
  $player->loopaudio = 'no';
  $player->animation = 'no';
  $player->remaining = 'no';
  $player->noinfo = 'yes';
  $player->initialvolume = '100';
  $player->buffer = '5';
  $player->encode = 'no';
  $player->checkpolicy = 'no';
  $player->rtl = 'no';
  $player->width = 80;
  $player->transparentpagebg = 'yes';
  $player->pagebg = '';
  $player->bg = 'E5E5E5';
  $player->leftbg = 'CCCCCC';
  $player->lefticon = '333333';
  $player->voltrack = 'F2F2F2';
  $player->volslider = '666666';
  $player->rightbg = 'B4B4B4';
  $player->rightbghover = '999999';
  $player->righticon = '333333';
  $player->righticonhover = 'FFFFFF';
  $player->loader = '009900';
  $player->track = 'FFFFFF';
  $player->tracker = 'DDDDDD';
  $player->border = 'CCCCCC';
  $player->skip = '666666';
  $player->text = '333333';
  $export['proposamenak_list'] = $player;

  return $export;
}
