<?php
/**
 * @file
 * feature_house_projects.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_house_projects_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Мы принимаем';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'accepted_payments';
  $fe_block_boxes->body = '<p><img alt="" src="/sites/all/themes/a600/images/payments.png" title="Мы принимаем" /></p>
';

  $export['accepted_payments'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Частые вопросы';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'faq_block';
  $fe_block_boxes->body = '<div class="question first">
	<div class="title">
		Это пример вопроса от посетителя за номером 1</div>
	<div class="text">
		Пример ответа на вопрос, но может быть длиннее</div>
<div class="faq-more-text">
		<a href="/faq">подробнее</a></div>
</div>
<div class="question second">
	<div class="title">
		Это пример вопроса от посетителя за номером 2</div>
	<div class="text">
		Пример ответа на вопрос, но может быть длиннее</div>
<div class="faq-more-text">
		<a href="/faq">подробнее</a></div>
</div>
<div class="question third">
	<div class="title">
		Это пример вопроса от посетителя за номером 3</div>
	<div class="text">
		Пример ответа на вопрос, но может быть длиннее</div>
<div class="faq-more-text">
		<a href="/faq">подробнее</a></div>
</div>
<div class="all-question-link">
	<a href="/faq">Все вопросы &gt;</a></div>
';

  $export['faq_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Блок на главной 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'frontpage_block1';
  $fe_block_boxes->body = '<div class="title">
	Никакой переплаты</div>
<div class="text">
	Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>
';

  $export['frontpage_block1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Блок на главной 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'frontpage_block2';
  $fe_block_boxes->body = '<div class="title">
	Внести изменения</div>
<div class="text">
	Вы можете вносить изменения в любой выбранный проект. Наши архитекторы готовы это сделать быстро и качественно.</div>
';

  $export['frontpage_block2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Блок на главной 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'frontpage_block3';
  $fe_block_boxes->body = '<div class="title">
	Оригинальные решения</div>
<div class="text">
	Каждый проект будет сделан по индивидуальному заказу, точно по вашим требованиям и с учетом всех ваших пожеланий.</div>
';

  $export['frontpage_block3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Логотип';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'logo_info';
  $fe_block_boxes->body = '<a class="site-logo" href="/" rel="home" title="Главная"><img alt="Главная" src="/sites/all/themes/a600/logo.png" /></a>
';

  $export['logo_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_1';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 10';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_10';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_10'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_2';
  $fe_block_boxes->body = '<div class="title">
	Внести изменения</div>
<div class="text">
	Вы можете вносить изменения в любой выбранный проект. Наши архитекторы готовы это сделать быстро и качественно.</div>
';

  $export['search_text_block_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_3';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 4';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_4';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 5';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_5';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_5'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 6';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_6';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_6'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 7';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_7';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_7'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 8';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_8';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_8'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search text block 9';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_text_block_9';
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

  $export['search_text_block_9'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Соц сети';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_links';
  $fe_block_boxes->body = '<div class="social">
	<a href="vk.com">&nbsp;</a> <a href="facebook.com">&nbsp;</a> <a href="twitter.com">&nbsp;</a> <a href="google.com" class="last">&nbsp;</a></div>
<div class="copyright">
	Copyright 2014<br />
	Все права защищены</div>
';

  $export['social_links'] = $fe_block_boxes;

  return $export;
}
