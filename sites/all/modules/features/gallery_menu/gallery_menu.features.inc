<?php
/**
 * @file
 * gallery_menu.features.inc
 */

/**
 * Implements hook_views_api().
 */
function gallery_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gallery_menu_image_default_styles() {
  $styles = array();

  // Exported image style: 2_column.
  $styles['2_column'] = array(
    'label' => '2 column gallery',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      7 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 500,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 3_column_gallery.
  $styles['3_column_gallery'] = array(
    'label' => '3 column gallery',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 4_column_gallery.
  $styles['4_column_gallery'] = array(
    'label' => '4 column gallery',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
