<?php
/**
 * @file
 * about_us_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function about_us_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About-Us';
  $page->admin_description = '';
  $page->path = 'About-us_panel';
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
  $handler->name = 'page_about_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
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
  $display->uuid = '0ae31df7-c589-4955-a316-5afd063afadd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9227d19-d7ac-4c2a-90ca-ecdde3db006f';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'about_us';
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
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => 'Get To Know Us',
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
    $pane->uuid = 'b9227d19-d7ac-4c2a-90ca-ecdde3db006f';
    $display->content['new-b9227d19-d7ac-4c2a-90ca-ecdde3db006f'] = $pane;
    $display->panels['center'][0] = 'new-b9227d19-d7ac-4c2a-90ca-ecdde3db006f';
    $pane = new stdClass();
    $pane->pid = 'new-976f13b3-7a1b-40cc-b386-2df85edda0d8';
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
    $pane->uuid = '976f13b3-7a1b-40cc-b386-2df85edda0d8';
    $display->content['new-976f13b3-7a1b-40cc-b386-2df85edda0d8'] = $pane;
    $display->panels['center'][1] = 'new-976f13b3-7a1b-40cc-b386-2df85edda0d8';
    $pane = new stdClass();
    $pane->pid = 'new-670342de-9232-4219-9691-3aa50142e94f';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'static_block_aboutus_page';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '670342de-9232-4219-9691-3aa50142e94f';
    $display->content['new-670342de-9232-4219-9691-3aa50142e94f'] = $pane;
    $display->panels['center'][2] = 'new-670342de-9232-4219-9691-3aa50142e94f';
    $pane = new stdClass();
    $pane->pid = 'new-cfbf35a6-97b9-47aa-9458-8982f70bcda6';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'about_us';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cfbf35a6-97b9-47aa-9458-8982f70bcda6';
    $display->content['new-cfbf35a6-97b9-47aa-9458-8982f70bcda6'] = $pane;
    $display->panels['center'][3] = 'new-cfbf35a6-97b9-47aa-9458-8982f70bcda6';
    $pane = new stdClass();
    $pane->pid = 'new-40d65af7-3251-496d-9cc9-95dc26fb30cd';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'about_us';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '40d65af7-3251-496d-9cc9-95dc26fb30cd';
    $display->content['new-40d65af7-3251-496d-9cc9-95dc26fb30cd'] = $pane;
    $display->panels['center'][4] = 'new-40d65af7-3251-496d-9cc9-95dc26fb30cd';
    $pane = new stdClass();
    $pane->pid = 'new-fc5b9672-3b0a-4008-a94b-f245608717c5';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'fc5b9672-3b0a-4008-a94b-f245608717c5';
    $display->content['new-fc5b9672-3b0a-4008-a94b-f245608717c5'] = $pane;
    $display->panels['center'][5] = 'new-fc5b9672-3b0a-4008-a94b-f245608717c5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  return $pages;

}
