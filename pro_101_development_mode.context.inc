<?php
/**
 * @file
 * pro_101_development_mode.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_development_mode_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'developer';
  $context->description = '';
  $context->tag = 'User Role';
  $context->conditions = array(
    'masquerade_context' => array(
      'values' => array(
        'myself' => 'myself',
      ),
      'options' => array(
        'mode' => array(
          'is_masquerading' => 'is_masquerading',
          'is_being_masqueraded' => 'is_being_masqueraded',
        ),
      ),
    ),
    'user' => array(
      'values' => array(
        'developer' => 'developer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'debug_2',
          'weight' => '0',
        ),
        'boost-status' => array(
          'module' => 'boost',
          'delta' => 'status',
          'region' => 'debug_3',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Role');
  $export['developer'] = $context;

  return $export;
}
