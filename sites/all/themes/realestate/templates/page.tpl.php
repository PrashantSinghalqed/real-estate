
<div class="page-wrapper">



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
           <?php endif; ?>
           </h2>
           <div class="12container">
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



</div>
