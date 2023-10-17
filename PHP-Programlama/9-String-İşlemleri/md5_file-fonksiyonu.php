 <?php
 
// bir dosyanın MD5 karmasını hesaplar

$filename = "test.txt";
$md5file = md5_file($filename);
echo $md5file;
?> 
