<?php
/**
 * @file
 * uib_setup.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function uib_setup_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: advanced_editor
  $profiles['advanced_editor'] = array(
    'format' => 'advanced_editor',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'blockquote' => 1,
          'cut' => 1,
          'copy' => 1,
        ),
        'autosave' => array(
          'autosave' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,h2,h3,h4',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: basic_html
  $profiles['basic_html'] = array(
    'format' => 'basic_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'blockquote' => 1,
          'cut' => 1,
          'copy' => 1,
        ),
        'autosave' => array(
          'autosave' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,h2,h3,h4',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: restricted_html
  $profiles['restricted_html'] = array(
    'format' => 'restricted_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,h3,h4',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: simple_editor
  $profiles['simple_editor'] = array(
    'format' => 'simple_editor',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'unlink' => 1,
          'cleanup' => 1,
          'formatselect' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,h2,h3,h4',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
