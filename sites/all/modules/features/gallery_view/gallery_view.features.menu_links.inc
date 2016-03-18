<?php
/**
 * @file
 * gallery_view.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gallery_view_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_category-1:taxonomy/term/17.
  $menu_links['main-menu_category-1:taxonomy/term/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'category 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_category-1:taxonomy/term/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery3:Gallery3',
  );
  // Exported menu link: main-menu_category-2:taxonomy/term/18.
  $menu_links['main-menu_category-2:taxonomy/term/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/18',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'category 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_category-2:taxonomy/term/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery3:Gallery3',
  );
  // Exported menu link: main-menu_category-3:taxonomy/term/19.
  $menu_links['main-menu_category-3:taxonomy/term/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/19',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'category 3',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_category-3:taxonomy/term/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery3:Gallery3',
  );
  // Exported menu link: main-menu_gallery-2:Gallery2.
  $menu_links['main-menu_gallery-2:Gallery2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Gallery2',
    'router_path' => 'Gallery2',
    'link_title' => 'Gallery 2',
    'options' => array(
      'identifier' => 'main-menu_gallery-2:Gallery2',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery:gallery-menu',
  );
  // Exported menu link: main-menu_gallery3:Gallery3.
  $menu_links['main-menu_gallery3:Gallery3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Gallery3',
    'router_path' => 'Gallery3',
    'link_title' => 'Gallery3',
    'options' => array(
      'identifier' => 'main-menu_gallery3:Gallery3',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery:gallery-menu',
  );
  // Exported menu link: main-menu_gallery4:Gallery4.
  $menu_links['main-menu_gallery4:Gallery4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Gallery4',
    'router_path' => 'Gallery4',
    'link_title' => 'Gallery4',
    'options' => array(
      'identifier' => 'main-menu_gallery4:Gallery4',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_gallery:gallery-menu',
  );
  // Exported menu link: main-menu_gallery:gallery-menu.
  $menu_links['main-menu_gallery:gallery-menu'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery-menu',
    'router_path' => 'gallery-menu',
    'link_title' => 'GALLERY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_gallery:gallery-menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('GALLERY');
  t('Gallery 2');
  t('Gallery3');
  t('Gallery4');
  t('category 1');
  t('category 2');
  t('category 3');

  return $menu_links;
}
