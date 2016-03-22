<?php
/**
 * @file
 * contact_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function contact_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function contact_feature_node_info() {
  $items = array(
    'contact_info' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => t('Contact info about the organisation/individual publishing the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
