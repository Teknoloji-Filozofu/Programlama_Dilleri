<?php 

// açık bir dosya için "dosya sonuna" (EOF) ulaşıp ulaşmadığını kontrol eder


$file = fopen("test.txt", "r");

while(! feof($file)) {
  $line = fgets($file);
  echo $line. "\n";
}

fclose($file);

?> 
