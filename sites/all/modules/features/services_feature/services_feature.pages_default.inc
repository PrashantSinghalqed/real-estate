<?php
/**
 * @file
 * services_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function services_feature_default_page_manager_pages() {
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
      'center' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'main-wrapper services-page-content',
          'additional_region_attributes' => 'role="main" id="services-page"',
          'enable_inner_div' => 0,
          'pane_separators' => 1,
        ),
      ),
    ),
    'center' => array(
      'style' => 'clean_element',
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
      'style' => 'clean_element',
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
    );
    $pane->css = array(
      'css_id' => 'rental-services-block',
      'css_class' => 'container-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '05d717ef-7f24-4c92-a2c4-3be153332353';
    $display->content['new-05d717ef-7f24-4c92-a2c4-3be153332353'] = $pane;
    $display->panels['center'][0] = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
    $pane = new stdClass();
    $pane->pid = 'new-277f34db-9b5a-4b2e-93a5-e523fbfd508b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '277f34db-9b5a-4b2e-93a5-e523fbfd508b';
    $display->content['new-277f34db-9b5a-4b2e-93a5-e523fbfd508b'] = $pane;
    $display->panels['center'][1] = 'new-277f34db-9b5a-4b2e-93a5-e523fbfd508b';
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
      'style' => 'clean_element',
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'clearfix',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 1,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
    );
    $pane->css = array(
      'css_id' => 'new-services-block',
      'css_class' => 'container-12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '824327ee-ceaf-4936-96c5-8e7e1f288995';
    $display->content['new-824327ee-ceaf-4936-96c5-8e7e1f288995'] = $pane;
    $display->panels['center'][2] = 'new-824327ee-ceaf-4936-96c5-8e7e1f288995';
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'top-features-block',
      'css_class' => 'container-12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd080382c-51dc-4aed-861e-d559d8071033';
    $display->content['new-d080382c-51dc-4aed-861e-d559d8071033'] = $pane;
    $display->panels['center'][3] = 'new-d080382c-51dc-4aed-861e-d559d8071033';
    $pane = new stdClass();
    $pane->pid = 'new-d5af5785-86d5-4ed5-b3be-7a6e9f79aab4';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'APPRAISAL SERVICES',
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
    $pane->uuid = 'd5af5785-86d5-4ed5-b3be-7a6e9f79aab4';
    $display->content['new-d5af5785-86d5-4ed5-b3be-7a6e9f79aab4'] = $pane;
    $display->panels['center'][4] = 'new-d5af5785-86d5-4ed5-b3be-7a6e9f79aab4';
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
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'block-views-block-four-block block block-views border-one-wrap block-even',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array(
      'css_id' => 'special-offer-block',
      'css_class' => 'container-12',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'dcf31c61-4e4d-475f-9e30-0a67f0a51abb';
    $display->content['new-dcf31c61-4e4d-475f-9e30-0a67f0a51abb'] = $pane;
    $display->panels['center'][5] = 'new-dcf31c61-4e4d-475f-9e30-0a67f0a51abb';
    $pane = new stdClass();
    $pane->pid = 'new-e28fe6d3-fb37-4126-9110-4998bc231d78';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'olark_livechat';
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
    $pane->uuid = 'e28fe6d3-fb37-4126-9110-4998bc231d78';
    $display->content['new-e28fe6d3-fb37-4126-9110-4998bc231d78'] = $pane;
    $display->panels['center'][6] = 'new-e28fe6d3-fb37-4126-9110-4998bc231d78';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services_page'] = $page;

  return $pages;

}
