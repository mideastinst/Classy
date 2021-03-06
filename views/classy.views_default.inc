<?php
/**
 * @file
 * Provides default views on behalf of the classy module.
 */

/**
 * Implementation of hook_views_default_views().
 */
function classy_views_default_views() {
  // Search the "default_views" directory for files ending in .view.php.
  $views = array();
  $files = file_scan_directory(drupal_get_path('module', 'classy') . '/views/default_views', '/view.php/');
  foreach ($files as $absolute => $file) {
    if (strpos($file->name, '_vbo_') !== FALSE && !module_exists('views_bulk_operations')) {
      // This is a VBO-specific view, but we don't have VBO, so skip it.
      continue;
    }
    require_once DRUPAL_ROOT . '/' . $absolute;
    if (isset($view)) {
      // $file->name has the ".php" stripped off, but still has the ".view".
      $view_name = substr($file->name, 0, strrpos($file->name, '.'));
      $views[$view_name] = $view;
    }
  }
  return $views;
}