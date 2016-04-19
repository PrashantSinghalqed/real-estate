

<div class="page-wrapper">


<!-- ======= Rendering Regions ========= -->

   <div class="header-top">
    <?php print render($page['header_top']); ?>
  </div>
  <div class="header">
    <div class="header-nav">
      <?php print render($page['header']); ?>

    </div>
  </div>

  <div class="content">
    <?php if ($title): ?>
      <h2>
        <?php print $title; ?>
      </h2>
    <?php endif; ?>

    <div class="container-12">
      <?php print render($page['content']); ?>
    </div>
  </div>
  <div class="footer">
  <div class="footer-tags">
    <?php print render($page['footer']); ?>
  </div></div>
  <div class="preface">
    <?php print render($page['preface']); ?>
  </div>
</div> <!-- /.page-wrapper -->
