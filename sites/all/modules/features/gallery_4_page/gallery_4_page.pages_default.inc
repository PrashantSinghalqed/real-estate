<?php
/**
 * @file
 * gallery_4_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gallery_4_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery4';
  $page->task = 'page';
  $page->admin_title = 'gallery4';
  $page->admin_description = '';
  $page->path = 'gallery4';
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
  $handler->name = 'page_gallery4__panel_context_5a6b5b77-fec5-42b5-9053-e55a8bb9ca4c';
  $handler->task = 'page';
  $handler->subtask = 'gallery4';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Gallery 4',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
    $pane->pid = 'new-34ceb3c3-30b8-423d-b7da-adee15d7bc0e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'gallery_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
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
    $pane->uuid = '34ceb3c3-30b8-423d-b7da-adee15d7bc0e';
    $display->content['new-34ceb3c3-30b8-423d-b7da-adee15d7bc0e'] = $pane;
    $display->panels['center'][0] = 'new-34ceb3c3-30b8-423d-b7da-adee15d7bc0e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gallery4'] = $page;

  return $pages;

}
