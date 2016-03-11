<?php
/**
 * @file
 * testimonial_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function testimonial_content_type_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Clients\' Testimonial about their experience'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
