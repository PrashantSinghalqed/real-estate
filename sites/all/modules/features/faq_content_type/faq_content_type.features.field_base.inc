<?php
/**
 * @file
 * faq_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function faq_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_answer'.
  $field_bases['field_answer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_answer',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
