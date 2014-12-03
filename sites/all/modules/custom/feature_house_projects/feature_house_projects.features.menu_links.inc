<?php
/**
 * @file
 * feature_house_projects.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_house_projects_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_-:node/5
  $menu_links['menu-top-menu_-:node/5'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'О компании',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_-:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_:favorites
  $menu_links['menu-top-menu_:favorites'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'favorites',
    'router_path' => 'favorites',
    'link_title' => 'Избранное',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_:favorites',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Избранное');
  t('О компании');


  return $menu_links;
}
