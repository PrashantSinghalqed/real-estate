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
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'blog';
  $page->admin_description = '';
  $page->path = 'blog-';
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
  $handler->name = 'page_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'blog';
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
        'width' => '69.70422914981438',
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
        'width' => '30.295770850185626',
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
      'categories' => array(
        'type' => 'region',
        'title' => 'categories',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'poll_region',
        ),
        'parent' => '1',
        'class' => 'poll',
        'hide_empty' => 0,
      ),
      'poll_region' => array(
        'type' => 'region',
        'title' => 'poll-region',
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
      'default' => NULL,
      'center' => NULL,
      'categories' => NULL,
      'poll_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a712dcb1-f197-467f-ad27-1d2ac45a918e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e3d7070c-e0d7-4bd4-81d7-10419604570f';
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
    $pane->uuid = 'e3d7070c-e0d7-4bd4-81d7-10419604570f';
    $display->content['new-e3d7070c-e0d7-4bd4-81d7-10419604570f'] = $pane;
    $display->panels['categories'][0] = 'new-e3d7070c-e0d7-4bd4-81d7-10419604570f';
    $pane = new stdClass();
    $pane->pid = 'new-0df93192-acde-4670-819c-dc0739cbc33e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'blog';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blog-node',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0df93192-acde-4670-819c-dc0739cbc33e';
    $display->content['new-0df93192-acde-4670-819c-dc0739cbc33e'] = $pane;
    $display->panels['center'][0] = 'new-0df93192-acde-4670-819c-dc0739cbc33e';
    $pane = new stdClass();
    $pane->pid = 'new-c2460336-4f1c-4e02-a17d-c5aa7051ec9e';
    $pane->panel = 'poll_region';
    $pane->type = 'block';
    $pane->subtype = 'poll-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'POLL',
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
    $pane->uuid = 'c2460336-4f1c-4e02-a17d-c5aa7051ec9e';
    $display->content['new-c2460336-4f1c-4e02-a17d-c5aa7051ec9e'] = $pane;
    $display->panels['poll_region'][0] = 'new-c2460336-4f1c-4e02-a17d-c5aa7051ec9e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
