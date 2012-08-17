<?php
/**
 * @file
 * classy_special.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function classy_special_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_special';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_special'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_special';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_special'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_special';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_special'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_special';
  $strongarm->value = '1';
  $export['node_preview_special'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_special';
  $strongarm->value = 0;
  $export['node_submitted_special'] = $strongarm;

  return $export;
}
