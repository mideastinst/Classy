<?php
/**
 * @file
 * classy_sessions.features.inc
 */

/**
 * Implements hook_views_api().
 */
function classy_sessions_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function classy_sessions_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Used to schedule tutoring sessions.'),
      'has_title' => '1',
      'title_label' => t('Session'),
      'help' => '',
    ),
  );
  return $items;
}
