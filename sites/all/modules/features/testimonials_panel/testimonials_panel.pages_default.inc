<?php
/**
 * @file
 * testimonials_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function testimonials_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'testimonials';
  $page->task = 'page';
  $page->admin_title = 'Testimonials';
  $page->admin_description = '';
  $page->path = 'testimonials';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_testimonials__panel';
  $handler->task = 'page';
  $handler->subtask = 'testimonials';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '71.21038265616579',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '28.78961734383421',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'categories',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'poll',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'categories' => array(
        'type' => 'region',
        'title' => 'CATEGORIES',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'poll' => array(
        'type' => 'region',
        'title' => 'POLL',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'pole' => NULL,
      'default' => NULL,
      'center' => NULL,
      'categories' => NULL,
      'poll' => NULL,
    ),
    'pole' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9a30734-ece0-4227-b14a-b14cc1935d54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6685c34f-466c-472d-987c-7fa8ca3bdc6d';
    $pane->panel = 'categories';
    $pane->type = 'views';
    $pane->subtype = 'blog_categories_block_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6685c34f-466c-472d-987c-7fa8ca3bdc6d';
    $display->content['new-6685c34f-466c-472d-987c-7fa8ca3bdc6d'] = $pane;
    $display->panels['categories'][0] = 'new-6685c34f-466c-472d-987c-7fa8ca3bdc6d';
    $pane = new stdClass();
    $pane->pid = 'new-87d06358-8e97-436d-a8b7-8b5ab97a3ed7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'testimonials_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87d06358-8e97-436d-a8b7-8b5ab97a3ed7';
    $display->content['new-87d06358-8e97-436d-a8b7-8b5ab97a3ed7'] = $pane;
    $display->panels['center'][0] = 'new-87d06358-8e97-436d-a8b7-8b5ab97a3ed7';
    $pane = new stdClass();
    $pane->pid = 'new-c14d5073-f107-49ee-9f0e-85d762908d0e';
    $pane->panel = 'poll';
    $pane->type = 'block';
    $pane->subtype = 'poll-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c14d5073-f107-49ee-9f0e-85d762908d0e';
    $display->content['new-c14d5073-f107-49ee-9f0e-85d762908d0e'] = $pane;
    $display->panels['poll'][0] = 'new-c14d5073-f107-49ee-9f0e-85d762908d0e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87d06358-8e97-436d-a8b7-8b5ab97a3ed7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['testimonials'] = $page;

  return $pages;

}
