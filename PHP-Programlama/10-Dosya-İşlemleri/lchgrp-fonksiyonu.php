<?php 

// sembolik bir bağlantının grup sahipliğini değiştirir


$target = "downloads.php";
$link = "downloads";
symlink($target, $link);

lchgrp($link, 8)
?> 
