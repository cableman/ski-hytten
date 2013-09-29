<?php
/**
 * @file
 * ski_hytten_spotboxes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ski_hytten_spotboxes_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'spotbox clearfix';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Image */
  $handler->display->display_options['fields']['field_sportbox_image']['id'] = 'field_sportbox_image';
  $handler->display->display_options['fields']['field_sportbox_image']['table'] = 'field_data_field_sportbox_image';
  $handler->display->display_options['fields']['field_sportbox_image']['field'] = 'field_sportbox_image';
  $handler->display->display_options['fields']['field_sportbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sportbox_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sportbox_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sportbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sportbox_image']['settings'] = array(
    'image_style' => 'spotbox',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sportbox_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Content */
  $handler->display->display_options['fields']['field_spotbox_conetent']['id'] = 'field_spotbox_conetent';
  $handler->display->display_options['fields']['field_spotbox_conetent']['table'] = 'field_data_field_spotbox_conetent';
  $handler->display->display_options['fields']['field_spotbox_conetent']['field'] = 'field_spotbox_conetent';
  $handler->display->display_options['fields']['field_spotbox_conetent']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_spotbox_conetent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_conetent']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_conetent']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_conetent']['field_api_classes'] = 0;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_spotbox_link']['id'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['table'] = 'field_data_field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['field'] = 'field_spotbox_link';
  $handler->display->display_options['fields']['field_spotbox_link']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbox_link']['element_class'] = 'link';
  $handler->display->display_options['fields']['field_spotbox_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_link']['field_api_classes'] = 0;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Spotbox */
  $handler = $view->new_display('block', 'Spotbox', 'block_spotbox');
  $translatables['spotbox'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Spotbox'),
  );
  $export['spotbox'] = $view;

  return $export;
}
