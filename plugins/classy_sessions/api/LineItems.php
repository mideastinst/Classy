<?php 

/*
 * Add anything from main module that directly calls civi into here or move this to the module
 * dropping this in the drupal module as discrete functions means that it doesn't need to be 
 * sym linked in the civi directory - make two versions and submit api changes to civi
 * 
 * Add this function to your custom php directory
 */



/*
 * API additions for Line Items
 */

function civicrm_api3_line_items_get( $params ) {
  //build query to grab fields for contribution line items
  $query = "SELECT 
    `id`,
    `entity_table`,
    `entity_id`,
    `price_field_id`,
    `label`,
    `qty`,
    `unit_price`,
    `line_total`,
    `participant_count`,	
    `price_field_value_id`
    FROM `civicrm_line_item` WHERE `entity_id`=". $params['entity_id'];
    
  //$query .= " ORDER BY template_title asc";
  $line_items = array( );
  $dao =& CRM_Core_DAO::executeQuery( $query );
  while ( $dao->fetch( ) ) {
    $line_items = $dao;
  }
  $result = $line_items;
  return $result;
}