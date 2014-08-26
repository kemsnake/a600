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

/* Custom fieldset - without wrapper inside fieldset */
function a600_fieldset($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
  }
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= "</fieldset>\n";
  return $output;
}