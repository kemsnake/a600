<?php
/**
 * @file
 * feature_house_projects.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_house_projects_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_count_bedroom_options';
  $strongarm->value = '1,2,3,4,5,6';
  $export['custom_a600_count_bedroom_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_extended_price_additional';
  $strongarm->value = 'Исполнительные схемы, Смета, Доработки';
  $export['custom_a600_extended_price_additional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_extended_price_description';
  $strongarm->value = 'Более 7 дней на разработку';
  $export['custom_a600_extended_price_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_extended_price_options';
  $strongarm->value = 'Основные документы, Юридические документы';
  $export['custom_a600_extended_price_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_full_price_additional';
  $strongarm->value = 'Исполнительные схемы, Смета';
  $export['custom_a600_full_price_additional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_full_price_description';
  $strongarm->value = 'Достаточный для начала самостоятельного строительтсва <br><br> 7 дней на подготовку проекта';
  $export['custom_a600_full_price_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_full_price_options';
  $strongarm->value = 'Основные документы, Юридические документы';
  $export['custom_a600_full_price_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_site_phone';
  $strongarm->value = '+7 495 585-89-08';
  $export['custom_a600_site_phone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_square_options';
  $strongarm->value = '0-100,100-200,200-300,300-500,500-900';
  $export['custom_a600_square_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_standard_price_additional';
  $strongarm->value = '';
  $export['custom_a600_standard_price_additional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_standard_price_description';
  $strongarm->value = 'Достаточный для обращения в строительную компанию <br><br> 2 дня на подготовку проекта';
  $export['custom_a600_standard_price_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_a600_standard_price_options';
  $strongarm->value = 'Основные документы, Юридические документы';
  $export['custom_a600_standard_price_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__house_project';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'order' => array(
        'custom_settings' => TRUE,
      ),
      'search_result_special_offer' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_house_project';
  $strongarm->value = '0';
  $export['language_content_type_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_house_project';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_house_project';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_house_project';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_house_project';
  $strongarm->value = '0';
  $export['node_preview_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_house_project';
  $strongarm->value = 0;
  $export['node_submitted_house_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_eshopId';
  $strongarm->value = '2029741';
  $export['rbk_money_eshopId'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_hash';
  $strongarm->value = 'md5';
  $export['rbk_money_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_ip';
  $strongarm->value = '0';
  $export['rbk_money_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_language';
  $strongarm->value = 'ru';
  $export['rbk_money_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_log';
  $strongarm->value = '1';
  $export['rbk_money_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_recipientCurrency';
  $strongarm->value = 'RUR';
  $export['rbk_money_recipientCurrency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_secretKey';
  $strongarm->value = 'Asdsee12';
  $export['rbk_money_secretKey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rbk_money_send_hash';
  $strongarm->value = '0';
  $export['rbk_money_send_hash'] = $strongarm;

  return $export;
}
