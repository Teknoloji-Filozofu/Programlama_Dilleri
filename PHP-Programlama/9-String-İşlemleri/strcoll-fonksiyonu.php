 <?php
 
// iki dizeyi karşılaştırır


setlocale (LC_COLLATE, 'NL');
echo strcoll("Hello World!","Hello World!");
echo "\n";

setlocale (LC_COLLATE, 'en_US');
echo strcoll("Hello World!","Hello World!");
?> 
