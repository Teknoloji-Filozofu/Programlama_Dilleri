<?php 

// dosya içeriğinin değiştirildiği zamanı döndürür


echo filemtime("webdictionary.txt");
echo "\n";
echo "Content last changed: ".date("F d Y H:i:s.", filemtime("webdictionary.txt"));

?> 
