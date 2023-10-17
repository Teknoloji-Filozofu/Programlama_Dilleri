<?php 

// bir dosya hakkında bilgileri döndürür


$stat = stat("test.txt");
echo "Access time: " .$stat["atime"];
echo "\n Modification time: " .$stat["mtime"];
echo "\n Device number: " .$stat["dev"];
?> 
