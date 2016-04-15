<?php

function realestate_preprocess_page(&$variables) {
    if (isset($variables['node']->type)) {
        $nodetype = $variables['node']->type;
        $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
    }
}

// Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually. See Bartik's template.php
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }

function realestate_preprocess_views_view_unformatted(&$variables){

if ($variables['view']->name == "rental_services_block" && $variables['view']->current_display == "block") {
  $variables['classes_array'][0] .= ' alpha clear-left';
  $variables['classes_array'][3] .= ' omega';
}

if ($variables['view']->name == "rental_services_block" && $variables['view']->current_display == "block_1") {
    $variables['classes_array'][0] .= "col-1-3 first odd";
    $variables['classes_array'][1] .= "col-1-3 even";
    $variables['classes_array'][2] .= "col-1-3 last col-last odd";
  }

if ($variables['view']->name == "rental_services_block" && $variables['view']->current_display == "block_2") {
  $variables['classes_array'][0] .= ' first alpha odd';
  $variables['classes_array'][1] .= ' last omega even';
}
}

