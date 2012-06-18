<?php

//grade entry form
function classy_user_grade($form, &$form_state) {
  $args = explode('/',$_SERVER['REQUEST_URI']);
      
  //check for existing grade for the class
  $uid = check_url($args[3]);
  if (is_numeric($uid)) {
    $user = user_load($args[3]);
  }
  
  $nid = check_url($args[4]);
  if (is_numeric($nid)) {
    $node = node_load($args[4]);
  }
  if ($node && $user) {
    $query = db_select('classy_grades', 'g');
    $query
      ->fields('g')
      ->condition('class_id', $node->nid,'=')
      ->condition('student_id', $user->uid,'=');
    $grade = $query->execute()->fetchAssoc();

  }
  

  $options = array('1' => t('Enabled'), '0' => t('Disabled'));
  $form['student'] = array(
    '#type' => 'fieldset',
    '#title' => t('Registration Information'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['student']['user'] = array(
    '#type' => 'textfield',
    '#title' => t('User Name'),
    '#size' => 30,
    '#maxlength' => 64,
    '#default_value' => $user->name,
    '#disabled' => TRUE,
  );
  $form['student']['uid'] = array(
    '#type' => 'value',
    '#default_value' => $user->uid,
  );
  $form['student']['class'] = array( 
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#size' => 30,
    '#maxlength' => 64,
    '#default_value' => $node->title,
    '#disabled' => TRUE,
  );
  $form['student']['nid'] = array(
    '#type' => 'value',
    '#default_value' => $node->nid,
  );
  $form['grade'] = array(  
    '#type' => 'textfield',
    '#title' => t('Grade'),
    '#size' => 3,
    '#maxlength' => 3,
    '#default_value' => $grade['grade'], 
  );
  $form['old_grade'] = array(  
    '#type' => 'value',
    '#default_value' => $grade['grade'], 
  );
  $form['old_gid'] = array(  
    '#type' => 'value',
    '#default_value' => $grade['id'], 
  );
    

  $form['submit'] = array('#type' => 'submit', '#value' => t('Record'));
  return $form;
}


function classy_user_grade_validate($form, &$form_state) {
  //make sure the user is actually enrolled in the class
  $query = db_select('classy_enrollment', 'e');
  $query
    ->fields('e')
    ->condition('class_id', $form_state['values']['student']['nid'],'=')
    ->condition('student_id', $form_state['values']['student']['uid'],'=');
  $enrolled = $query->execute()->fetchAssoc();
  if (!$enrolled) {
    form_set_error('', t('The student is not enrolled in this class.'));
  }
  
}

  //update the grade table
function classy_user_grade_submit($form, &$form_state) { 

  //add record to grades table  
  $table = 'classy_grades';
  $record = array(
    'id' =>  $form_state['values']['old_gid'],
    'grade' => $form_state['values']['grade'],
  );
  $success = drupal_write_record($table, $record, 'id');
 
  drupal_set_message("The student's grade has been updated.");  
  
  //add form redirect to return to class listing 
  $form_state['redirect'] = array('/admin/classy/class/' . $form_state['values']['student']['nid']);
    
}

