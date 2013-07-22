<?php

/**
 * Implementation of hook_strongarm().
 */
function komunitatea_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_panel';
  $strongarm->value = '1';
  $export['comment_subject_field_panel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_argazkiak';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '6',
    'menu' => '-1',
    'path' => '5',
    'custom_breadcrumbs' => '4',
    'path_redirect' => '3',
  );
  $export['content_extra_weights_argazkiak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_artikulua';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'comment_settings' => '8',
    'menu' => '1',
    'path' => '5',
    'custom_breadcrumbs' => '7',
    'path_redirect' => '6',
  );
  $export['content_extra_weights_artikulua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_bideoak';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'comment_settings' => '7',
    'menu' => '0',
    'path' => '6',
    'custom_breadcrumbs' => '5',
    'path_redirect' => '4',
  );
  $export['content_extra_weights_bideoak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_hitzordua';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '6',
    'author' => '5',
    'options' => '4',
    'comment_settings' => '10',
    'menu' => '3',
    'path' => '9',
    'custom_breadcrumbs' => '7',
    'path_redirect' => '8',
  );
  $export['content_extra_weights_hitzordua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_iritzi_gutuna';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '7',
    'menu' => '0',
    'path' => '6',
    'custom_breadcrumbs' => '5',
    'path_redirect' => '4',
  );
  $export['content_extra_weights_iritzi_gutuna'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_zutabea';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-1',
    'path' => '6',
    'custom_breadcrumbs' => '4',
    'path_redirect' => '5',
  );
  $export['content_extra_weights_zutabea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_argazkiak';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_argazkiak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_artikulua';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_artikulua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_bideoak';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_bideoak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_hitzordua';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_hitzordua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_iritzi_gutuna';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_iritzi_gutuna'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_zutabea';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_zutabea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_panels';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_panels'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:full:field_hitzordua_hora_fromto';
  $strongarm->value = 'both';
  $export['date:hitzordua:full:field_hitzordua_hora_fromto'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:full:field_hitzordua_hora_multiple_from';
  $strongarm->value = '';
  $export['date:hitzordua:full:field_hitzordua_hora_multiple_from'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:full:field_hitzordua_hora_multiple_number';
  $strongarm->value = '';
  $export['date:hitzordua:full:field_hitzordua_hora_multiple_number'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:full:field_hitzordua_hora_multiple_to';
  $strongarm->value = '';
  $export['date:hitzordua:full:field_hitzordua_hora_multiple_to'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:full:field_hitzordua_hora_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:hitzordua:full:field_hitzordua_hora_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:teaser:field_hitzordua_hora_fromto';
  $strongarm->value = 'both';
  $export['date:hitzordua:teaser:field_hitzordua_hora_fromto'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:teaser:field_hitzordua_hora_multiple_from';
  $strongarm->value = '';
  $export['date:hitzordua:teaser:field_hitzordua_hora_multiple_from'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:teaser:field_hitzordua_hora_multiple_number';
  $strongarm->value = '';
  $export['date:hitzordua:teaser:field_hitzordua_hora_multiple_number'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:teaser:field_hitzordua_hora_multiple_to';
  $strongarm->value = '';
  $export['date:hitzordua:teaser:field_hitzordua_hora_multiple_to'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:hitzordua:teaser:field_hitzordua_hora_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:hitzordua:teaser:field_hitzordua_hora_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_appid';
  $strongarm->value = '375260179247288';
  $export['fbconnect_appid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_button';
  $strongarm->value = 'medium_short';
  $export['fbconnect_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_button_text';
  $strongarm->value = 'Connect';
  $export['fbconnect_button_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_debug';
  $strongarm->value = 0;
  $export['fbconnect_debug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_exclude_patterns';
  $strongarm->value = '';
  $export['fbconnect_exclude_patterns'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_fast_reg';
  $strongarm->value = 0;
  $export['fbconnect_fast_reg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_fast_reg_autoname';
  $strongarm->value = 0;
  $export['fbconnect_fast_reg_autoname'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_language_code';
  $strongarm->value = 'eu_EU';
  $export['fbconnect_language_code'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_loginout_mode';
  $strongarm->value = 'manual';
  $export['fbconnect_loginout_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_allow';
  $strongarm->value = 'allow';
  $export['fbconnect_pic_allow'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_logo';
  $strongarm->value = 1;
  $export['fbconnect_pic_logo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_size';
  $strongarm->value = 'square';
  $export['fbconnect_pic_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_size_comments';
  $strongarm->value = 'square';
  $export['fbconnect_pic_size_comments'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_size_nodes';
  $strongarm->value = 'square';
  $export['fbconnect_pic_size_nodes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_pic_size_profile';
  $strongarm->value = 'small';
  $export['fbconnect_pic_size_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_reg_options';
  $strongarm->value = 0;
  $export['fbconnect_reg_options'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fbconnect_skey';
  $strongarm->value = 'c46aae26bdcb97ec7ffce96f3dff2d14';
  $export['fbconnect_skey'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_id';
  $strongarm->value = '375260179247288';
  $export['fboauth_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_secret';
  $strongarm->value = '77447d46b4cdabaebff0d228daa98c61';
  $export['fboauth_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_connections';
  $strongarm->value = array();
  $export['fboauth_user_connections'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_email';
  $strongarm->value = 1;
  $export['fboauth_user_email'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_picture';
  $strongarm->value = 0;
  $export['fboauth_user_picture'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_profile';
  $strongarm->value = array(
    'profile_izen_abizenak' => 'first_name',
  );
  $export['fboauth_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_properties';
  $strongarm->value = array();
  $export['fboauth_user_properties'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fboauth_user_username';
  $strongarm->value = 'username';
  $export['fboauth_user_username'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_argazkiak';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_argazkiak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_artikulua';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_artikulua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bideoak';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_bideoak'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hitzordua';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_hitzordua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_iritzi_gutuna';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_iritzi_gutuna'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_zutabea';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_zutabea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '8';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 1;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '!username,

pasahitz berria eskatu duzu www.aiaraldea.com web-gunean.

Lotura honetan klik eginda aldi bakar batez zure kontuan sartu ahal izango zara pasahitza berrezartzeko.

!login_url

Pasahitza berrezartzeko aukera hau 24 ordutan iraungiko da. 

Sartutakoan, sistemak zure pasahitza aldatzeko aukerara berbidaliko zaitu !edit_uri. 

Edozein zalantza edo galdera duzula, jar zaitez gurekin harremanetan:

Posta elektronikoa: komunitatea@aiaraldea.com

Telefonoak: 945 656 85 54 / 688 848 152

Ondo izan.';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = '!username, pasahitz berria eskatu duzu www.aiaraldea.com web-gunean';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '!username,

A site administrator at !site has created an account for you. You may now log in to !login_uri using the following username and password:

username: !username
password: !password

You may also log in by clicking on this link or copying and pasting it in your browser:

!login_url

This is a one-time login, so it can be used only once.

After logging in, you will be redirected to !edit_uri so you can change your password.


--  !site team';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'An administrator created an account for you at !site';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '!username,

Eskerrik asko eta ongi etorri www.aiaraldea.com web-guneko komunitatera. 
Zure erregistroa bukatzeko mesedez klik egin ezazu lotura honetan: 


Erabiltzaile bezala izena eman duzu, eta beraz, aurrerantzean iruzkinak idatzi ahal izango dituzu web-gunean argitaratzen diren eduki guztietan, baina gogoan izan arau hauek:

    - Modu zuzen edo traketsean izan, euskarazko testuak onartuko dira soilik.
    - Irainak, debaldeko salaketak eta difamazioak onargaitzak dira.
    - Arauok hausten badira, Aiaraldea Komunikazio Leihoak neurriak hartuko ditu, iruzkina ezabatzea barne.
    - Aiaraldea Komunikazio Leihoa ez da erabiltzaileek ematen dituzten iritzien arduradun
    - Azkenik, errespetuz eta zentzuz jokatzeko deia luzatzen dizuegu.


Gogoratu erabiltzaile bezala web-gunean sartzeko !login_uri zure izen eta pasahitza hauek direla: 

username: !username
password: !password


Era berean, erabiltzaile bezala sartzeko lotura honetan klik egin dezakezu:
!login_url



Gogora ezazu erabiltzaile bezala lehenengo aldiz sartzen zarenean zure profila editatu beharko duzula !edit_uri, bai eta zure pasahitza ezarri ere.

Eskerrik asko eta ongi etorri aiaraldea.com web-guneko komunitatera

AIARALDEA KOMUNIKAZIO LEIHOA';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Ongi etorri !username at !, aiaraldea.com weg-guneko erabiltzaile egin zara';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '!username,


Eskerrik asko eta ongi etorri www.aiaraldea.com web-guneko komunitatera. 

Zure erregistroa ondo egin da eta web-guneko erabiltzaile izatea hautatu duzu. Horrek esan nahi du aurrerantzean nahi beste eduki sortu ahal izango duzula web-gunean. 

Ahal bezain laster zurekin harremanetan jarriko gara edukiak sortzeko pasahitza eta zenbait jarraibide helarazteko.

Lehenago baina, eta helbide elektroniko honen jabe zarela ziurtatzeko egin klik lotura honetan: 

Eskerrik asko eta ongi etorri Aiaraldea Komunikazio Leihoaren komunitatera.

AIARALDEA KOMUNIKAZIO LEIHOA';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Account details for !username at !site (pending admin approval)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '!username,

Your account at !site has been activated.

You may now log in by clicking on this link or copying and pasting it in your browser:

!login_url

This is a one-time login, so it can be used only once.

After logging in, you will be redirected to !edit_uri so you can change your password.

Once you have set your own password, you will be able to log in to !login_uri in the future using:

username: !username
';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Account details for !username at !site (approved)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '!username,

www.aiaraldea.com web-guneko zure kontua blokeatua izan da. 
Aurki jarriko gara zurekin harremanetan.

Eskerrik asko.

AIARALDEA KOMUNIKAZIO LEIHOA';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 1;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = '!username, www.aiaraldea.com web-guneko zure kontua blokeatua izan da';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_body';
  $strongarm->value = '!username,

www.aiaraldea.com web-guneko zure kontua ezabatua izan da.

Gurekin harremanetan jarri nahi baduzu: komunitatea@aiaraldea.com

AIARALDEA KOMUNIKAZIO LEIHOA';
  $export['user_mail_status_deleted_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_notify';
  $strongarm->value = 0;
  $export['user_mail_status_deleted_notify'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_subject';
  $strongarm->value = '!username, www.aiaraldea.com web-guneko zure kontua ezabatua izan da';
  $export['user_mail_status_deleted_subject'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'sites/all/themes/aiaraldeacom/erabiltzaile-ikonoa-ona.png';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '85x85';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '30';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
