<?php
/**
 * @file
 * about_us_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_us_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function about_us_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function about_us_page_image_default_styles() {
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
      4 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 570,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: isolation.
  $styles['isolation'] = array(
    'label' => 'isolation',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 325,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      14 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 700,
          'height' => 325,
        ),
        'weight' => 2,
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
      7 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 270,
          'height' => 270,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function about_us_page_node_info() {
  $items = array(
    'miscellaneous' => array(
      'name' => t('Miscellaneous'),
      'base' => 'node_content',
      'description' => t('A common content-type for services, advantages, awards, top features and more.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'our_awards' => array(
      'name' => t('Our Awards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'professionals' => array(
      'name' => t('Professionals'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
