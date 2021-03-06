<?php
/**
 * @file
 * countries_and_states.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function countries_and_states_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_abbreviation'.
  $field_bases['field_abbreviation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abbreviation',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 8,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
