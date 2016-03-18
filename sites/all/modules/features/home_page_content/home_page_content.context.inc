<?php
/**
 * @file
 * home_page_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page_content_block';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-static-block' => array(
          'module' => 'views',
          'delta' => 'static-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-gallery_menu-block_1' => array(
          'module' => 'views',
          'delta' => 'gallery_menu-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'slideshow-block_1',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home_page_content_block'] = $context;

  return $export;
}
