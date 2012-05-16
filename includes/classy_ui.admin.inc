<?php

/**
 * @file
 * Administrative callbacks for the Classy module.
 */


/**
 * Builds the settings form.
 */
function classy_student_settings_form($form, &$form_state) {
  $form['classy_student_settings'] = array(
    '#type' => 'text_textfield',
    '#title' => t('Number'),
    '#description' => t('A numeric field'),
    //'#default_value' => commerce_default_currency(),
  );

  // Place the enabled currencies checkboxes in a fieldset so the full list
  // doesn't spam the administrator when viewing the page.
 /* $form['enabled_currencies'] = array(
    '#type' => 'fieldset',
    '#title' => t('Enabled currencies'),
    '#description' => t('Only enabled currencies will be visible to users when entering prices. The default currency will always be enabled.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );*/

  $form['#validate'][] = 'classy_student_settings_form_validate';

  return system_settings_form($form);
}

/**
 * Form validate handler for the currency settings form.
 */
function classy_student_settings_form_validate($form, &$form_state) {
  // Ensure the default currency is always enabled.
  //$default = $form_state['values']['commerce_default_currency'];
  //$form_state['values']['commerce_enabled_currencies'][$default] = $default;
}
