<?php
/**
 * @file
 * ski_hytten_featured_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ski_hytten_featured_content_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ski_hytten_featured_content_image_default_styles() {
  $styles = array();

  // Exported image style: featured_content
  $styles['featured_content'] = array(
    'name' => 'featured_content',
    'effects' => array(
      4 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '960',
          'height' => '300',
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
function ski_hytten_featured_content_node_info() {
  $items = array(
    'featured_content' => array(
      'name' => t('Featured content'),
      'base' => 'node_content',
      'description' => t('Content that should be shown in the front page slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
