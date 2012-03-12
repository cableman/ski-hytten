<?php
/**
 * @file
 * ski_hytten_featured_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ski_hytten_featured_content_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'featured_content_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'featured_content_slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['animationduration'] = '6000';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['slideshow'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['slideshowspeed'] = '7000';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['directionnav'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['controlnav'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['keyboardnav'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['pauseplay'] = 0;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['randomize'] = 0;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['animationloop'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['pauseonaction'] = 1;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['pauseonhover'] = 1;
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_featured_content']['id'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['field'] = 'field_featured_content';
  $handler->display->display_options['fields']['field_featured_content']['label'] = '';
  $handler->display->display_options['fields']['field_featured_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_content']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_content']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_content']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_content']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_content']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Front page slider */
  $handler = $view->new_display('block', 'Front page slider', 'block_1');
  $translatables['featured_content_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Front page slider'),
  );
  $export['featured_content_slider'] = $view;

  return $export;
}
