<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * a600 theme.
 */

function a600_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}

function a600_page_alter(&$page) {
  drupal_set_breadcrumb(array());
}

/*
 * Меняем JS модуля на свой. Нам нужна не цискличная карусель,
 * а просто пэйджер из картинок(со скрываемыми кнопками).
 */
function a600_js_alter(&$js) {
  if (isset($js[drupal_get_path('module', 'galleryformatter') . '/theme/infiniteCarousel.js'])) {
    unset($js[drupal_get_path('module', 'galleryformatter') . '/theme/infiniteCarousel.js']);
    drupal_add_js(drupal_get_path('theme', 'a600') . '/js/gallery_pager.js');
  }
}