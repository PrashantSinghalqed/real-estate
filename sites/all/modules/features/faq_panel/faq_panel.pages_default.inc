<?php
/**
 * @file
 * faq_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function faq_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = 'FAQ';
  $page->path = 'faq';
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
  $handler->name = 'page_faq__panel';
  $handler->task = 'page';
  $handler->subtask = 'faq';
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
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '29.901051329622764',
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
          0 => 'categories',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => '70.09894867037724',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'faq',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'faqs',
        ),
        'parent' => '1',
        'class' => 'faq',
        'hide_empty' => 0,
      ),
      'faqs' => array(
        'type' => 'region',
        'title' => 'FAQS',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'categories' => array(
        'type' => 'region',
        'title' => 'CATEGORIES',
        'width' => 100,
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
      'faqs' => NULL,
      'categories' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e655116-e892-4020-8884-2e06d3da95bb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2de46433-9807-433f-9055-16e32fe487b3';
    $pane->panel = 'categories';
    $pane->type = 'block';
    $pane->subtype = 'views-ccbf35b46fa93548bb04ab67bf00c13f';
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
    $pane->uuid = '2de46433-9807-433f-9055-16e32fe487b3';
    $display->content['new-2de46433-9807-433f-9055-16e32fe487b3'] = $pane;
    $display->panels['categories'][0] = 'new-2de46433-9807-433f-9055-16e32fe487b3';
    $pane = new stdClass();
    $pane->pid = 'new-8603b064-c78c-4837-b244-e23fc0dd0205';
    $pane->panel = 'categories';
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
    $pane->uuid = '8603b064-c78c-4837-b244-e23fc0dd0205';
    $display->content['new-8603b064-c78c-4837-b244-e23fc0dd0205'] = $pane;
    $display->panels['categories'][1] = 'new-8603b064-c78c-4837-b244-e23fc0dd0205';
    $pane = new stdClass();
    $pane->pid = 'new-61220900-e53e-4752-b7b5-aa45b2b1c26e';
    $pane->panel = 'faqs';
    $pane->type = 'views';
    $pane->subtype = 'faq_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '61220900-e53e-4752-b7b5-aa45b2b1c26e';
    $display->content['new-61220900-e53e-4752-b7b5-aa45b2b1c26e'] = $pane;
    $display->panels['faqs'][0] = 'new-61220900-e53e-4752-b7b5-aa45b2b1c26e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  return $pages;

}
