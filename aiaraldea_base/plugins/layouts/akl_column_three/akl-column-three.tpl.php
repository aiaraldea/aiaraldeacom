<?php

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<div class="container_12">
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>

<?php if (!empty($content['header_alpha'])): ?>
  <div class="page-header-alpha grid_12">
    <?php print $content['header_alpha']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha']) || !empty($content['footer_alpha']) || !empty($content['footer_beta'])): ?>
  <div class="page-main-wrapper grid_8">
<?php endif; ?>

  <?php if (!empty($content['header_beta'])): ?>
    <div class="page-header-beta grid_8 alpha omega">
      <?php print $content['header_beta']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['main'])): ?>
    <div class="page-main grid_5 alpha">
      <?php print $content['main']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['aside_alpha'])): ?>
    <div class="page-aside-alpha grid_3 omega">
      <?php print $content['aside_alpha']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['footer_alpha'])): ?>
    <div class="page-footer-alpha grid_8 alpha omega">
      <?php print $content['footer_alpha']; ?>
    </div>
  <?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha'])): ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <div class="page-aside-beta grid_4">
    <?php print $content['aside_beta']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer_beta'])): ?>
  <div class="page-footer-beta grid_12">
    <?php print $content['footer_beta']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
</div>
