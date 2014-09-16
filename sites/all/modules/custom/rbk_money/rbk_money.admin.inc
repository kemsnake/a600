<?php

/**
 * Settings page
 */

function rbk_money_settings() {
  $form['rbk_money_hint'] = array(
    '#markup' => t('Simple payment page: <a href="!link">!link</a>', array('!link' => "{$GLOBALS['base_url']}/rbk_money/payment")),
  );
  $form['rbk_money_response'] = array(
    '#type' => 'textfield',
    '#title' => t('Response URL'),
    '#default_value' => $GLOBALS['base_url'] . '/rbk_money/status',
    '#description' => t('For insertion into "Payment notification URL" field on !site settings page', array('!site' => l('RBK Money', 'http://www.rbkmoney.ru', array('attributes' => array('target' => '_blank'))))),
    '#required' => FALSE,
  );
  $form['rbk_money_eshopId'] = array(
    '#type' => 'textfield',
    '#title' => t('Site ID'),
    '#default_value' => variable_get('rbk_money_eshopId', ''),
    '#description' => t("Merchand ID of your site"),
    '#required' => TRUE,
  );
  $form['rbk_money_secretKey'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret key'),
    '#default_value' => variable_get('rbk_money_secretKey', ''),
    '#description' => t('Secret key, entered on !site settings page', array('!site' => l('RBK Money', 'http://www.rbkmoney.ru', array('attributes' => array('target' => '_blank'))))),
    '#required' => TRUE,
  );
  $form['rbk_money_recipientCurrency'] = array(
    '#type' => 'select',
    '#title' => t('Payments currency'),
    '#options' => array('RUR' => 'RUR', 'USD' => 'USD', 'EUR' => 'EUR', 'UAH' => 'UAH'),
    '#default_value' => variable_get('rbk_money_recipientCurrency', 'RUR'),
    '#description' => t("Please, select payments currency"),
  );
  $form['rbk_money_send_hash'] = array(
    '#type' => 'select',
    '#title' => t('Send hash with payment request'),
    '#options' => array(0 => 'off (default)', 1 => 'on'),
    '#default_value' => variable_get('rbk_money_send_hash', 0),
    '#description' => t("Send order hash in payment request. Option 'Check request form hash' must be checked on !site settings page", array('!site' => l('RBK Money', 'http://www.rbkmoney.ru', array('attributes' => array('target' => '_blank'))))),
  );
  $form['rbk_money_hash'] = array(
    '#type' => 'select',
    '#title' => t('Hash method'),
    '#options' => array('md5' => 'MD5 (default)', 'sha512' => 'SHA512'),
    '#default_value' => variable_get('rbk_money_hash', 'md5'),
    '#description' => t("Please, select hash algorithm"),
  );
  $form['rbk_money_language'] = array(
    '#type' => 'select',
    '#title' => t('Interface language'),
    '#options' => array('ru' => 'ru (default)', 'en' => 'en'),
    '#default_value' => variable_get('rbk_money_language', 'ru'),
    '#description' => t("Please, select payment page interface language"),
  );
  $form['rbk_money_log'] = array(
    '#type' => 'radios',
    '#title' => t("Save RBK Money's server responses in <a href='!dblog'>system log</a>", array('!dblog' => 'admin/reports/dblog')),
    '#options' => array(1 => t('Yes'), 0 => t('No')),
    '#default_value' => variable_get('rbk_money_log', 1),
  );
  $form['rbk_money_ip'] = array(
    '#type' => 'radios',
    '#title' => t('Process notifications only from allowed IP addresses'),
    '#options' => array(1 => t('Yes'), 0 => t('No')),
    '#default_value' => variable_get('rbk_money_ip', 0),
    '#description' => t('Allowed IP addresses: ') . implode(', ', unserialize(RBK_MONEY_IP_LIST)),
  );
  $form['#attached']['js'] = array(
    drupal_get_path('module', 'rbk_money') . '/rbk_money.js',
  );

  return system_settings_form($form);
}