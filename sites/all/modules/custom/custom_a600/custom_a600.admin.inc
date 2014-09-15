<?php


function custom_a600_project_settings($form, &$form_state) {

  $form['custom_a600_square_options'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_square_options', ''),
    '#title' => 'Опции для площади домов',
  );
  $form['custom_a600_count_bedroom_options'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_count_bedroom_options', ''),
    '#title' => 'Опции для кол-ва спален',
  );
  $form['custom_a600_site_phone'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_site_phone', ''),
    '#title' => 'Телефон отображаемый вверху сайта',
  );
  $form['custom_a600_item_price'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_item_price', 500),
    '#title' => 'Цена каждого дополнительного экземпляра документации',
  );

  $form['standard_price'] = array(
    '#type' => 'fieldset',
    '#title' => 'Параметры стандартной цены',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['standard_price']['custom_a600_standard_price_description'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_standard_price_description', ''),
    '#title' => 'Описание стандартного пакета документов',
  );
  $form['standard_price']['custom_a600_standard_price_options'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_standard_price_options', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Состав пакета',
  );
  $form['standard_price']['custom_a600_standard_price_additional'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_standard_price_additional', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Дополнительный состав пакета',
  );

  $form['full_price'] = array(
    '#type' => 'fieldset',
    '#title' => 'Параметры полной цены',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['full_price']['custom_a600_full_price_enabled'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('custom_a600_full_price_enabled', FALSE),
    '#title' => 'Включено',
  );
  $form['full_price']['custom_a600_full_price_description'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_full_price_description', ''),
    '#title' => 'Описание полного пакета документов',
  );
  $form['full_price']['custom_a600_full_price_options'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_full_price_options', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Состав пакета',
  );
  $form['full_price']['custom_a600_full_price_additional'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_full_price_additional', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Дополнительный состав пакета',
  );

  $form['extended_price'] = array(
    '#type' => 'fieldset',
    '#title' => 'Параметры расширенной цены',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['extended_price']['custom_a600_extended_price_enabled'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('custom_a600_extended_price_enabled', FALSE),
    '#title' => 'Включено',
  );
  $form['extended_price']['custom_a600_extended_price_description'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_extended_price_description', ''),
    '#title' => 'Описание расширенного пакета документов',
  );
  $form['extended_price']['custom_a600_extended_price_options'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_extended_price_options', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Состав пакета',
  );
  $form['extended_price']['custom_a600_extended_price_additional'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('custom_a600_extended_price_additional', ''),
    '#description' => 'Введите несколько значений разделенных запятыи',
    '#title' => 'Дополнительный состав пакета',
  );

  return system_settings_form($form);
}

/*
 * Payments page
 */

function custom_a600_payments($form, $form_state) {
  if (!empty($_POST['payments']) && isset($_POST['operation']) && ($_POST['operation'] == 'delete')) {
    return drupal_get_form('custom_a600_multiple_delete');
  }

  $header = array(
    'pid' => array('data' => 'ID', 'field' => 'r.pid', 'sort' => 'desc'),
    'nid' => array('data' => 'Project', 'field' => 'r.nid'),
    'price' => array('data' => t('Price'), 'field' => 'r.price'),
    'count' => array('data' => t('Count'), 'field' => 'r.count'),
    'amount' => array('data' => t('Amount'), 'field' => 'r.amount'),
    'created' => array('data' => t('Created'), 'field' => 'r.created'),
    'changed' => array('data' => t('Changed'), 'field' => 'r.changed'),
    'status' => array('data' => t('Status'), 'field' => 'r.status'),
  );

  $result = db_select('rbk_money_simple', 'r')
    ->extend('PagerDefault')
    ->extend('TableSort')
    ->fields('r', array('pid', 'nid', 'price', 'count', 'amount', 'created', 'changed', 'status'))
    ->orderByHeader($header)
    ->limit(50)
    ->execute();

  $payments = array();
  foreach ($result as $payment) {
    $node = node_load($payment->nid);
    $payments[$payment->pid] = array(
      'pid' => "<label for=\"edit-payments-{$payment->pid}\">{$payment->pid}</label>",
      'nid' => l($node->title, 'node/' . $payment->nid),
      'created' => date("d.m.Y H:i", $payment->created),
      'changed' => date("d.m.Y H:i", $payment->changed),
      'price' => $payment->price . ' ' . variable_get('rbk_money_simple_recipientCurrency', 'RUR'),
      'count' => $payment->count,
      'amount' => $payment->amount . ' ' . variable_get('rbk_money_simple_recipientCurrency', 'RUR'),
      'status' => (($payment->status > 0) ? ($payment->status == RBK_MONEY_SIMPLE_STATUS_PROCESS ? t('Processing') : t('Successful')) : t('Pending'))
    );
  }

  $form['payments'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $payments,
    '#empty' => t('No payments available.'),
  );
  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update options'),
    '#attributes' => array('class' => array('container-inline')),
    '#weight' => -1
  );
  $form['options']['operation'] = array(
    '#type' => 'select',
    '#title' => t('Operation'),
    '#title_display' => 'invisible',
    '#options' => array(
      'delete' => t('Delete selected'),
      'enroll' => t('Enroll selected')
    ),
    '#default_value' => 'delete',
  );
  $form['options']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Apply'),
  );
  $form['pager'] = array('#markup' => theme('pager'));

  return $form;
}

function custom_a600_payments_validate($form, &$form_state) {
  if (empty($form_state['input']['payments']) || count(array_filter($form_state['input']['payments'])) == 0)  {
    form_set_error('', t('No payments selected.'));
  }
}

function custom_a600_payments_submit($form, &$form_state) {
  $payments = array_filter($form_state['input']['payments']); // array_filter returns only elements with TRUE values
  if($form_state['input']['operation'] == 'enroll'){
    foreach ($payments as $pid) {
      rbk_money_simple_payment_enroll($pid, RBK_MONEY_SIMPLE_STATUS_SUCCESS);
    }
    $msg = format_plural(count($payments),
      t('The payment have been enrolled'),
      t('The payments have been enrolled'));
    drupal_set_message($msg);
  }
}


function custom_a600_multiple_delete($form, &$form_state) {
  $form['payments'] = array('#tree' => TRUE);
  $payments = array_filter($form_state['input']['payments']);
  foreach ($payments as $pid => $value) {
    $form['payments'][$pid] = array('#type' => 'hidden', '#value' => $pid);
  }
  $form['operation'] = array('#type' => 'hidden', '#value' => 'delete');

  $question = format_plural(count($payments),
    'Are you sure you want to delete this item?',
    'Are you sure you want to delete these items?');

  return confirm_form($form, $question, 'admin/config/a600/payments');

}

function custom_a600_multiple_delete_submit($form, &$form_state) {
  if ($form_state['values']['confirm']) {
    $payments = $form_state['values']['payments'];
    foreach ($payments as $payment => $pid) {
      rbk_money_simple_payment_delete($pid);
    }
    $msg = format_plural(count($payments), t('Deleted 1 payment.'), t('Deleted @count payments'));
    drupal_set_message($msg);
  }
  $form_state['redirect'] = 'admin/config/a600/payments';
}