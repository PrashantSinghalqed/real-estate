<?php
/**
 * @file
 * our_awards_and_professionals.features.inc
 */

/**
 * Implements hook_node_info().
 */
function our_awards_and_professionals_node_info() {
  $items = array(
    'our_awards' => array(
      'name' => t('Our Awards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'professionals' => array(
      'name' => t('Professionals'),
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
