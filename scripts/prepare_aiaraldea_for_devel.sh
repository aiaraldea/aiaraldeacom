#!/bin/bash

site_path="/var/www/drupal/aiaraldea"
#sed -i "/^[ ]*\$db_url/s/${origin_dbname}';/${destination_dbname}';/g" ${destination_path}_new/sites/default/settings.php


drush --yes dis securepages googleanalytics adzerk memcache xmlsitemap droptor mollom update cdn statcounter
drush dl ftools
drush --yes en features_tools 
drush --yes vset cache 0
drush --yes vset preprocess_css 0
drush --yes vset preprocess_js 0
drush --yes vset less_devel 1
drush cc all

# change settings.php

# change .htaccess to correct RewriteBase
