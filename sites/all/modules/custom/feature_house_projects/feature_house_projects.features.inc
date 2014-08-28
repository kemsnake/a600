<?php
/**
 * @file
 * feature_house_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_house_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_house_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_house_projects_image_default_styles() {
  $styles = array();

  // Exported image style: house_project_full.
  $styles['house_project_full'] = array(
    'name' => 'house_project_full',
    'label' => 'house_project_full',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 770,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      8 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 770,
          'height' => 450,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
      9 => array(
        'label' => 'Overlay (watermark)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'effect callback' => 'canvasactions_file2canvas_effect',
        'dimensions passthrough' => TRUE,
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 20,
          'path' => 'sites/all/themes/a600/images/watermark.png',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: house_project_thumb.
  $styles['house_project_thumb'] = array(
    'name' => 'house_project_thumb',
    'label' => 'house_project_thumb',
    'effects' => array(
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      16 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 130,
          'height' => 100,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: house_project_variant.
  $styles['house_project_variant'] = array(
    'name' => 'house_project_variant',
    'label' => 'house_project_variant',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: search_result_small.
  $styles['search_result_small'] = array(
    'name' => 'search_result_small',
    'label' => 'search_result_small',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 210,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      6 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 280,
          'height' => 210,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: search_result_spec_offer.
  $styles['search_result_spec_offer'] = array(
    'name' => 'search_result_spec_offer',
    'label' => 'search_result_spec_offer',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 580,
          'height' => 370,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_house_projects_node_info() {
  $items = array(
    'house_project' => array(
      'name' => t('Проект дома'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
