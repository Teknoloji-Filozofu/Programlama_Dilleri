<?php 

// açık bir dosya arar


$file = fopen("test.txt","r");

echo fgets($file);

fseek($file,0);
fclose($file);
?> 
