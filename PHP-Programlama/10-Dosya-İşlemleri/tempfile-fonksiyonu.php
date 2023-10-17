<?php 

// okuma-yazma (w) modunda benzersiz bir ada sahip geçici bir dosya oluşturur


$temp = tmpfile();

fwrite($temp, "Testing, testing.");

rewind($temp);

echo fread($temp,1024);

fclose($temp);
?> 
