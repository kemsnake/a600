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

  // Exported menu: menu-footer-menu-1.
  $menus['menu-footer-menu-1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'title' => 'Нижнее меню 1',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-2.
  $menus['menu-footer-menu-2'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'title' => 'Нижнее меню 2',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Верхнее меню',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Верхнее меню');
  t('Нижнее меню 1');
  t('Нижнее меню 2');


  return $menus;
}
