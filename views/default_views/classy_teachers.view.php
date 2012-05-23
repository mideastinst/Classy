<?php

$view = new view;
$view->name = 'teachers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Teachers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Teachers';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_classy_teacher_id_node']['id'] = 'reverse_classy_teacher_id_node';
$handler->display->display_options['relationships']['reverse_classy_teacher_id_node']['table'] = 'users';
$handler->display->display_options['relationships']['reverse_classy_teacher_id_node']['field'] = 'reverse_classy_teacher_id_node';
$handler->display->display_options['relationships']['reverse_classy_teacher_id_node']['label'] = 'Classes';
$handler->display->display_options['relationships']['reverse_classy_teacher_id_node']['required'] = 0;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['external'] = 0;
$handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['element_label_colon'] = 0;
$handler->display->display_options['fields']['name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['name']['link_to_user'] = 1;
$handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
$handler->display->display_options['fields']['name']['format_username'] = 1;
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = 'Email';
$handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['mail']['alter']['external'] = 0;
$handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
$handler->display->display_options['fields']['mail']['alter']['html'] = 0;
$handler->display->display_options['fields']['mail']['element_label_colon'] = 0;
$handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
$handler->display->display_options['fields']['mail']['hide_empty'] = 0;
$handler->display->display_options['fields']['mail']['empty_zero'] = 0;
$handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_classy_teacher_id_node';
$handler->display->display_options['fields']['title']['label'] = 'Classes';
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
$handler->display->display_options['fields']['title']['element_label_colon'] = 0;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 0;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = 0;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  5 => '5',
);
$handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Teacher';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
$handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;

/* Display: Teachers */
$handler = $view->new_display('page', 'Teachers', 'page');
$handler->display->display_options['path'] = 'admin/classy/teachers';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Teachers';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
