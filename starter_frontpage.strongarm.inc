<?php
/**
 * @file
 * starter_frontpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function starter_frontpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'frontpage';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
