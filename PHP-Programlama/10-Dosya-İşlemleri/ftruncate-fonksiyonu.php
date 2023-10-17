<?php 

// açık bir dosyayı belirtilen uzunlukta kısaltır


echo filesize("test.txt");
echo "\n";

$file = fopen("test.txt", "a+");
ftruncate($file,100);
fclose($file);

clearstatcache();
echo filesize("test.txt");

?>
