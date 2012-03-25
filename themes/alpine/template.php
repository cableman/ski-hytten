<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function alpine_preprocess_page(&$vars) {
  // Get the front page slider up-and-running.
  drupal_add_js(drupal_get_path('theme', 'alpine') . '/js/jquery.flexslider-min.js');
  drupal_add_js(drupal_get_path('theme', 'alpine') . '/js/slider.js');
  drupal_add_css(drupal_get_path('theme', 'alpine') . '/css/flexslider.css');
}

/**
 * Implements hook_breadcrumb().
 *
 * Remove the current page title from the breadcrumb.
 */
function alpine_breadcrumb($variables) {
  $output = '';
  $breadcrumb = $variables['breadcrumb'];

    // Build breadcrumb.
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
  }

  // Provide a navigational heading to give context for breadcrumb links to
  // screen-reader users. Make the heading invisible with .element-invisible.
  $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
  $output .= '<nav class="breadcrumb">' . implode(' > ', $breadcrumb) .'</nav>';

  return $output;
}
