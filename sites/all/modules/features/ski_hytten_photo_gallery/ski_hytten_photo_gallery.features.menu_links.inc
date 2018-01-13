<?php
/**
 * @file
 * ski_hytten_photo_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ski_hytten_photo_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:fotos
  $menu_links['main-menu:fotos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fotos',
    'router_path' => 'fotos',
    'link_title' => 'Fotos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Fotos');


  return $menu_links;
}
