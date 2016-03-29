<?php
/**
 * @file
 * about_us_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_us_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function about_us_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function about_us_view_image_default_styles() {
  $styles = array();

  // Exported image style: advantages.
  $styles['advantages'] = array(
    'label' => 'advantages',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 570,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: isolation.
  $styles['isolation'] = array(
    'label' => 'isolation',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 325,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: prof-pic.
  $styles['prof-pic'] = array(
    'label' => 'Prof-pic',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => 270,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
