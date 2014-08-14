<?php
/**
 * @file
 * feature_house_projects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_house_projects_taxonomy_default_vocabularies() {
  return array(
    'garage' => array(
      'name' => 'Гараж',
      'machine_name' => 'garage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'house_category' => array(
      'name' => 'Категория дома',
      'machine_name' => 'house_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'house_floors' => array(
      'name' => 'Этажность',
      'machine_name' => 'house_floors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'house_materials' => array(
      'name' => 'Материалы',
      'machine_name' => 'house_materials',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
