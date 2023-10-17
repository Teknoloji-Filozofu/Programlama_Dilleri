<?php 

// açık bir dosyadan tek bir karakter döndürür  

$file = fopen("test.txt","r");
echo fgetc($file);
fclose($file);

?> 
