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
  $fe_block_boxes->body = '<div class="title">Никакой переплаты</div>
<div class="text">Это не проекты, адаптированные под минимальную стоимость. Это проекты готовых для жизни домов, не требующие переплаты.</div>';

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

  return $export;
}
