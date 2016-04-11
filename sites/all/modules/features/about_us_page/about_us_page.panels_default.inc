<?php
/**
 * @file
 * about_us_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function about_us_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'end_note';
  $mini->category = '';
  $mini->admin_title = 'End Note';
  $mini->admin_description = 'Copyright info, privacy policy, etc.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3d1b5a1-f44a-452e-8afd-be03b9e7f019';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b23a5b10-fe26-4f13-853a-341d78f27057';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'End Note',
      'title' => '<none>',
      'body' => '<div id="block-block-5" class="block-block-5 block block-block block-copyright block-odd">
	<div class="content block-content">
		<div>Copyright © 2016 | <a href="/privacy-policy">Privacy Policy</a></div>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b23a5b10-fe26-4f13-853a-341d78f27057';
    $display->content['new-b23a5b10-fe26-4f13-853a-341d78f27057'] = $pane;
    $display->panels['middle'][0] = 'new-b23a5b10-fe26-4f13-853a-341d78f27057';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['end_note'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'static_block_aboutus_page';
  $mini->category = '';
  $mini->admin_title = 'static-block-aboutus-page';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '8db44691-2c8a-4e03-9b9b-ad7174e53e94';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a99c5032-50c2-40f5-bba5-78ee66809266';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a99c5032-50c2-40f5-bba5-78ee66809266';
    $display->content['new-a99c5032-50c2-40f5-bba5-78ee66809266'] = $pane;
    $display->panels['center'][0] = 'new-a99c5032-50c2-40f5-bba5-78ee66809266';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['static_block_aboutus_page'] = $mini;

  return $export;
}
