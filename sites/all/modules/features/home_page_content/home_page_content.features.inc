<?php
/**
 * @file
 * home_page_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
