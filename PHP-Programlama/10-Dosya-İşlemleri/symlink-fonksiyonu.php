<?php 

// varolan hedeften belirtilen ad bağlantısına sahip sembolik bir bağlantı oluşturur


$target = "downloads.php";
$link = "downloads";
symlink($target, $link);
echo readlink($link);
?> 
