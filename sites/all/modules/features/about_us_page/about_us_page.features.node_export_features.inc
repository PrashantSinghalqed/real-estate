<?php
/**
 * @file
 * about_us_page.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function about_us_page_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'active\' => \'1\',
      \'allowvotes\' => TRUE,
      \'changed\' => NULL,
      \'choice\' => array(
        1 => array(
          \'chid\' => \'1\',
          \'chtext\' => \'Super\',
          \'chvotes\' => \'39\',
          \'weight\' => \'1\',
        ),
        2 => array(
          \'chid\' => \'2\',
          \'chtext\' => \'Good\',
          \'chvotes\' => \'31\',
          \'weight\' => \'2\',
        ),
        3 => array(
          \'chid\' => \'3\',
          \'chtext\' => \'Normal\',
          \'chvotes\' => \'20\',
          \'weight\' => \'3\',
        ),
        4 => array(
          \'chid\' => \'4\',
          \'chtext\' => \'Bad\',
          \'chvotes\' => \'11\',
          \'weight\' => \'4\',
        ),
      ),
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'location\' => array(),
      \'locations\' => array(),
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'prashant\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:Poll\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'runtime\' => \'0\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'What do you think about us?\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poll\',
      \'uid\' => \'1\',
      \'uuid\' => \'5fc91a0c-440e-4cb3-8d1c-c9649dc73c7f\',
      \'vid\' => NULL,
      \'vote\' => -1,
      \'vuuid\' => \'8a0ce0c1-a03c-482e-8241-cd5e4d71358e\',
    ),
)',
);
  return $node_export;
}
