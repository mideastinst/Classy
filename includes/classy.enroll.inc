<?php

//basic enrollment form
function classy_enroll($form_state) {
  global $user;
  $options = array('1' => t('Enabled'), '0' => t('Disabled'));
  $form['enroll'] = array(
    '#type' => 'fieldset',
    '#title' => t('Registration Information'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['enroll']['user'] = array(
    '#type' => 'textfield',
    '#title' => t('User Name'),
    '#size' => 30,
    '#maxlength' => 64,
    '#default_value' => $user->name,
    '#disabled' => TRUE,
  );
  $form['enroll']['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#size' => 30,
    '#maxlength' => 64,
    '#default_value' => $user->mail,
    '#disabled' => TRUE,
  );  
  $form['uid'] = array(  //didn't work
    '#type' => 'value',
    '#value' => $user->uid,
  );  //use hidden values for everything?
  $form['nid'] = array( 
    '#type' => 'value',
    '#value' => arg(1),
  );  //use hidden values for everything?
  
  $form['submit'] = array('#type' => 'submit', '#value' => t('Enroll'));
  return $form;
}
