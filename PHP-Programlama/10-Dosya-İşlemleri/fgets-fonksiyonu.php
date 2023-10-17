<?php 

// açık bir dosyadan bir satır döndürür

$file = fopen("test.txt","r");
echo fgets($file);
fclose($file);
?> 
