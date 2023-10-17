<?php 

// dosya işaretçisinin konumunu dosya başlangıcına "geri sarar"


$file = fopen("test.txt","r");

fseek($file,"15");

rewind($file);

fclose($file);
?> 
