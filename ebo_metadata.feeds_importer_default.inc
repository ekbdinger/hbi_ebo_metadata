<?php
/**
 * @file
 * ebo_metadata.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ebo_metadata_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ebo_metadata';
  $feeds_importer->config = array(
    'name' => 'eBO Metadata',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'area_int',
            'target' => 'field_int_area',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'area',
            'target' => 'field_area',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'query_subject',
            'target' => 'field_query_subject',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'type',
            'target' => 'field_meta_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'description',
            'target' => 'field_meta_description',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'pulls_from',
            'target' => 'field_meta_pulls_from',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ebo_metadata',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ebo_metadata'] = $feeds_importer;

  return $export;
}
