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
  $page->name = 'anonymous_blog_page';
  $page->task = 'page';
  $page->admin_title = 'Anonymous Blog Page';
  $page->admin_description = '';
  $page->path = 'blog-/Anonymous';
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
  $handler->name = 'page_anonymous_blog_page__panel_context_d5cfd512-712a-495e-955e-ccd251c3e044';
  $handler->task = 'page';
  $handler->subtask = 'anonymous_blog_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Blog Panel',
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
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '64.95537903304893',
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
        'width' => '35.04462096695107',
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
        'class' => '',
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
  $display->uuid = '16a812db-726c-4414-8229-72d5bfa1961d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $pane->panel = 'categories';
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
    $pane->uuid = '2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $display->content['new-2aa4f880-d34f-405f-8d3a-e77c98ba9082'] = $pane;
    $display->panels['categories'][0] = 'new-2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $pane = new stdClass();
    $pane->pid = 'new-7e876098-5acb-45b9-bb7e-30abe8ba42fa';
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
      'display' => 'page_2',
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
    $pane->uuid = '7e876098-5acb-45b9-bb7e-30abe8ba42fa';
    $display->content['new-7e876098-5acb-45b9-bb7e-30abe8ba42fa'] = $pane;
    $display->panels['center'][0] = 'new-7e876098-5acb-45b9-bb7e-30abe8ba42fa';
    $pane = new stdClass();
    $pane->pid = 'new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
    $display->content['new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557'] = $pane;
    $display->panels['center'][1] = 'new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
    $pane = new stdClass();
    $pane->pid = 'new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
    $pane->panel = 'poll_region';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
    $display->content['new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce'] = $pane;
    $display->panels['poll_region'][0] = 'new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['anonymous_blog_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive';
  $page->task = 'page';
  $page->admin_title = 'Archive';
  $page->admin_description = '';
  $page->path = 'archive-page';
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
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.994532252157',
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
        'width' => '30.005467747843003',
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
        'title' => 'CATEGORIES',
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
          0 => 'poll',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'poll' => array(
        'type' => 'region',
        'title' => 'POLL',
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
      'poll' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2686b067-feb4-4041-8c37-a474070b402d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cb02eec4-a785-4ed7-b141-b85bce38310d';
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
    $pane->uuid = 'cb02eec4-a785-4ed7-b141-b85bce38310d';
    $display->content['new-cb02eec4-a785-4ed7-b141-b85bce38310d'] = $pane;
    $display->panels['categories'][0] = 'new-cb02eec4-a785-4ed7-b141-b85bce38310d';
    $pane = new stdClass();
    $pane->pid = 'new-17361945-296c-4aab-931e-81080b4b896b';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
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
    $pane->uuid = '17361945-296c-4aab-931e-81080b4b896b';
    $display->content['new-17361945-296c-4aab-931e-81080b4b896b'] = $pane;
    $display->panels['center'][0] = 'new-17361945-296c-4aab-931e-81080b4b896b';
    $pane = new stdClass();
    $pane->pid = 'new-d4445f62-e9e1-4e5b-a329-0966a02db97e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4445f62-e9e1-4e5b-a329-0966a02db97e';
    $display->content['new-d4445f62-e9e1-4e5b-a329-0966a02db97e'] = $pane;
    $display->panels['center'][1] = 'new-d4445f62-e9e1-4e5b-a329-0966a02db97e';
    $pane = new stdClass();
    $pane->pid = 'new-7c426516-fb06-4789-b371-98d3c668604f';
    $pane->panel = 'poll';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c426516-fb06-4789-b371-98d3c668604f';
    $display->content['new-7c426516-fb06-4789-b371-98d3c668604f'] = $pane;
    $display->panels['poll'][0] = 'new-7c426516-fb06-4789-b371-98d3c668604f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-17361945-296c-4aab-931e-81080b4b896b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive'] = $page;

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
        'class' => '',
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
    $pane->pid = 'new-ce11bd65-c3fd-48fc-99f3-c119ebd7ab46';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce11bd65-c3fd-48fc-99f3-c119ebd7ab46';
    $display->content['new-ce11bd65-c3fd-48fc-99f3-c119ebd7ab46'] = $pane;
    $display->panels['center'][1] = 'new-ce11bd65-c3fd-48fc-99f3-c119ebd7ab46';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'poll-sidebar',
    );
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'per_user_blog';
  $page->task = 'page';
  $page->admin_title = 'Per User Blog';
  $page->admin_description = '';
  $page->path = 'blog-/%user';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: name',
      'name' => 'user_name',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_per_user_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'per_user_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Blog Panel',
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
        'width' => '64.95537903304893',
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
        'width' => '35.04462096695107',
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
        'class' => '',
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
  $display->uuid = '16a812db-726c-4414-8229-72d5bfa1961d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $pane->panel = 'categories';
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
    $pane->uuid = '2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $display->content['new-2aa4f880-d34f-405f-8d3a-e77c98ba9082'] = $pane;
    $display->panels['categories'][0] = 'new-2aa4f880-d34f-405f-8d3a-e77c98ba9082';
    $pane = new stdClass();
    $pane->pid = 'new-a5c62fd1-34c8-4be3-bf9d-915b1d19e196';
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
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 0,
      'override_title_text' => 'view',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5c62fd1-34c8-4be3-bf9d-915b1d19e196';
    $display->content['new-a5c62fd1-34c8-4be3-bf9d-915b1d19e196'] = $pane;
    $display->panels['center'][0] = 'new-a5c62fd1-34c8-4be3-bf9d-915b1d19e196';
    $pane = new stdClass();
    $pane->pid = 'new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
    $display->content['new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557'] = $pane;
    $display->panels['center'][1] = 'new-2b1fe7c5-2afb-4668-ae87-a6e0c3e2b557';
    $pane = new stdClass();
    $pane->pid = 'new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
    $pane->panel = 'poll_region';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
    $display->content['new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce'] = $pane;
    $display->panels['poll_region'][0] = 'new-2e82a7dd-5ebd-49bd-abfd-ab3e5e2a67ce';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a5c62fd1-34c8-4be3-bf9d-915b1d19e196';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['per_user_blog'] = $page;

  return $pages;

}
