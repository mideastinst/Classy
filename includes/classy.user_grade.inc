<?php

//grade entry form
function classy_user_grade($form, &$form_state) {
  $args = explode('/',$_SERVER['REQUEST_URI']);
  dpm($args);
  //check for existing grade for the class
  
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
    '#default_value' => $args[3],
    '#disabled' => TRUE,
  );
  $form['class'] = array( 
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#size' => 30,
    '#maxlength' => 64,
    '#default_value' => $args['4'],
    '#disabled' => TRUE,
  );
  $form['grade'] = array(  
    '#type' => 'textfield',
    '#title' => t('Grade'),
    '#size' => 3,
    '#maxlength' => 3,
    '#value' => '', //get the user's grade if exists
  ); 
  
  
  $form['submit'] = array('#type' => 'submit', '#value' => t('Record'));
  return $form;
}
//need to add validate function


//add form redirect to return to class listing


function classy_user_grade_submit($form, &$form_state) { 
  //update the grade table
  
  
  //add record to grades table  
  /*  $table = 'classy_grades';
    $record = array(
      'student_id' => $uid,
      'class_id' => $form['nid']['#value'],
    );
    drupal_write_record($table, $record, );
  */
}

