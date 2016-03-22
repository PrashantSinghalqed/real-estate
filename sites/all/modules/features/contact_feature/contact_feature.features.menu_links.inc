<?php
/**
 * @file
 * contact_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contacts:contacts.
  $menu_links['main-menu_contacts:contacts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contacts',
    'router_path' => 'contacts',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Info',
      ),
      'identifier' => 'main-menu_contacts:contacts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');

  return $menu_links;
}
