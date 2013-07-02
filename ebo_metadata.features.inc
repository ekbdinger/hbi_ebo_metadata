<?php
/**
 * @file
 * ebo_metadata.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ebo_metadata_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ebo_metadata_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ebo_metadata_node_info() {
  $items = array(
    'ebo_metadata' => array(
      'name' => t('Metadata'),
      'base' => 'node_content',
      'description' => t('Metadata elements from eBO'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
