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

  // Exported menu link: menu-footer-menu-1_---:node/2
  $menu_links['menu-footer-menu-1_---:node/2'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Что содержится в проекте',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-1_---:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_--:node/1
  $menu_links['menu-footer-menu-1_--:node/1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Как заказать проект',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-1_--:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_-:node/3
  $menu_links['menu-footer-menu-1_-:node/3'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Частые вопросы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-1_-:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-2_--:node/2
  $menu_links['menu-footer-menu-2_--:node/2'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Контакты и реквизиты',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-2_--:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-2_-:node/1
  $menu_links['menu-footer-menu-2_-:node/1'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'О компании',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-2_-:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_--:node/1
  $menu_links['menu-top-menu_--:node/1'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Как заказать проект',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_--:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_-:node/2
  $menu_links['menu-top-menu_-:node/2'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'О компании',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_-:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Как заказать проект');
  t('Контакты и реквизиты');
  t('О компании');
  t('Частые вопросы');
  t('Что содержится в проекте');


  return $menu_links;
}
