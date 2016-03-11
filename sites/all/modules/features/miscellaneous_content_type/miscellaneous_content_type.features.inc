<?php
/**
 * @file
 * miscellaneous_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function miscellaneous_content_type_node_info() {
  $items = array(
    'miscellaneous' => array(
      'name' => t('Miscellaneous'),
      'base' => 'node_content',
      'description' => t('A common content-type for services, advantages, awards, top features and more.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
