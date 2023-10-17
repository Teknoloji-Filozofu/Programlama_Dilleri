<?php 

// sembolik bir bağlantının kullanıcı sahipliğini değiştirir


$target = "downloads.php";
$link = "downloads";
symlink($target, $link);

lchown($link, 8)
?> 
