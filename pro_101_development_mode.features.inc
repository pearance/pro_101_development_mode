<?php
/**
 * @file
 * pro_101_development_mode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_development_mode_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}