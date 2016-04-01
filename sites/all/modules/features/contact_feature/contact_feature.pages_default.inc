<?php
/**
 * @file
 * contact_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function contact_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacts_page';
  $page->task = 'page';
  $page->admin_title = 'Contacts Page';
  $page->admin_description = 'Contacts Page accessible through url - /contacts';
  $page->path = 'contacts';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contacts_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'contacts_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contacts Page Panel',
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
          1 => 1,
        ),
        'parent' => 'canvas',
        'class' => 'grid-12',
        'hide_empty' => 0,
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
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'info',
          1 => 'form',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'info' => array(
        'type' => 'region',
        'title' => 'Info',
        'width' => '30.479841892730835',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'form' => array(
        'type' => 'region',
        'title' => 'Form',
        'width' => '44.52015810726916',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'container-12',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'center' => NULL,
      'info' => NULL,
      'form' => NULL,
    ),
    'style' => 'clean_element',
  );
  $display->cache = array();
  $display->title = 'Contacts Page Panel';
  $display->uuid = 'f363ffa3-4110-4204-9748-40c547b9a84c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe30fc5b-bd3b-43c3-b6ba-80e9476725b0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'contact_page';
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
    $pane->uuid = 'fe30fc5b-bd3b-43c3-b6ba-80e9476725b0';
    $display->content['new-fe30fc5b-bd3b-43c3-b6ba-80e9476725b0'] = $pane;
    $display->panels['center'][0] = 'new-fe30fc5b-bd3b-43c3-b6ba-80e9476725b0';
    $pane = new stdClass();
    $pane->pid = 'new-40080966-aeac-4110-8dcd-7ffd2cbd910f';
    $pane->panel = 'form';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-86';
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
    $pane->uuid = '40080966-aeac-4110-8dcd-7ffd2cbd910f';
    $display->content['new-40080966-aeac-4110-8dcd-7ffd2cbd910f'] = $pane;
    $display->panels['form'][0] = 'new-40080966-aeac-4110-8dcd-7ffd2cbd910f';
    $pane = new stdClass();
    $pane->pid = 'new-ab43e7d0-1517-42c4-8062-6079a4165d48';
    $pane->panel = 'info';
    $pane->type = 'views';
    $pane->subtype = 'contact_page';
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
      'override_title' => 1,
      'override_title_text' => 'CONTACT INFO',
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
    $pane->uuid = 'ab43e7d0-1517-42c4-8062-6079a4165d48';
    $display->content['new-ab43e7d0-1517-42c4-8062-6079a4165d48'] = $pane;
    $display->panels['info'][0] = 'new-ab43e7d0-1517-42c4-8062-6079a4165d48';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacts_page'] = $page;

  return $pages;

}
