<?php
/**
 * @file
 * testimonials_panel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function testimonials_panel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonials_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TESTIMONIALS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_testimonial_description']['id'] = 'field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['table'] = 'field_data_field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['field'] = 'field_testimonial_description';
  $handler->display->display_options['fields']['field_testimonial_description']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_description']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_testimonial_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_testimonial_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Client Name */
  $handler->display->display_options['fields']['field_client_name']['id'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['table'] = 'field_data_field_client_name';
  $handler->display->display_options['fields']['field_client_name']['field'] = 'field_client_name';
  $handler->display->display_options['fields']['field_client_name']['label'] = '';
  $handler->display->display_options['fields']['field_client_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_name']['element_wrapper_type'] = 'strong';
  /* Field: Content: Client Designation */
  $handler->display->display_options['fields']['field_client_designation']['id'] = 'field_client_designation';
  $handler->display->display_options['fields']['field_client_designation']['table'] = 'field_data_field_client_designation';
  $handler->display->display_options['fields']['field_client_designation']['field'] = 'field_client_designation';
  $handler->display->display_options['fields']['field_client_designation']['label'] = '';
  $handler->display->display_options['fields']['field_client_designation']['element_label_colon'] = FALSE;
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
    'testimonial' => 'testimonial',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'testimonials-view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Testimonials ';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['testimonials_view'] = $view;

  return $export;
}
