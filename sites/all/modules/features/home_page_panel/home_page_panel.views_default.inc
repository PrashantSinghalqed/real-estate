<?php
/**
 * @file
 * home_page_panel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_page_panel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slideshow2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image1']['id'] = 'field_image1';
  $handler->display->display_options['fields']['field_image1']['table'] = 'field_data_field_image1';
  $handler->display->display_options['fields']['field_image1']['field'] = 'field_image1';
  $handler->display->display_options['fields']['field_image1']['label'] = '';
  $handler->display->display_options['fields']['field_image1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image1']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'miscellaneous' => 'miscellaneous',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slideshow';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image1']['id'] = 'field_image1';
  $handler->display->display_options['fields']['field_image1']['table'] = 'field_data_field_image1';
  $handler->display->display_options['fields']['field_image1']['field'] = 'field_image1';
  $handler->display->display_options['fields']['field_image1']['label'] = '';
  $handler->display->display_options['fields']['field_image1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image1']['settings'] = array(
    'image_style' => 'advantages',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="container-12">
<div class="grid-12">
<div class="inner">
[title]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'miscellaneous' => 'miscellaneous',
  );
  /* Filter criterion: Content: Tags (field_category_tags) */
  $handler->display->display_options['filters']['field_category_tags_tid']['id'] = 'field_category_tags_tid';
  $handler->display->display_options['filters']['field_category_tags_tid']['table'] = 'field_data_field_category_tags';
  $handler->display->display_options['filters']['field_category_tags_tid']['field'] = 'field_category_tags_tid';
  $handler->display->display_options['filters']['field_category_tags_tid']['value'] = array(
    0 => '36',
  );
  $handler->display->display_options['filters']['field_category_tags_tid']['expose']['operator_id'] = 'field_category_tags_tid_op';
  $handler->display->display_options['filters']['field_category_tags_tid']['expose']['label'] = 'Tags (field_category_tags)';
  $handler->display->display_options['filters']['field_category_tags_tid']['expose']['operator'] = 'field_category_tags_tid_op';
  $handler->display->display_options['filters']['field_category_tags_tid']['expose']['identifier'] = 'field_category_tags_tid';
  $handler->display->display_options['filters']['field_category_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_tags_tid']['vocabulary'] = 'category';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => '',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_testimonial_description']['id'] = 'field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['table'] = 'field_data_field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['field'] = 'field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_description']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_testimonial_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_testimonial_description']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Client Name */
  $handler->display->display_options['fields']['field_client_name']['id'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['fields']['field_client_name']['field'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['label'] = '';
  $handler->display->display_options['fields']['field_client_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );
  $export['slideshow'] = $view;

  $view = new view();
  $view->name = 'static';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'static';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 > WELCOME</h2>
<p>Vum iriure dolor in hendrerit in volestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui delenit augue duis dolore te feugait nulla facilisi. Nament claritatem insitast u elegentis in iis qui facit eorum claritatem. Investigationes demonstraverunt lectores legere me lius quod. ii legunt tas est etiam cer possim assum.</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="clearfix">
<div class="col-1-3">
<i class="fa fa fa-users"></i>
<div id="tm-counter1433742692" class="counter">
<div data-num="" data-content="7908" class="num">7908</div>
<div class="title">Happy Clients</div>
</div>
</div>
<div class="col-1-3">
<i class="fa fa fa-tags"></i>
<div id="tm-counter1433742692--2" class="counter">
<div data-num="" data-content="24" class="num">24</div>
<div class="title">Sales per month</div>
</div>
</div>
<div class="col-1-3 col-last">
<i class="fa fa fa-home"></i>
<div id="tm-counter1433742692--3" class="counter">
<div data-num="" data-content="9877" class="num">9877</div>
<div class="title">Number of homes</div>
</div>
</div>
</div>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'read more';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'gallery-menu';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'button';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['static'] = $view;

  return $export;
}
