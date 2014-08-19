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