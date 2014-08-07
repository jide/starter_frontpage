<?php
/**
 * @file
 * starter_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function starter_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'starter';
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
        'views-frontpage_carousel-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_carousel-block',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('starter');
  $export['frontpage'] = $context;

  return $export;
}
