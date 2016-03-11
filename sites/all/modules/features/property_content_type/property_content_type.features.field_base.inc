<?php
/**
 * @file
 * property_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function property_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_property_image'.
  $field_bases['field_property_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_property_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_property_price'.
  $field_bases['field_property_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_property_price',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'money',
    'settings' => array(
      'max' => 99999999.99,
      'min' => -99999999.99,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'money',
  );

  // Exported field_base: 'field_property_tags'.
  $field_bases['field_property_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_property_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'property_type',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
