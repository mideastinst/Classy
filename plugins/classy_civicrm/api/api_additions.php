<?php 

/*
 * Add anything from main module that directly calls civi into here or move this to the module
 * dropping this in the drupal module as discrete functions means that it doesn't need to be 
 * sym linked in the civi directory - make two versions and submit api changes to civi
 */


/*
 * @todo - build template selector display for drupal side (list all available templates)
 */


/*
 * Rebuilding event get to populate default event data from a template.
 */

function civicrm_api3_api_additions_geteventtemplate() {
  //build query to grab default fields from the event
  //$query = "SELECT * FROM `civicrm_event` WHERE civicrm_event.is_template = 1 AND civicrm_event.is_active = 1";
  $query = "SELECT 
    `is_public`,
    `event_full_text`,
    `is_active`,
    `is_show_location`,
    `is_multiple_registrations`,
    `allow_same_participant_emails`,
    `intro_text`,
    `footer_text`,
    `confirm_title`,	
    `confirm_text`,	
    `confirm_footer_text`,
    `is_email_confirm`,
    `confirm_email_text`,	
    `confirm_from_name`,
    `confirm_from_email`,	
    `cc_confirm`,
    `bcc_confirm`,
    `max_participants`,
    `loc_block_id`  
    FROM `civicrm_event` WHERE civicrm_event.is_template = 1 AND civicrm_event.is_active = 1";
    
    //@todo - pull the address stuff into here and do the joins for the template too - necessary?  Template would already have the loc_block_id which is what we're trying to get to in the then anyway, right?
  $query .= " ORDER BY template_title asc";
  $events = array( );
  $dao =& CRM_Core_DAO::executeQuery( $query );
  while ( $dao->fetch( ) ) {
    $events = $dao;
  }
  $result = $events;
  return $result;
}
