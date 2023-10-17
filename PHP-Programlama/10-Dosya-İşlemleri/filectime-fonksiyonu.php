<?php 

// belirtilen dosyanın en son değiştirildiğinde döndürür

echo filectime("webdictionary.txt");
echo "\n";
echo "Last changed: ".date("F d Y H:i:s.", filectime("webdictionary.txt"));

?> 
