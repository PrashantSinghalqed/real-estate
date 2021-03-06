<?php
/**
 * @file
 * services_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function services_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_services:services.
  $menu_links['main-menu_services:services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Services Overview',
      ),
      'identifier' => 'main-menu_services:services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Services');

  return $menu_links;
}
