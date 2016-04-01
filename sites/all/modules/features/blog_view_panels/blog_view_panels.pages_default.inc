<?php
/**
 * @file
 * blog_view_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_view_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive';
  $page->task = 'page';
  $page->admin_title = 'archive';
  $page->admin_description = '';
  $page->path = 'Archives';
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
  $handler->name = 'page_archive__panel';
  $handler->task = 'page';
  $handler->subtask = 'archive';
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
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
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
          1 => 'blog_categories',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '66.44889259568158',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'blog_categories' => array(
        'type' => 'region',
        'title' => 'blog-categories',
        'width' => '33.551107404318415',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'blog_categories' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a03d2b5a-842e-4a7e-a9b3-66e812298bb2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a812a73-ab52-42a1-b6b9-08fca6c751e8';
    $pane->panel = 'blog_categories';
    $pane->type = 'views';
    $pane->subtype = 'blog_categories_block_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '9',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '9a812a73-ab52-42a1-b6b9-08fca6c751e8';
    $display->content['new-9a812a73-ab52-42a1-b6b9-08fca6c751e8'] = $pane;
    $display->panels['blog_categories'][0] = 'new-9a812a73-ab52-42a1-b6b9-08fca6c751e8';
    $pane = new stdClass();
    $pane->pid = 'new-8452b4ab-1ae3-4501-85c1-6ca6685bc8f2';
    $pane->panel = 'blog_categories';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8452b4ab-1ae3-4501-85c1-6ca6685bc8f2';
    $display->content['new-8452b4ab-1ae3-4501-85c1-6ca6685bc8f2'] = $pane;
    $display->panels['blog_categories'][1] = 'new-8452b4ab-1ae3-4501-85c1-6ca6685bc8f2';
    $pane = new stdClass();
    $pane->pid = 'new-defed535-3a9a-4f88-a54a-4fd81c6a0537';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '8',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = 'defed535-3a9a-4f88-a54a-4fd81c6a0537';
    $display->content['new-defed535-3a9a-4f88-a54a-4fd81c6a0537'] = $pane;
    $display->panels['center'][0] = 'new-defed535-3a9a-4f88-a54a-4fd81c6a0537';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-defed535-3a9a-4f88-a54a-4fd81c6a0537';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive'] = $page;

  return $pages;

}
