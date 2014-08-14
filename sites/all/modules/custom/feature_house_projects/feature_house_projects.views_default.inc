<?php
/**
 * @file
 * feature_house_projects.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_house_projects_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'find_project';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Поиск проектов';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Поиск проектов';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Поиск';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировка';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Цена */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_price])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Фото */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_photo']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photo']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'house_project' => 'house_project',
  );
  /* Filter criterion: Content: Категория дома (field_house_category) */
  $handler->display->display_options['filters']['field_house_category_tid']['id'] = 'field_house_category_tid';
  $handler->display->display_options['filters']['field_house_category_tid']['table'] = 'field_data_field_house_category';
  $handler->display->display_options['filters']['field_house_category_tid']['field'] = 'field_house_category_tid';
  $handler->display->display_options['filters']['field_house_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_category_tid']['expose']['operator_id'] = 'field_house_category_tid_op';
  $handler->display->display_options['filters']['field_house_category_tid']['expose']['label'] = 'Категория дома';
  $handler->display->display_options['filters']['field_house_category_tid']['expose']['operator'] = 'field_house_category_tid_op';
  $handler->display->display_options['filters']['field_house_category_tid']['expose']['identifier'] = 'field_house_category_tid';
  $handler->display->display_options['filters']['field_house_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_house_category_tid']['group_info']['label'] = 'Категория дома (field_house_category)';
  $handler->display->display_options['filters']['field_house_category_tid']['group_info']['identifier'] = 'field_house_category_tid';
  $handler->display->display_options['filters']['field_house_category_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_house_category_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_house_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_house_category_tid']['vocabulary'] = 'house_category';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_house_collection_tid']['id'] = 'field_house_collection_tid';
  $handler->display->display_options['filters']['field_house_collection_tid']['table'] = 'field_data_field_house_collection';
  $handler->display->display_options['filters']['field_house_collection_tid']['field'] = 'field_house_collection_tid';
  $handler->display->display_options['filters']['field_house_collection_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_house_collection_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_collection_tid']['expose']['operator_id'] = 'field_house_collection_tid_op';
  $handler->display->display_options['filters']['field_house_collection_tid']['expose']['label'] = 'Коллекция';
  $handler->display->display_options['filters']['field_house_collection_tid']['expose']['operator'] = 'field_house_collection_tid_op';
  $handler->display->display_options['filters']['field_house_collection_tid']['expose']['identifier'] = 'field_house_collection_tid';
  $handler->display->display_options['filters']['field_house_collection_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Материал (field_house_material) */
  $handler->display->display_options['filters']['field_house_material_tid']['id'] = 'field_house_material_tid';
  $handler->display->display_options['filters']['field_house_material_tid']['table'] = 'field_data_field_house_material';
  $handler->display->display_options['filters']['field_house_material_tid']['field'] = 'field_house_material_tid';
  $handler->display->display_options['filters']['field_house_material_tid']['value'] = '';
  $handler->display->display_options['filters']['field_house_material_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_material_tid']['expose']['operator_id'] = 'field_house_material_tid_op';
  $handler->display->display_options['filters']['field_house_material_tid']['expose']['label'] = 'Материал';
  $handler->display->display_options['filters']['field_house_material_tid']['expose']['operator'] = 'field_house_material_tid_op';
  $handler->display->display_options['filters']['field_house_material_tid']['expose']['identifier'] = 'field_house_material_tid';
  $handler->display->display_options['filters']['field_house_material_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_house_material_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_house_material_tid']['vocabulary'] = 'house_materials';
  /* Filter criterion: Content: Площадь (field_square) */
  $handler->display->display_options['filters']['field_square_value']['id'] = 'field_square_value';
  $handler->display->display_options['filters']['field_square_value']['table'] = 'field_data_field_square';
  $handler->display->display_options['filters']['field_square_value']['field'] = 'field_square_value';
  $handler->display->display_options['filters']['field_square_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_square_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_square_value']['expose']['operator_id'] = 'field_square_value_op';
  $handler->display->display_options['filters']['field_square_value']['expose']['label'] = 'Площадь';
  $handler->display->display_options['filters']['field_square_value']['expose']['operator'] = 'field_square_value_op';
  $handler->display->display_options['filters']['field_square_value']['expose']['identifier'] = 'field_square_value';
  $handler->display->display_options['filters']['field_square_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_house_style_tid']['id'] = 'field_house_style_tid';
  $handler->display->display_options['filters']['field_house_style_tid']['table'] = 'field_data_field_house_style';
  $handler->display->display_options['filters']['field_house_style_tid']['field'] = 'field_house_style_tid';
  $handler->display->display_options['filters']['field_house_style_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_house_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_style_tid']['expose']['operator_id'] = 'field_house_style_tid_op';
  $handler->display->display_options['filters']['field_house_style_tid']['expose']['label'] = 'Стиль';
  $handler->display->display_options['filters']['field_house_style_tid']['expose']['operator'] = 'field_house_style_tid_op';
  $handler->display->display_options['filters']['field_house_style_tid']['expose']['identifier'] = 'field_house_style_tid';
  $handler->display->display_options['filters']['field_house_style_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Цена (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator_id'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = 'Цена';
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Этажность (field_house_floors) */
  $handler->display->display_options['filters']['field_house_floors_tid']['id'] = 'field_house_floors_tid';
  $handler->display->display_options['filters']['field_house_floors_tid']['table'] = 'field_data_field_house_floors';
  $handler->display->display_options['filters']['field_house_floors_tid']['field'] = 'field_house_floors_tid';
  $handler->display->display_options['filters']['field_house_floors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_floors_tid']['expose']['operator_id'] = 'field_house_floors_tid_op';
  $handler->display->display_options['filters']['field_house_floors_tid']['expose']['label'] = 'Этажность';
  $handler->display->display_options['filters']['field_house_floors_tid']['expose']['operator'] = 'field_house_floors_tid_op';
  $handler->display->display_options['filters']['field_house_floors_tid']['expose']['identifier'] = 'field_house_floors_tid';
  $handler->display->display_options['filters']['field_house_floors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_house_floors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_house_floors_tid']['vocabulary'] = 'house_floors';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'find-project';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Поиск проектов';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['find_project'] = array(
    t('Master'),
    t('Поиск проектов'),
    t('more'),
    t('Поиск'),
    t('Reset'),
    t('Сортировка'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[title] ([field_price])'),
    t('Категория дома'),
    t('Категория дома (field_house_category)'),
    t('Коллекция'),
    t('Материал'),
    t('Площадь'),
    t('Стиль'),
    t('Цена'),
    t('Этажность'),
    t('Page'),
  );
  $export['find_project'] = $view;

  return $export;
}
