<?php
/**
 * @file
 * gallery_view.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gallery_view_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery';
  $page->task = 'page';
  $page->admin_title = 'Gallery';
  $page->admin_description = 'Gallery main page';
  $page->path = 'gallery-menu';
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
  $handler->name = 'page_gallery__panel';
  $handler->task = 'page';
  $handler->subtask = 'gallery';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Gallery',
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
  $display->uuid = 'eb1416ff-f920-4786-b519-7baf8a6d4d98';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-75097930-e7bb-4d80-9bf1-9cff74779fcb';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery_menu-block_5';
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
    $pane->uuid = '75097930-e7bb-4d80-9bf1-9cff74779fcb';
    $display->content['new-75097930-e7bb-4d80-9bf1-9cff74779fcb'] = $pane;
    $display->panels['center'][0] = 'new-75097930-e7bb-4d80-9bf1-9cff74779fcb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

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
  $page->name = 'gallery4';
  $page->task = 'page';
  $page->admin_title = 'gallery4';
  $page->admin_description = '';
  $page->path = 'Gallery4';
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
  $handler->name = 'page_gallery4__panel';
  $handler->task = 'page';
  $handler->subtask = 'gallery4';
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
  $display->uuid = '554bb503-4406-445c-be26-d7571ca418b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3fa28fb7-948a-4c76-a9d5-62899b261c98';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery_menu-block_4';
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
    $pane->uuid = '3fa28fb7-948a-4c76-a9d5-62899b261c98';
    $display->content['new-3fa28fb7-948a-4c76-a9d5-62899b261c98'] = $pane;
    $display->panels['center'][0] = 'new-3fa28fb7-948a-4c76-a9d5-62899b261c98';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3fa28fb7-948a-4c76-a9d5-62899b261c98';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery_3';
  $page->task = 'page';
  $page->admin_title = 'Gallery 3';
  $page->admin_description = '';
  $page->path = 'Gallery3';
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
  $handler->name = 'page_gallery_3__panel';
  $handler->task = 'page';
  $handler->subtask = 'gallery_3';
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
  $display->uuid = '6678566e-9e1e-41e7-aecf-ca8742448319';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-205a159c-070d-4a8b-bdc9-bca508b14695';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery_menu-block_3';
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
    $pane->uuid = '205a159c-070d-4a8b-bdc9-bca508b14695';
    $display->content['new-205a159c-070d-4a8b-bdc9-bca508b14695'] = $pane;
    $display->panels['center'][0] = 'new-205a159c-070d-4a8b-bdc9-bca508b14695';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-205a159c-070d-4a8b-bdc9-bca508b14695';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
