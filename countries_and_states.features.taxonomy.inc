<?php
/**
 * @file
 * countries_and_states.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function countries_and_states_taxonomy_default_vocabularies() {
  return array(
    'countries_and_states' => array(
      'name' => 'Countries and States',
      'machine_name' => 'countries_and_states',
      'description' => 'A list of geographic regions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
