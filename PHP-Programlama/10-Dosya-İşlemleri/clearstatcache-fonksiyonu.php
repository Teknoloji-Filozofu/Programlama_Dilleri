<?php 

// dosyanın ön belleğini temizler 

echo filesize("test.txt");
echo "<br />";

$file = fopen("test.txt", "a+");

ftruncate($file,100);
fclose($file);

clearstatcache();
echo filesize("test.txt");

?> 
