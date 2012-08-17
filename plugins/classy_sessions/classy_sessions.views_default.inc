<?php
/**
 * @file
 * classy_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function classy_sessions_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Sessions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'sort_name' => 'sort_name',
    'field_student' => 'field_student',
    'field_room' => 'field_room',
    'sort_name_1' => 'sort_name_1',
    'title' => 'title',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sort_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sort_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_target_id']['id'] = 'field_student_target_id';
  $handler->display->display_options['relationships']['field_student_target_id']['table'] = 'field_data_field_student';
  $handler->display->display_options['relationships']['field_student_target_id']['field'] = 'field_student_target_id';
  $handler->display->display_options['relationships']['field_student_target_id']['label'] = 'User';
  $handler->display->display_options['relationships']['field_student_target_id']['required'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['label'] = 'Tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['required'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_room']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_room']['field_api_classes'] = 0;
  /* Field: Content: Tutor */
  $handler->display->display_options['fields']['field_tutor']['id'] = 'field_tutor';
  $handler->display->display_options['fields']['field_tutor']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['fields']['field_tutor']['field'] = 'field_tutor';
  $handler->display->display_options['fields']['field_tutor']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tutor']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tutor']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tutor']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tutor']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tutor']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tutor']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tutor']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tutor']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tutor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_tutor']['field_api_classes'] = 0;
  /* Field: Content: Session Status */
  $handler->display->display_options['fields']['field_session_status']['id'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['fields']['field_session_status']['field'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_session_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_session_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_session_status']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_status']['field_api_classes'] = 0;
  /* Field: Content: Number of Credits */
  $handler->display->display_options['fields']['field_number_of_credits']['id'] = 'field_number_of_credits';
  $handler->display->display_options['fields']['field_number_of_credits']['table'] = 'field_data_field_number_of_credits';
  $handler->display->display_options['fields']['field_number_of_credits']['field'] = 'field_number_of_credits';
  $handler->display->display_options['fields']['field_number_of_credits']['label'] = 'Vouchers';
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_number_of_credits']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_number_of_credits']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_number_of_credits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_number_of_credits']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_student_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'session' => 'session',
  );

  /* Display: User */
  $handler = $view->new_display('page', 'User', 'user');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_room' => 'field_room',
    'field_tutor' => 'field_tutor',
    'field_session_status' => 'field_session_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tutor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no sessions scheduled.  ';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['path'] = 'admin/classy/user_sessions/%';

  /* Display: Overview */
  $handler = $view->new_display('page', 'Overview', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Contacts: Sort Name */
  $handler->display->display_options['fields']['sort_name']['id'] = 'sort_name';
  $handler->display->display_options['fields']['sort_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['sort_name']['field'] = 'sort_name';
  $handler->display->display_options['fields']['sort_name']['relationship'] = 'field_student_target_id';
  $handler->display->display_options['fields']['sort_name']['label'] = 'Student';
  $handler->display->display_options['fields']['sort_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sort_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sort_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sort_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sort_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['sort_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sort_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sort_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sort_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['sort_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Contacts: Sort Name */
  $handler->display->display_options['fields']['sort_name_1']['id'] = 'sort_name_1';
  $handler->display->display_options['fields']['sort_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['sort_name_1']['field'] = 'sort_name';
  $handler->display->display_options['fields']['sort_name_1']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['sort_name_1']['label'] = 'Tutor';
  $handler->display->display_options['fields']['sort_name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sort_name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sort_name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sort_name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sort_name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['sort_name_1']['link_to_civicrm_contact'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_room']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_room']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Schedule';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'session' => 'session',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'admin/classy/sessions/overview';
  $export['sessions'] = $view;

  $view = new view;
  $view->name = 'tutoring_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Tutoring Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['row_options']['calendar_date_link'] = 'session';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'class' => '#ffffff',
    'course' => '#ffffff',
    'session' => '#ffffff',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_room']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_room']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_room']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_room']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'month');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'admin/classy/tutoring/month';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'week');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'admin/classy/tutoring/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'day');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'admin/classy/tutoring/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'year');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'admin/classy/tutoring/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $export['tutoring_calendar'] = $view;

  return $export;
}
