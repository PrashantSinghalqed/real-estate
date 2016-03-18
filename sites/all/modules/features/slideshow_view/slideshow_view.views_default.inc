<?php
/**
 * @file
 * slideshow_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slideshow_view_views_default_views() {
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
    'image_style' => 'slideshow',
    'image_link' => '',
  );
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

  return $export;
}
