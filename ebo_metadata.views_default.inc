<?php
/**
 * @file
 * ebo_metadata.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ebo_metadata_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ebp_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eBO Metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'eBO Metadata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'guid' => 'guid',
    'title' => 'title',
    'field_int_area' => 'field_int_area',
    'field_area' => 'field_area',
    'field_query_subject' => 'field_query_subject',
    'field_meta_type' => 'field_meta_type',
    'field_meta_description' => 'field_meta_description',
    'field_meta_pulls_from' => 'field_meta_pulls_from',
  );
  $handler->display->display_options['style_options']['default'] = 'guid';
  $handler->display->display_options['style_options']['info'] = array(
    'guid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_int_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_query_subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta_pulls_from' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'GUID';
  /* Field: Content: Area (int) */
  $handler->display->display_options['fields']['field_int_area']['id'] = 'field_int_area';
  $handler->display->display_options['fields']['field_int_area']['table'] = 'field_data_field_int_area';
  $handler->display->display_options['fields']['field_int_area']['field'] = 'field_int_area';
  $handler->display->display_options['fields']['field_int_area']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: qs */
  $handler->display->display_options['fields']['field_meta_query_subject']['id'] = 'field_meta_query_subject';
  $handler->display->display_options['fields']['field_meta_query_subject']['table'] = 'field_data_field_meta_query_subject';
  $handler->display->display_options['fields']['field_meta_query_subject']['field'] = 'field_meta_query_subject';
  $handler->display->display_options['fields']['field_meta_query_subject']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Item */
  $handler->display->display_options['fields']['field_meta_item']['id'] = 'field_meta_item';
  $handler->display->display_options['fields']['field_meta_item']['table'] = 'field_data_field_meta_item';
  $handler->display->display_options['fields']['field_meta_item']['field'] = 'field_meta_item';
  /* Field: Content: seq */
  $handler->display->display_options['fields']['field_meta_seq']['id'] = 'field_meta_seq';
  $handler->display->display_options['fields']['field_meta_seq']['table'] = 'field_data_field_meta_seq';
  $handler->display->display_options['fields']['field_meta_seq']['field'] = 'field_meta_seq';
  /* Field: Content: type (int) */
  $handler->display->display_options['fields']['field_meta_int_type']['id'] = 'field_meta_int_type';
  $handler->display->display_options['fields']['field_meta_int_type']['table'] = 'field_data_field_meta_int_type';
  $handler->display->display_options['fields']['field_meta_int_type']['field'] = 'field_meta_int_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_area']['id'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['table'] = 'field_data_field_area';
  $handler->display->display_options['fields']['field_area']['field'] = 'field_area';
  /* Field: Content: Level 1 */
  $handler->display->display_options['fields']['field_meta_level_1']['id'] = 'field_meta_level_1';
  $handler->display->display_options['fields']['field_meta_level_1']['table'] = 'field_data_field_meta_level_1';
  $handler->display->display_options['fields']['field_meta_level_1']['field'] = 'field_meta_level_1';
  /* Field: Content: Level 2 */
  $handler->display->display_options['fields']['field_meta_level_2']['id'] = 'field_meta_level_2';
  $handler->display->display_options['fields']['field_meta_level_2']['table'] = 'field_data_field_meta_level_2';
  $handler->display->display_options['fields']['field_meta_level_2']['field'] = 'field_meta_level_2';
  /* Field: Content: Level 3 */
  $handler->display->display_options['fields']['field_meta_level_3']['id'] = 'field_meta_level_3';
  $handler->display->display_options['fields']['field_meta_level_3']['table'] = 'field_data_field_meta_level_3';
  $handler->display->display_options['fields']['field_meta_level_3']['field'] = 'field_meta_level_3';
  /* Field: Content: Query Subject */
  $handler->display->display_options['fields']['field_query_subject']['id'] = 'field_query_subject';
  $handler->display->display_options['fields']['field_query_subject']['table'] = 'field_data_field_query_subject';
  $handler->display->display_options['fields']['field_query_subject']['field'] = 'field_query_subject';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_meta_type']['id'] = 'field_meta_type';
  $handler->display->display_options['fields']['field_meta_type']['table'] = 'field_data_field_meta_type';
  $handler->display->display_options['fields']['field_meta_type']['field'] = 'field_meta_type';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_meta_description']['id'] = 'field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['table'] = 'field_data_field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['field'] = 'field_meta_description';
  /* Field: Content: Pulls From */
  $handler->display->display_options['fields']['field_meta_pulls_from']['id'] = 'field_meta_pulls_from';
  $handler->display->display_options['fields']['field_meta_pulls_from']['table'] = 'field_data_field_meta_pulls_from';
  $handler->display->display_options['fields']['field_meta_pulls_from']['field'] = 'field_meta_pulls_from';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ebo_metadata' => 'ebo_metadata',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Meta Test (field_meta_test) */
  $handler->display->display_options['filters']['field_meta_test_value']['id'] = 'field_meta_test_value';
  $handler->display->display_options['filters']['field_meta_test_value']['table'] = 'field_data_field_meta_test';
  $handler->display->display_options['filters']['field_meta_test_value']['field'] = 'field_meta_test_value';
  $handler->display->display_options['filters']['field_meta_test_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meta_test_value']['expose']['operator_id'] = 'field_meta_test_value_op';
  $handler->display->display_options['filters']['field_meta_test_value']['expose']['label'] = 'Meta Test';
  $handler->display->display_options['filters']['field_meta_test_value']['expose']['operator'] = 'field_meta_test_value_op';
  $handler->display->display_options['filters']['field_meta_test_value']['expose']['identifier'] = 'field_meta_test_value';
  $handler->display->display_options['filters']['field_meta_test_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ebo-metadata';
  $export['ebp_metadata'] = $view;

  return $export;
}
