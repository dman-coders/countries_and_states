<?php
/**
 * @file
 * countries_and_states.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function countries_and_states_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-countries_and_states-field_abbreviation'.
  $field_instances['taxonomy_term-countries_and_states-field_abbreviation'] = array(
    'bundle' => 'countries_and_states',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_abbreviation',
    'label' => 'Abbreviation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 8,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviation');

  return $field_instances;
}
