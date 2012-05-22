<?php

$view = new view;
$view->name = 'students';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'classy_grades';
$view->human_name = 'Student Grades';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Student Grades';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'student_id' => 'student_id',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'student_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['empty_table'] = 0;
/* Field: Classy: Class Reference */
$handler->display->display_options['fields']['class_id']['id'] = 'class_id';
$handler->display->display_options['fields']['class_id']['table'] = 'classy_grades';
$handler->display->display_options['fields']['class_id']['field'] = 'class_id';
$handler->display->display_options['fields']['class_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['class_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['class_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['class_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['class_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['class_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['class_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['class_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['class_id']['hide_alter_empty'] = 1;
/* Field: Classy: Student Reference */
$handler->display->display_options['fields']['student_id']['id'] = 'student_id';
$handler->display->display_options['fields']['student_id']['table'] = 'classy_grades';
$handler->display->display_options['fields']['student_id']['field'] = 'student_id';
/* Field: Classy: Grade ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'classy_grades';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['id']['alter']['external'] = 0;
$handler->display->display_options['fields']['id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['id']['alter']['html'] = 0;
$handler->display->display_options['fields']['id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['id']['hide_empty'] = 0;
$handler->display->display_options['fields']['id']['empty_zero'] = 0;
$handler->display->display_options['fields']['id']['hide_alter_empty'] = 1;
/* Filter criterion: Classy: Class Reference */
$handler->display->display_options['filters']['class_id']['id'] = 'class_id';
$handler->display->display_options['filters']['class_id']['table'] = 'classy_grades';
$handler->display->display_options['filters']['class_id']['field'] = 'class_id';
$handler->display->display_options['filters']['class_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['class_id']['expose']['operator_id'] = 'class_id_op';
$handler->display->display_options['filters']['class_id']['expose']['label'] = 'Class';
$handler->display->display_options['filters']['class_id']['expose']['operator'] = 'class_id_op';
$handler->display->display_options['filters']['class_id']['expose']['identifier'] = 'class_id';
$handler->display->display_options['filters']['class_id']['expose']['multiple'] = FALSE;

/* Display: Overview */
$handler = $view->new_display('page', 'Overview', 'page');
$handler->display->display_options['path'] = 'admin/classy/students';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Students';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';
