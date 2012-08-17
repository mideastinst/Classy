<?php
/**
 * @file
 * classy_special.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function classy_special_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function classy_special_node_info() {
  $items = array(
    'special' => array(
      'name' => t('Special Course'),
      'base' => 'node_content',
      'description' => t('MEI Weekend Classes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
