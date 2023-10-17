<?php 

// açık bir dosya hakkında bilgi döndürür


$file = fopen("test.txt","r");
print_r(fstat($file));
fclose($file);

?> 
