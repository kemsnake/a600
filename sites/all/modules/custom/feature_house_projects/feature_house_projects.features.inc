<?php
/**
 * @file
 * feature_house_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_house_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_house_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_house_projects_node_info() {
  $items = array(
    'house_project' => array(
      'name' => t('Проект дома'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
  );
  return $items;
}
