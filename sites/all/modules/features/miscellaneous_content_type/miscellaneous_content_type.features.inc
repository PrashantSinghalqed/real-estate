<?php
/**
 * @file
 * miscellaneous_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function miscellaneous_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
