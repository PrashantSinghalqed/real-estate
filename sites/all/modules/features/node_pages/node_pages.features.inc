<?php
/**
 * @file
 * node_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
