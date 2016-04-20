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
      'default' => array(),
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
    'style' => 'clean_element',
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
    $pane->pid = 'new-348c0b74-c2a8-46db-93d8-4a842eda9511';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'superior_service_custom_pane',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '348c0b74-c2a8-46db-93d8-4a842eda9511';
    $display->content['new-348c0b74-c2a8-46db-93d8-4a842eda9511'] = $pane;
    $display->panels['center'][1] = 'new-348c0b74-c2a8-46db-93d8-4a842eda9511';
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
    $pane->pid = 'new-d3bf879d-e5ab-4b1e-a9da-9d73be0d941f';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Appraisal Services Pane',
      'title' => '',
      'body' => '<div id="parallax_five_wrapper" class="parallax_five_wrapper img-bg parallax-box image-parallax-box">
<div class="container-12"><div class="grid-12">  <div class="region region-parallax-five">
    
<div id="block-block-14" class="block-block-14 block block-block block-odd">
	<!-- Block title -->
			<h2 class="title block-title">APPRAISAL SERVICES</h2>
	
	<!-- Block content -->
	<div class="content block-content">
		<div class="clearfix">
<div class="col-1-2">
<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Lorem ipsum dolor sit amet conse ctetur adipisi elit, sed do eiusmod tempor incididunt  labore et dolore</p>
<p>Ut enim ad minim veniam, quis nostrud exercitation ullamco. Lorem ipsum dolor sit amet, consectetuer adipiscing elit.</p>
</div>
<div class="col-1-4">
<ul class="list-1"><li><a href="#">Lorem ipsum dolor</a></li>
<li><a href="#">Consectetuer adipiscing</a></li>
<li><a href="#">Praesent vestibulum </a></li>
<li><a href="#">Aenean nonummy</a></li>
<li><a href="#">Phasellus porta us</a></li>
<li><a href="#">Cum sociis natoque</a></li>
</ul></div>
<div class="col-1-4 col-last">
<ul class="list-1"><li><a href="#">Lorem ipsum dolor</a></li>
<li><a href="#">Consectetuer adipi</a></li>
<li><a href="#">Praesent vestibulum</a></li>
<li><a href="#">Aenean nonummy</a></li>
<li><a href="#">Phasellus porta us</a></li>
<li><a href="#">Cum sociis natoq</a></li>
</ul></div>
</div>
	</div>
</div>  </div>
</div></div>
<div class="parallax-bg parallax-img-2" data-type="background" data-speed="2">
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd3bf879d-e5ab-4b1e-a9da-9d73be0d941f';
    $display->content['new-d3bf879d-e5ab-4b1e-a9da-9d73be0d941f'] = $pane;
    $display->panels['center'][4] = 'new-d3bf879d-e5ab-4b1e-a9da-9d73be0d941f';
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
    $pane->pid = 'new-c25b6771-89d4-49f9-932d-ee470e705dea';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c25b6771-89d4-49f9-932d-ee470e705dea';
    $display->content['new-c25b6771-89d4-49f9-932d-ee470e705dea'] = $pane;
    $display->panels['center'][6] = 'new-c25b6771-89d4-49f9-932d-ee470e705dea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-05d717ef-7f24-4c92-a2c4-3be153332353';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services_page'] = $page;

  return $pages;

}
