<?php
/**
 * @file
 * home_page_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function home_page_panel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
