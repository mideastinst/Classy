<div class="available-credits">
  <h2>Your Available Vouchers</h2>
  <ul>
  <?php foreach ($args as $id=>$type): ?>
    <li><?php print $type['name']; ?>
      <ul>
        <?php if (isset($type['count']) && $type['count']['unpaid'] != 0): ?>
          <li> Unpaid: <?php print $type['count']['unpaid']; ?> </li>
        <?php endif; ?>
        <?php if (isset($type['count']) && $type['count']['open'] != 0): ?>
          <li>Available: <?php print $type['count']['open']; ?></li>
        <?php endif; ?>
        <li><a href="/civicrm/contribute/transact?reset=1&id=<?php print $type['contribution_page']; ?>">Purchase voucher</a></li>  
      </ul>
    </li>  
  <?php endforeach; ?> 
  </ul>
</div>
