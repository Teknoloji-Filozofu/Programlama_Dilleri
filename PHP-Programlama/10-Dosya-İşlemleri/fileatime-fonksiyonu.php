<?php 

// belirtilen dosyanın son erişim süresini döndürür

echo fileatime("webdictionary.txt");
echo "\n";
echo "Last access: ".date("F d Y H:i:s.", fileatime("webdictionary.txt"));

?> 
