<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
global $user;
$user_role = '';

if (in_array('level 3', $user->roles))
  $user_role = TRUE;
if (in_array('level 1', $user->roles) || in_array('level 2', $user->roles))
  $user_role = FALSE;
?>

<table <?php print ($classes) ? 'class="'. $classes . '" ' : ''; ?><?php print $attributes; ?>>
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>

          <?php if (!$user_role): ?>
            <th <?php print ($header_classes[$field]) ? 'class="' . $header_classes[$field] . '" ' : ''; ?>>
              <?php print $label; ?>
            </th>
          <?php else: ?>
            <?php if ($header_classes[$field] != 'views-field views-field-views-bulk-operations'): ?>
              <th <?php print 'class="' . ($header_classes[$field]) ? $header_classes[$field] : '' . '"'; ?>>
                <?php print $label; ?>
              </th>
            <?php endif; ?>
          <?php endif; ?>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
      <tr <?php print ($row_classes[$row_count]) ? 'class="' . implode(' ', $row_classes[$row_count]) . '"' : ''; ?>>
        <?php foreach ($row as $field => $content): ?>
          <?php if (!$user_role): ?>
            <td <?php print 'class="' . ($field_classes[$field][$row_count]) ? $field_classes[$field][$row_count] : '' . '"'; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <?php print $content; ?>
            </td>
          <?php else: ?>
            <?php if ($field_classes[$field][$row_count] != 'views-field views-field-views-bulk-operations'): ?>
              <td <?php print ($field_classes[$field][$row_count]) ? 'class="' . $field_classes[$field][$row_count] . '" ' : ''; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
                <?php print $content; ?>
              </td>
            <?php endif; ?>
          <?php endif; ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
