<?php

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<div class="container_12 clear-block">
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>

<?php if (!empty($content['header'])): ?>
  <div class="page-header grid_12 alpha omega">
    <?php print $content['header']; ?>
  </div>
<?php endif; ?>

  <?php if (!empty($content['main'])): ?>
    <div class="page-main grid_8 alpha">
      <?php print $content['main']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['aside'])): ?>
    <div class="page-aside grid_4 omega">
      <?php print $content['aside']; ?>
    </div>
  <?php endif; ?>

<?php if (!empty($content['footer'])): ?>
  <div class="page-footer grid_12 alpha omega">
    <?php print $content['footer']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
</div>