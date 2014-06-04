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
    'house_category' => array(
      'name' => 'Категория дома',
      'machine_name' => 'house_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'house_collections' => array(
      'name' => 'Коллекции',
      'machine_name' => 'house_collections',
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
    'house_styles' => array(
      'name' => 'Стили домов',
      'machine_name' => 'house_styles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
