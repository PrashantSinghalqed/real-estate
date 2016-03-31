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

/**
 * Implements hook_image_default_styles().
 */
function node_pages_image_default_styles() {
  $styles = array();

  // Exported image style: node_view_mode_image.
  $styles['node_view_mode_image'] = array(
    'label' => 'Node View Mode Image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
