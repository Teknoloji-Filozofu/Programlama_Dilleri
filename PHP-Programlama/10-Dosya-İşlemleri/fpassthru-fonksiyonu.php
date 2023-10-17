<?php 

// bir dosyadaki geçerli konumdan EOF'a kadar okur ve sonucu çıktı arabelleğine yazar


$file = fopen("test.txt","r");
fgets($file);

echo fpassthru($file);

fclose($file);

?> 
