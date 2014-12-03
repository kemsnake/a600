<?php
/**
 * @file
 * feature_house_projects.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_house_projects_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Верхнее меню',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Верхнее меню');


  return $menus;
}
