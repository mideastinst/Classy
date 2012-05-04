<?php
/**
 * @file
 * classy.features.inc
 */


/**
 * Implements hook_node_info().
 */
function classy_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('Classes are individuals instances of a Course, which can be assigned Instructors, Times and Rooms'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Used for displaying information about a specific course.'),
      'has_title' => '1',
      'title_label' => t('Course Title'),
      'help' => '',
    ),
  );
  return $items;
}
