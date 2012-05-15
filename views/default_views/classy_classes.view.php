<?php

$view = new view;
$view->name = 'classes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'classes';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'classes';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['classy_course_id_target_id']['id'] = 'classy_course_id_target_id';
$handler->display->display_options['relationships']['classy_course_id_target_id']['table'] = 'field_data_classy_course_id';
$handler->display->display_options['relationships']['classy_course_id_target_id']['field'] = 'classy_course_id_target_id';
$handler->display->display_options['relationships']['classy_course_id_target_id']['label'] = 'Course';
$handler->display->display_options['relationships']['classy_course_id_target_id']['required'] = 1;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['relationship'] = 'classy_course_id_target_id';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['body']['alter']['external'] = 0;
$handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['body']['alter']['html'] = 0;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = 1;
$handler->display->display_options['fields']['body']['hide_empty'] = 0;
$handler->display->display_options['fields']['body']['empty_zero'] = 0;
$handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
/* Field: Content: Time */
$handler->display->display_options['fields']['classy_time_id']['id'] = 'classy_time_id';
$handler->display->display_options['fields']['classy_time_id']['table'] = 'field_data_classy_time_id';
$handler->display->display_options['fields']['classy_time_id']['field'] = 'classy_time_id';
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
$handler->display->display_options['fields']['classy_time_id']['field_api_classes'] = 0;
/* Field: Content: Teacher */
$handler->display->display_options['fields']['classy_teacher_id']['id'] = 'classy_teacher_id';
$handler->display->display_options['fields']['classy_teacher_id']['table'] = 'field_data_classy_teacher_id';
$handler->display->display_options['fields']['classy_teacher_id']['field'] = 'classy_teacher_id';
$handler->display->display_options['fields']['classy_teacher_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['classy_teacher_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['classy_teacher_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['classy_teacher_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['classy_teacher_id']['field_api_classes'] = 0;
/* Field: Content: Room */
$handler->display->display_options['fields']['classy_room_id']['id'] = 'classy_room_id';
$handler->display->display_options['fields']['classy_room_id']['table'] = 'field_data_classy_room_id';
$handler->display->display_options['fields']['classy_room_id']['field'] = 'classy_room_id';
$handler->display->display_options['fields']['classy_room_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['classy_room_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['classy_room_id']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['classy_room_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['classy_room_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['classy_room_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['classy_room_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['classy_room_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['classy_room_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['classy_room_id']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'class' => 'class',
);

/* Display: Current */
$handler = $view->new_display('page', 'Current', 'current');
$handler->display->display_options['path'] = 'classes';