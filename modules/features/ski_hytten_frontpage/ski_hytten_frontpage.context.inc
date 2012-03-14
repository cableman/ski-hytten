<?php
/**
 * @file
 * ski_hytten_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ski_hytten_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'configuration';
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
        'views-featured_content_slider-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_content_slider-block_1',
          'region' => 'preface_first',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('configuration');
  $export['frontpage'] = $context;

  return $export;
}