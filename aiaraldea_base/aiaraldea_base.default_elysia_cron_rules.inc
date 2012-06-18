<?php

/**
 * Implementation of hook_default_elysia_cron_rules().
 */
function aiaraldea_base_default_elysia_cron_rules() {
  $cron_rules = array();

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'backup_migrate_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '35 3 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['backup_migrate_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'date_timezone_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '5 0 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['date_timezone_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'dblog_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '15 3 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['dblog_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'feeds_cron';
  $cron_rule->disable = NULL;
  $cron_rule->rule = NULL;
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['feeds_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'filter_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '5 1 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['filter_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'node_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '15 4 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['node_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'radioactivity_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '40 */3 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['radioactivity_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'radioactivity_node_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '40 */3 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['radioactivity_node_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'scheduler_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '*/5 * * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['scheduler_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'update_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '20 1 * * *';
  $cron_rule->weight = 0;
  $cron_rule->context = NULL;
  $cron_rules['update_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'session_expire_cron';
  $cron_rule->disable = FALSE;
  $cron_rule->rule = '48 5 * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['session_expire_cron'] = $cron_rule;

  return $cron_rules;

}
