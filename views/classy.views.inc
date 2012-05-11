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
   /* 'classy_class_inst' => array(  // Class instance table
       'table' => array(
          'group' => 'Classy',      // Groupname Mydons
             'base' => array(
               'field' => 'cid',  //Primary key
               'title' => 'Class Instance Table',
               'help' => 'Display information about specific classes'
            )
        ),
     //Description of cid
        'cid' => array(
           'title' => t('Class ID'),
           'help' => t('Unique ID for Class instances'),
           // is mydons_custom_id field sortable TRUE
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
      //Description of classy field
        'course_id' => array(
           'title' => t('Course Reference'),
           'help' => t('Course node reference'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_numeric'
           ),
 
           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
        
      ),  */
    
    'classy_grade' => array(  // Class instance table
       'table' => array(
          'group' => 'Classy',      // Groupname Mydons
             'base' => array(
               'field' => 'id',  //Primary key
               'title' => 'Student Grade Table',
               'help' => 'Provides lists of student grades by class'
            )
        ),
     //Description of id
        'id' => array(
           'title' => t('Grade ID'),
           'help' => t('Unique identifier for grade record'),
           // is mydons_custom_id field sortable TRUE
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
      //Description of classy field
        'class_id' => array(
           'title' => t('Class Reference'),
           'help' => t('Class node reference'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_numeric'
           ),
           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
        //Description of classy field
        'student_id' => array(
           'title' => t('Student Reference'),
           'help' => t('Student user reference'),
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