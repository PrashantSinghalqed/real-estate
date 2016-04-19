<?php
/**
 * @file
 * contact_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function contact_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array()',
);
  return $node_export;
}
