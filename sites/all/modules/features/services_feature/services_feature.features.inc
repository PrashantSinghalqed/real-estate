<?php
/**
 * @file
 * services_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function services_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function services_feature_image_default_styles() {
  $styles = array();

  // Exported image style: rental_services_block_images.
  $styles['rental_services_block_images'] = array(
    'label' => 'Rental Services Block Images',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => 215,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
