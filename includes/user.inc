<?php

/**
 * @file
 * Theme and preprocess functions for users.
 */

/**
 * Implements template_preprocess_user().
 */
function oe_bootstrap_theme_preprocess_user(&$variables) {
  // Add the view mode to the template.
  $variables['view_mode'] = $variables['elements']['#view_mode'];
}
