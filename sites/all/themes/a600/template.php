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

function a600_favorites($favorites) {
  $output = '';
  $destination = drupal_get_destination();
  $destination = explode('=', $destination['destination'], 2);
  foreach ($favorites['favorites'] as $favorite) {
    $link = l(
        $favorite->title,
        $favorite->path,
        array('query' => unserialize($favorite->query))
      ) . ' ' . l(
        'x',
        'favorites/remove/' . $favorite->fid,
        array(
          'query' => array(
            'token' => $favorite->token,
            'destination' => $destination[0],
          ),
          'attributes' => array(
            'class' => array('favorites-remove'),
            'title' => t('delete this item'),
          ),
        )
      );
    $path = explode('/', $favorite->path);
    $node = node_load($path[1]);
    $node->delete_favorite_link = $link;
    $node = node_view($node, 'order');
    $output .= drupal_render($node);
  }
  return $output;
}