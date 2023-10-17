<?php 

// verilen dosyada arabelleğe alınacak bayt sayısını belirtir


$file = fopen("test.txt","w");
if ($file) {
  set_file_buffer($file,0);
  fwrite($file,"Hello World. Testing!");
  fclose($file);
}
?> 
