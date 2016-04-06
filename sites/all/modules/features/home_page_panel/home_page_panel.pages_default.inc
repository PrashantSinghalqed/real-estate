<?php
/**
 * @file
 * home_page_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page_panel';
  $page->task = 'page';
  $page->admin_title = 'home page panel';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_page_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page_panel';
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
  $display->uuid = '61e24e18-9649-43a6-9a41-ad98e540067c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-64807e18-078b-4d99-b9ad-4e9d8ee53919';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
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
    $pane->uuid = '64807e18-078b-4d99-b9ad-4e9d8ee53919';
    $display->content['new-64807e18-078b-4d99-b9ad-4e9d8ee53919'] = $pane;
    $display->panels['center'][0] = 'new-64807e18-078b-4d99-b9ad-4e9d8ee53919';
    $pane = new stdClass();
    $pane->pid = 'new-c696b8ec-ee4f-4cb5-b6cf-bd46a0e1e9f8';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'static';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c696b8ec-ee4f-4cb5-b6cf-bd46a0e1e9f8';
    $display->content['new-c696b8ec-ee4f-4cb5-b6cf-bd46a0e1e9f8'] = $pane;
    $display->panels['center'][1] = 'new-c696b8ec-ee4f-4cb5-b6cf-bd46a0e1e9f8';
    $pane = new stdClass();
    $pane->pid = 'new-86ca3a60-e4b6-47e6-8651-cd32efa68c73';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '86ca3a60-e4b6-47e6-8651-cd32efa68c73';
    $display->content['new-86ca3a60-e4b6-47e6-8651-cd32efa68c73'] = $pane;
    $display->panels['center'][2] = 'new-86ca3a60-e4b6-47e6-8651-cd32efa68c73';
    $pane = new stdClass();
    $pane->pid = 'new-7d7f874c-ac77-454f-8d77-1ac07e3637bf';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7d7f874c-ac77-454f-8d77-1ac07e3637bf';
    $display->content['new-7d7f874c-ac77-454f-8d77-1ac07e3637bf'] = $pane;
    $display->panels['center'][3] = 'new-7d7f874c-ac77-454f-8d77-1ac07e3637bf';
    $pane = new stdClass();
    $pane->pid = 'new-ffca4a1f-94d6-4013-9f98-a49352fc3e7b';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'poll_block';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ffca4a1f-94d6-4013-9f98-a49352fc3e7b';
    $display->content['new-ffca4a1f-94d6-4013-9f98-a49352fc3e7b'] = $pane;
    $display->panels['center'][4] = 'new-ffca4a1f-94d6-4013-9f98-a49352fc3e7b';
    $pane = new stdClass();
    $pane->pid = 'new-e10b1b8c-e9fe-4d26-a818-b3df1af20f00';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'about_us';
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
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'News',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e10b1b8c-e9fe-4d26-a818-b3df1af20f00';
    $display->content['new-e10b1b8c-e9fe-4d26-a818-b3df1af20f00'] = $pane;
    $display->panels['center'][5] = 'new-e10b1b8c-e9fe-4d26-a818-b3df1af20f00';
    $pane = new stdClass();
    $pane->pid = 'new-fe6ec75c-c768-42fc-b21b-73428072cca8';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-205';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'fe6ec75c-c768-42fc-b21b-73428072cca8';
    $display->content['new-fe6ec75c-c768-42fc-b21b-73428072cca8'] = $pane;
    $display->panels['center'][6] = 'new-fe6ec75c-c768-42fc-b21b-73428072cca8';
    $pane = new stdClass();
    $pane->pid = 'new-e315f6e4-603c-4dd4-b639-2d00887a644c';
    $pane->panel = 'center';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e315f6e4-603c-4dd4-b639-2d00887a644c';
    $display->content['new-e315f6e4-603c-4dd4-b639-2d00887a644c'] = $pane;
    $display->panels['center'][7] = 'new-e315f6e4-603c-4dd4-b639-2d00887a644c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-64807e18-078b-4d99-b9ad-4e9d8ee53919';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page_panel'] = $page;

  return $pages;

}
