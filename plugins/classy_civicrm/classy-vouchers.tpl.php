<div class="available-credits border-top block-25">
  <h3 class="section-title">Pay and Enroll</h3>
  <div class="content-wrap section">
  <p class="instructions">Purchase vouchers to enroll in classes or to schedule individual tutoring.  If you have any questions, please <a href="/faq">click here</a> or contact the department for assistance.</p>
  <ul>
  <?php foreach ($args as $id=>$type): ?>
    <div class="item clearfix">
      <li><a class="purchase-link <?php print $type['name']; ?>" href="/civicrm/contribute/transact?reset=1&id=<?php print $type['contribution_page']; ?>"><?php print $type['name']; ?></a>
        <ul>
          <?php if (isset($type['count']) && $type['count']['unpaid'] != 0): ?>
            <li><span class="label">Unpaid Vouchers:</span> <?php print $type['count']['unpaid']; ?> </li>
          <?php endif; ?>
          <?php if (isset($type['count']) && $type['count']['open'] != 0): ?>
            <li><span class="label">Available Vouchers:</span> <?php print $type['count']['open']; ?></li>
          <?php endif; ?>
        </ul>
      </li>
    </div>
  <?php endforeach; ?> 
  </ul>
  <div class="more-link clear"><a href="/about">about</a> | <a href="/policies">policies</a> | <a href="/faq">faq</a><br /> <a href="/calendar">academic calendar</a> </div>
  </div>
</div>
