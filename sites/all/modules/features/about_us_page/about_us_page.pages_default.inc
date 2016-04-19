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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'privacy_policy_page';
  $page->task = 'page';
  $page->admin_title = 'Privacy Policy page';
  $page->admin_description = 'Lists down the privacy policies, terms and conditions concerned.';
  $page->path = 'privacy-policy';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_privacy_policy_page__panel_context_db73b9e9-36b0-4d05-8698-e37fb0b892ab';
  $handler->task = 'page';
  $handler->subtask = 'privacy_policy_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Privacy Policy page';
  $display->uuid = 'dff5a29d-9fad-4f39-89a7-8f4e8e0bd14f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b51f7cf-9248-401f-a38f-9a0217a620f4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Privacy Policy',
      'body' => '<p><strong>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</strong> Sed non arcu enim. Nam sed magna magna, eget tempus neque. Donec lectus enim, auctor ut dignissim sit amet, auctor aliquam tortor. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Phasellus a lectus id nibh mattis ultrices. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis suscipit eleifend mauris non condimentum. Mauris iaculis, nibh id interdum hendrerit, turpis turpis placerat dui, ac mattis augue quam eu tortor. Aenean condimentum feugiat rhoncus. Vestibulum id nulla auctor eros vehicula pellentesque.</p>
<p><strong>Proin nec nibh erat, ut interdum tortor.</strong> Aliquam lectus risus, hendrerit vitae mollis et, molestie nec turpis. Nullam gravida diam sed velit dignissim bibendum. Cras tristique mi eu tortor aliquet a blandit urna tempor. Maecenas adipiscing euismod sagittis. Suspendisse vulputate convallis tellus, sed mattis justo faucibus ac. Phasellus non diam ut nisl viverra sodales. Aenean at nunc quis tortor consequat scelerisque. In dignissim, ante vel imperdiet venenatis, felis nisi imperdiet lectus, et ultrices eros justo in lacus. Quisque et ante ac metus eleifend laoreet. Cras leo metus, pharetra et molestie quis, iaculis ut felis.</p>
<p><strong>Nullam sed viverra libero.</strong> Vestibulum imperdiet fermentum massa, a fringilla tortor varius vel. Praesent ac metus massa, ac dapibus lorem. Nunc cursus nisi eget dui suscipit aliquam viverra odio iaculis. Donec commodo erat non arcu volutpat viverra. Nulla facilisi. Nam sagittis metus sit amet quam porttitor sollicitudin. Mauris aliquam felis at enim gravida porta. Sed ultrices aliquam convallis. Sed non consequat ligula. Sed purus felis, pellentesque quis pretium ut, bibendum at est.</p>
<p><strong>Quisque lacinia iaculis fermentum.</strong> Sed sed ante mauris, at pretium mauris. Mauris leo sem, dictum eget tincidunt at, gravida vel lacus. Nam fringilla tristique lectus. Etiam aliquam odio ac arcu posuere placerat. Nunc ipsum eros, euismod vitae molestie at, euismod ut nisl. Pellentesque a convallis dui. Nunc porttitor, turpis vel faucibus sollicitudin, dui nunc placerat risus, non eleifend nulla risus at diam. Integer eget dui dui, ut porta felis. Nam nisi nisl, eleifend a pulvinar nec, pulvinar vitae lorem. In tristique egestas ligula. Mauris sed dui nec leo molestie tempor. Praesent pellentesque molestie magna, a venenatis orci viverra in. Donec eget dui sit amet tortor ornare semper non et est. Suspendisse a orci ut velit consectetur placerat. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas lacinia tincidunt leo in tincidunt.</p>
<p><strong>Fusce lacus tortor, venenatis id fringilla convallis, interdum nec elit.</strong> Sed viverra, felis in laoreet ultrices, leo ligula molestie augue, vel tincidunt turpis mi vel orci. Nunc dolor orci, ultricies sed vestibulum sed, cursus nec risus. Duis augue risus, ullamcorper vel condimentum cursus, aliquam nec risus. Nunc id mauris in massa lacinia bibendum. Mauris lacinia sagittis adipiscing. Maecenas gravida sapien at magna semper dignissim a vel erat. Phasellus nec risus vel augue bibendum bibendum. Nullam posuere libero dui, id gravida erat. Morbi est tortor, auctor a iaculis ullamcorper, gravida eget magna. Nam aliquam enim non justo volutpat eget aliquet diam iaculis. Cras dui eros, consectetur eu mattis eleifend, laoreet in turpis. Curabitur eu porta lacus.</p>
<p>Email: <a href="mailto:admin@demolink.org">admin@demolink.org</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b51f7cf-9248-401f-a38f-9a0217a620f4';
    $display->content['new-7b51f7cf-9248-401f-a38f-9a0217a620f4'] = $pane;
    $display->panels['middle'][0] = 'new-7b51f7cf-9248-401f-a38f-9a0217a620f4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7b51f7cf-9248-401f-a38f-9a0217a620f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['privacy_policy_page'] = $page;

  return $pages;

}
