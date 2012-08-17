<?php

//basic enrollment form
function classy_enroll_user($form, &$form_state) {
  $options = array('1' => t('Enabled'), '0' => t('Disabled'));
  $form['enroll_user'] = array(
    '#type' => 'fieldset',
    '#title' => t('Registration Information'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['enroll_user']['user'] = array(
    '#type' => 'textfield',
    '#title' => t('UID'),
    '#size' => 15,
    '#maxlength' => 6,
    '#required' => TRUE,
  );
  $form['enroll_user']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#size' => 15,
    '#maxlength' => 6,
    '#required' => TRUE,
  );
  
  $form['state'] = array(  
    '#type' => 'radios',
    '#title' => t('Action'),
    '#options' => array(
      t('Enroll'),
      t('Remove'),
    ),
    '#required' => TRUE,
  ); 
  
  /*$form['enroll_user']['user'] = array(
    '#type' => 'entityreference_autocomplete',
    '#title' => t('User Name'),
    '#settings' => array(
      'target_type' => 'user',
    ),
    '#size' => 30,
  );
  $form['enroll_user']['class'] = array(
    '#type' => 'entityreference',
    '#title' => t('Class'),
    '#settings' => array(
      '#target_type' => 'node',
      '#target_bundles' => array('class'),
    ),
    '#size' => 30,
  */
    
  
  $form['submit'] = array('#type' => 'submit', '#value' => t('Submit'));
  return $form;
}

