<?php

function realestate_preprocess_page(&$variables) {
    if (isset($variables['node']->type)) {
        $nodetype = $variables['node']->type;
        $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
    }
}

function realestate_preprocess_views_view_unformatted(&$vars){
  // $vars['classes_array'][0] .= ' alpha clear-left';
  // $vars['classes_array'][3] .= ' omega';

if ($vars['view']->name == "rental_services_block" && $vars['view']->current_display == "block") {
  $vars['classes_array'][0] .= ' alpha clear-left';
  $vars['classes_array'][3] .= ' omega';
}

if ($vars['view']->name == "rental_services_block" && $vars['view']->current_display == "block_1") {
    $vars['classes_array'][0] .= "col-1-3 first odd";
    $vars['classes_array'][1] .= "col-1-3 even";
    $vars['classes_array'][2] .= "col-1-3 last col-last odd";
    // dsm($vars);
    // $r = $vars['view']->row_index;
    // for ($i=0; $i < r.length; $i++) {
    //   $vars['classes_array'][$i] .= "col-".$i;
    // }
  }

if ($vars['view']->name == "rental_services_block" && $vars['view']->current_display == "block_2") {
  $vars['classes_array'][0] .= ' first alpha odd';
  $vars['classes_array'][1] .= ' last omega even';
}
}

/**
 * Implementation of hook_theme().
 */
// function realestate_theme() {
//   return array(
//     'views_view_unformatted__rental_services_block__block_1' => array (
//       'classes_array' => array(),
//     ),
//   );
// }

// function realestate_preprocess_views_view_unformatted(&$variables){
//   dsm($variables);
//   $variables['classes_array'][0] .= ' col-1-3 first odd';
// }

// function realestate_preprocess_panels_pane(&$variables) {
//   // dsm($variables);
// }

// function realestate_preprocess_clean_markup_panels_clean_element(&$variables) {
//   // dsm($variables);
// }


/**
 *
 */
// function mytheme_preprocess_views_view__page_1(&$variables) {
//   dpm('This should be working');
// }
