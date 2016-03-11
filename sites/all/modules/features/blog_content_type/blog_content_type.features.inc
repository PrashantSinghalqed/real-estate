<?php
/**
 * @file
 * blog_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_content_type_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
