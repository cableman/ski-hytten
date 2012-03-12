<?php
/**
 * @file
 * ski_hytten_static_page.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ski_hytten_static_page_image_default_styles() {
  $styles = array();

  // Exported image style: content_image
  $styles['content_image'] = array(
    'name' => 'content_image',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
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
 * Implements hook_node_info().
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
