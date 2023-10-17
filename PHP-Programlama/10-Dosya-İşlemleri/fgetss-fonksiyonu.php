<?php 

// açık bir dosyadan HTML ve PHP etiketlerinden sıyrılmış bir satır döndürür

$file = fopen("test.htm","r");
echo fgetss($file);
fclose($file);
?> 
