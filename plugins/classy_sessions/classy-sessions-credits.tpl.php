<div class="left clearfix">
  
  <div class="admin-panel">
    <h3><?php //print $subject; ?></h3>
    <div class="body">
      <table>
        <th><?php print t('Name'); ?></th>
        <th><?php print t('Unscheduled Sessions'); ?></th>
        <?php foreach ($args as $student): ?>
          <tr>
            <td><a href='/user/<?php print $student['id']; ?>'><?php print $student['name']; ?></a></td>
            <td><?php print $student['available']; ?></td>
          </tr>
        <?php endforeach; ?>
      </table>
    </div>
  </div>
</div>