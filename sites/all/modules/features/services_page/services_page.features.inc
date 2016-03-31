<?php
/**
 * @file
 * services_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function services_page_image_default_styles() {
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

  // Exported image style: top_features_view_block_image.
  $styles['top_features_view_block_image'] = array(
    'label' => 'Top Features View Block Image',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
