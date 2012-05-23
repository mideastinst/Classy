<?php
 
/**
 * @file
 * Views integration for the classy module
 */
 
/**
 * Implements hook_views_data()
 *
 */
 

function classy_views_data() {
 
  $table = array(
    'classy_grades' => array(  // Class instance table
      'table' => array(
        'group' => 'Classy',      
        'base' => array(
          'field' => 'id',  //Primary key
          'title' => 'Student Grade Table',
          'help' => 'Provides lists of student grades by class'
        ),
        /*'join' => array(
          'node' => array(
            'left_field' => 'nid',
            'field' => 'class_id',
          ),
        ),*/
        
      ),
        
      //Description of id
      'id' => array(
        'title' => t('Record ID'),
        'help' => t('Unique identifier for grade record'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        //Filter handler for filtering records by cid
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),  
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),
      //Description of class field
      'class_id' => array(
        'title' => t('Class Reference'),
        'help' => t('Class node reference'),
        'relationship' => array(
          'base' => 'node', 
          'field' => 'class_id', 
          'handler' => 'views_handler_relationship', 
          'label' => t('Class node'),
        ),
      ),
      //Description of student reference field
      'student_id' => array(
        'title' => t('Student Reference'),
        'help' => t('Student user reference'),
        'relationship' => array(
          'base' => 'users', 
          'field' => 'student_id', 
          'handler' => 'views_handler_relationship', 
          'label' => t('User'),
        ),
      ),
      'grade' => array(
        'title' => t('Grade'),
        'help' => t('Student Grade'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),

        'sort' => array(
          'handler' => 'views_handler_sort'
        ),
      ),
    ),
  );
  return $table;
}


