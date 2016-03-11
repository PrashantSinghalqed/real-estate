<?php
/**
 * @file
 * property_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function property_content_type_node_info() {
  $items = array(
    'property' => array(
      'name' => t('Property'),
      'base' => 'node_content',
      'description' => t('A real estate property.'),
      'has_title' => '1',
      'title_label' => t('Property Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
