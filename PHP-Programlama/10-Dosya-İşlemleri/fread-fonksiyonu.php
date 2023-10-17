<?php 

// açık bir dosyadan okur


$file = fopen("test.txt","r");
fread($file,"10");
fclose($file);

?> 
