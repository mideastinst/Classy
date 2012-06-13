<?php

$view = new view;
$view->name = 'student_enrollment';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'classy_grades';
$view->human_name = 'Student Enrollment';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Student Enrollment';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Classy: Class Reference */
$handler->display->display_options['relationships']['class_id']['id'] = 'class_id';
$handler->display->display_options['relationships']['class_id']['table'] = 'classy_grades';
$handler->display->display_options['relationships']['class_id']['field'] = 'class_id';
$handler->display->display_options['relationships']['class_id']['required'] = 0;
/* Field: Content: Year */
$handler->display->display_options['fields']['classy_year_id']['id'] = 'classy_year_id';
$handler->display->display_options['fields']['classy_year_id']['table'] = 'field_data_classy_year_id';
$handler->display->display_options['fields']['classy_year_id']['field'] = 'classy_year_id';
$handler->display->display_options['fields']['classy_year_id']['relationship'] = 'class_id';
$handler->display->display_options['fields']['classy_year_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['classy_year_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['classy_year_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['classy_year_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['classy_year_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['classy_year_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['classy_year_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['classy_year_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['classy_year_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['classy_year_id']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['classy_year_id']['field_api_classes'] = 0;
/* Field: Content: Course */
$handler->display->display_options['fields']['classy_course_id']['id'] = 'classy_course_id';
$handler->display->display_options['fields']['classy_course_id']['table'] = 'field_data_classy_course_id';
$handler->display->display_options['fields']['classy_course_id']['field'] = 'classy_course_id';
$handler->display->display_options['fields']['classy_course_id']['relationship'] = 'class_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'class_id';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Semester */
$handler->display->display_options['fields']['classy_semester_id']['id'] = 'classy_semester_id';
$handler->display->display_options['fields']['classy_semester_id']['table'] = 'field_data_classy_semester_id';
$handler->display->display_options['fields']['classy_semester_id']['field'] = 'classy_semester_id';
$handler->display->display_options['fields']['classy_semester_id']['relationship'] = 'class_id';
$handler->display->display_options['fields']['classy_semester_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['classy_semester_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['classy_semester_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['classy_semester_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['classy_semester_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['classy_semester_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['classy_semester_id']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['classy_semester_id']['field_api_classes'] = 0;
/* Field: Content: Time */
$handler->display->display_options['fields']['classy_time_id']['id'] = 'classy_time_id';
$handler->display->display_options['fields']['classy_time_id']['table'] = 'field_data_classy_time_id';
$handler->display->display_options['fields']['classy_time_id']['field'] = 'classy_time_id';
$handler->display->display_options['fields']['classy_time_id']['relationship'] = 'class_id';
$handler->display->display_options['fields']['classy_time_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['classy_time_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['classy_time_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['classy_time_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['classy_time_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['classy_time_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['classy_time_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['classy_time_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['classy_time_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['classy_time_id']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['classy_time_id']['field_api_classes'] = 0;
/* Field: Classy: Grade */
$handler->display->display_options['fields']['grade']['id'] = 'grade';
$handler->display->display_options['fields']['grade']['table'] = 'classy_grades';
$handler->display->display_options['fields']['grade']['field'] = 'grade';

/* Display: User Page */
$handler = $view->new_display('page', 'User Page', 'user');
$handler->display->display_options['path'] = 'my-classes';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Classes';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
