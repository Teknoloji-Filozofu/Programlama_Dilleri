<?php 

// açık bir dosyadaki okuma / yazma işaretcisinin geçerli konumunu döndürür


$file = fopen("test.txt","r");

echo ftell($file);

fseek($file,"15");

echo "\n" . ftell($file);

fclose($file);

?> 
