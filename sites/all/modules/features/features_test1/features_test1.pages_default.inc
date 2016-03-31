<?php
/**
 * @file
 * features_test1.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_test1_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery2';
  $page->task = 'page';
  $page->admin_title = 'gallery2';
  $page->admin_description = '';
  $page->path = 'Gallery2';
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
  $handler->name = 'page_gallery2__panel';
  $handler->task = 'page';
  $handler->subtask = 'gallery2';
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '15c24097-08d3-4e7a-9860-c4a2057956cd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-676aea6d-4091-4115-8f98-9e50fd11a000';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery_menu-block_2';
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
    $pane->uuid = '676aea6d-4091-4115-8f98-9e50fd11a000';
    $display->content['new-676aea6d-4091-4115-8f98-9e50fd11a000'] = $pane;
    $display->panels['center'][0] = 'new-676aea6d-4091-4115-8f98-9e50fd11a000';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-676aea6d-4091-4115-8f98-9e50fd11a000';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'test_1';
  $page->task = 'page';
  $page->admin_title = 'Test 1';
  $page->admin_description = '';
  $page->path = 'test1';
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
  $handler->name = 'page_test_1__panel';
  $handler->task = 'page';
  $handler->subtask = 'test_1';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b2ffdf7d-b08a-4b01-a56e-c28d6dabb18c';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
