RBK Money simple payment

Review
------

Payment module wich provides payments through RBK Money payment system without
dependence from e-shop module. Features:

- creating payments via embedded page rbk_money/payment or programmatically
- payment form output via embedded page rbk_money/payment/PID or programmatically
- payments administration page admin/config/rbk_money/payments
- processing responses from RBK Money and enroll payments
- possibility of sending order's hash with payment form
- templates for success and fail pages
- module settings page admin/config/rbk_money/settings


Installation
------------

- copy module dir in sites/all/modules and enable module at admin/build/modules,
  Payments section
- set permissions for mudule at admin/people/permissions


Configuration
-------------

- go to settings page admin/config/rbk_money/settings
- copy url from "Response URL" field and paste it in "Payment
notification" field at the RBK Money merchant settings page
- enter site ID (from RBK Money merchant settings page)
- Enter the secret key. It must be exactly the same as
you specified it at RBK Money merchant settings page


Payment creating
----------------

There are two ways to create payment:
- via page rbk_money/payment

- via function rbk_money_payment_save($params), where $params - array
with payment details, for example:

	$params['amount'] = 10; // payment amount
	$params['recipientCurrency'] = 'USD'; // payment currency
	$params['description'] = 'Service description'; // description
	$params['uid'] = 12; // user ID
	$params['user_email'] = user@example.com // user email
	$params['preference'] = 'banckard'; // preferred payment method

and other paremeters, available in RBK Money API.
Function return the ID of created payment.


The payment form
----------------

You can use the embedded payment form on the page
rbk_money/payment/PID, where PID - payment ID.

Or output it programmatically:
print render(drupal_get_form('rbk_money_form_render', $payment, $silent));

where $payment - payment ID, or array with payment details;
$silent - the flag, indicated wether or not to show payment details (default
 - false)


Getting payment details programmatically
----------------------------------------

You can get payment details via call rbk_money_payment_load($pid),
where $pid - payment ID.

For example result of operation:

$payment = rbk_money_payment_load($pid);

will be array with payment details:

    $payment['pid'] => 123;
    $payment['amount'] => 100;
    $payment['description'] => test payment;
    $payment['status'] => 5;
    // payment status. (0 - pending, 3 - processing, 5 - successfull)
    $payment['advanced']['language'] => en;
    $payment['advanced']['user_email'] => user@example.com;

Array $payment['advanced'] contains advanced payment parameters, if it was
used at creation payment process.


Enroll payment programmatically
-------------------------------

rbk_money_payment_enroll($pid);
where $pid - payment ID.


Delete payment programmatically
-------------------------------

rbk_money_payment_delete($pid);
where $pid - payment ID.