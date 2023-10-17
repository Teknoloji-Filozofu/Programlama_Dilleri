<?php 

// dosyanın dosya izinlerini değiştirir
// Bu işlev PHP'nin umask'ını 0777'yi maskeleyecek şekilde ayarlar ve eski umask'ı döndürür.

$file = "test.txt";
echo (umask());
?> 
