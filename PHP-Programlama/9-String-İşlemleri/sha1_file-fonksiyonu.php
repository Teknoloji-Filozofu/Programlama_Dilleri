 <?php
 
// bir dosyanın SHA-1 karmasını hesaplar 

$filename = "test.txt";
$sha1file = sha1_file($filename);
echo $sha1file;
?> 
