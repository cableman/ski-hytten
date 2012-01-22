<?php
/**
 * @file
 * ski_hytten_static_page.features.inc
 */

/**
 * Implementation of hook_image_default_styles().
 */
function ski_hytten_static_page_image_default_styles() {
  $styles = array();

  // Exported image style: content_image
  $styles['content_image'] = array(
    'name' => 'content_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '350',
          'height' => '350',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function ski_hytten_static_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Statisk side'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
