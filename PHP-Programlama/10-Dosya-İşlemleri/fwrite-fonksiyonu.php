<?php 

// açık bir dosyaya yazar


$file = fopen("test.txt","w");
echo fwrite($file,"Hello World. Testing!");
fclose($file);

?> 
