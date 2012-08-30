<?php
/**
 * @file
 * pro_101_development_mode.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_development_mode_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer string overrides.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: execute unlink files.
  $permissions['execute unlink files'] = array(
    'name' => 'execute unlink files',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'features_tools',
  );

  return $permissions;
}
