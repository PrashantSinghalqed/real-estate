<?php
/**
 * @file
 * menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:about-us.
  $menu_links['main-menu_about-us:about-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About us',
    'options' => array(
      'identifier' => 'main-menu_about-us:about-us',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_archive:archive.
  $menu_links['main-menu_archive:archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'archive',
    'router_path' => 'archive',
    'link_title' => 'Archive',
    'options' => array(
      'identifier' => 'main-menu_archive:archive',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
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
  // Exported menu link: main-menu_faq-:faq-view.
  $menu_links['main-menu_faq-:faq-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-view',
    'router_path' => 'faq-view',
    'link_title' => 'FAQ ',
    'options' => array(
      'identifier' => 'main-menu_faq-:faq-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
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
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_testimonials-:testimonials-view.
  $menu_links['main-menu_testimonials-:testimonials-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'testimonials-view',
    'router_path' => 'testimonials-view',
    'link_title' => 'Testimonials ',
    'options' => array(
      'identifier' => 'main-menu_testimonials-:testimonials-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Archive');
  t('Blog');
  t('FAQ ');
  t('GALLERY');
  t('Gallery 2');
  t('Gallery3');
  t('Gallery4');
  t('Home');
  t('Testimonials ');
  t('category 1');
  t('category 2');
  t('category 3');

  return $menu_links;
}
