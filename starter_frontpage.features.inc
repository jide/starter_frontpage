<?php
/**
 * @file
 * starter_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
