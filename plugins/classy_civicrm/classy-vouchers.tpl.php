<div class="available-credits">
  <h2>Your Available Vouchers</h2>
  <ul>
  <?php foreach ($args as $id=>$type): ?>
    <li><?php print $type['name']; ?>
      <ul>
        <?php if ($type['count']['unpaid'] != 0): ?>
          <li> Unpaid: <?php print $type['count']['unpaid']; ?> </li>
        <?php endif; ?>
        <?php if ($type['count']['open'] != 0): ?>
          <li>Available: <?php print $type['count']['open']; ?></li>
        <?php endif; ?>
        <li><a href="/civicrm/contribute/transact?reset=1&id=<?php print $id; ?>">Purchase voucher</a></li>  
      </ul>
    </li>  
  <?php endforeach; ?>
  </ul>
</div>
