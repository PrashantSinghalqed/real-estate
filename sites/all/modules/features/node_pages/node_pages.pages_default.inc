<?php
/**
 * @file
 * node_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function node_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c0d07deb-1ffe-445d-a974-017a7117dea1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node Page Panel',
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
          0 => 'sidebar_',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'sidebar_' => array(
        'type' => 'region',
        'title' => 'Node View',
        'width' => '64.97113997113998',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '35.02886002886003',
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
      'sidebar_' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '55fd509b-3c33-4bf9-afd0-021f07d83866';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6fc066a8-5dc7-4235-a474-1caa6adccf8d';
    $pane->panel = 'sidebar';
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
    $pane->uuid = '6fc066a8-5dc7-4235-a474-1caa6adccf8d';
    $display->content['new-6fc066a8-5dc7-4235-a474-1caa6adccf8d'] = $pane;
    $display->panels['sidebar'][0] = 'new-6fc066a8-5dc7-4235-a474-1caa6adccf8d';
    $pane = new stdClass();
    $pane->pid = 'new-366eead7-e215-452b-8151-23d4d3e75ce0';
    $pane->panel = 'sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'poll-sidebar',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '366eead7-e215-452b-8151-23d4d3e75ce0';
    $display->content['new-366eead7-e215-452b-8151-23d4d3e75ce0'] = $pane;
    $display->panels['sidebar'][1] = 'new-366eead7-e215-452b-8151-23d4d3e75ce0';
    $pane = new stdClass();
    $pane->pid = 'new-bb7d6c0b-4bd9-4e5c-b1b2-0b46bca43fb2';
    $pane->panel = 'sidebar_';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '%1',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'bb7d6c0b-4bd9-4e5c-b1b2-0b46bca43fb2';
    $display->content['new-bb7d6c0b-4bd9-4e5c-b1b2-0b46bca43fb2'] = $pane;
    $display->panels['sidebar_'][0] = 'new-bb7d6c0b-4bd9-4e5c-b1b2-0b46bca43fb2';
    $pane = new stdClass();
    $pane->pid = 'new-0432a0a9-db01-4e25-a1fe-95567e68701e';
    $pane->panel = 'sidebar_';
    $pane->type = 'custom';
    $pane->subtype = 'olark_livechat_custom_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0432a0a9-db01-4e25-a1fe-95567e68701e';
    $display->content['new-0432a0a9-db01-4e25-a1fe-95567e68701e'] = $pane;
    $display->panels['sidebar_'][1] = 'new-0432a0a9-db01-4e25-a1fe-95567e68701e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-bb7d6c0b-4bd9-4e5c-b1b2-0b46bca43fb2';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c0d07deb-1ffe-445d-a974-017a7117dea1'] = $handler;

  return $export;
}
