<?php
/**
 * @file
 * services_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function services_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services_page';
  $page->task = 'page';
  $page->admin_title = 'Services Page';
  $page->admin_description = 'Panel for rendering Services Page ';
  $page->path = 'services';
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
  $handler->name = 'page_services_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'services_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Services Page Panel',
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
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
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
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4493cb05-b0d6-4f16-80d9-97d27b245cb4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'rental_services_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
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
    $pane->uuid = '05d717ef-7f24-4c92-a2c4-3be153332353';
    $display->content['new-05d717ef-7f24-4c92-a2c4-3be153332353'] = $pane;
    $display->panels['center'][0] = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
    $pane = new stdClass();
    $pane->pid = 'new-824327ee-ceaf-4936-96c5-8e7e1f288995';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'rental_services_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '824327ee-ceaf-4936-96c5-8e7e1f288995';
    $display->content['new-824327ee-ceaf-4936-96c5-8e7e1f288995'] = $pane;
    $display->panels['center'][1] = 'new-824327ee-ceaf-4936-96c5-8e7e1f288995';
    $pane = new stdClass();
    $pane->pid = 'new-d080382c-51dc-4aed-861e-d559d8071033';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'rental_services_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd080382c-51dc-4aed-861e-d559d8071033';
    $display->content['new-d080382c-51dc-4aed-861e-d559d8071033'] = $pane;
    $display->panels['center'][2] = 'new-d080382c-51dc-4aed-861e-d559d8071033';
    $pane = new stdClass();
    $pane->pid = 'new-4c75d61b-2d1a-447b-80cb-04f0ae80ba21';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'rental_services_block';
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
      'display' => 'block_3',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4c75d61b-2d1a-447b-80cb-04f0ae80ba21';
    $display->content['new-4c75d61b-2d1a-447b-80cb-04f0ae80ba21'] = $pane;
    $display->panels['center'][3] = 'new-4c75d61b-2d1a-447b-80cb-04f0ae80ba21';
    $pane = new stdClass();
    $pane->pid = 'new-dcf31c61-4e4d-475f-9e30-0a67f0a51abb';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'rental_services_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dcf31c61-4e4d-475f-9e30-0a67f0a51abb';
    $display->content['new-dcf31c61-4e4d-475f-9e30-0a67f0a51abb'] = $pane;
    $display->panels['center'][4] = 'new-dcf31c61-4e4d-475f-9e30-0a67f0a51abb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services_page'] = $page;

  return $pages;

}
