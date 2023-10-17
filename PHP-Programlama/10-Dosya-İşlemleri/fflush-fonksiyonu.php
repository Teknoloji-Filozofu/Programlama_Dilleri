<?php 

// arabelleğe alınan tüm çıktıları bir dosyaya yazar 

$file = fopen("test.txt","r+");
rewind($file);
fwrite($file, 'Hello World');
fflush($file);

fclose($file);

?> 
