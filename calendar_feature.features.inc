<?php
/**
 * @file
 * calendar_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function calendar_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function calendar_feature_node_info() {
  $items = array(
    'calendar_item' => array(
      'name' => t('Calendar Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
