<?php 

// bir dosya veya URL açar


$file = fopen("test.txt", "r");

while(! feof($file)) {
  $line = fgets($file);
  echo $line. "\n";
}

fclose($file);

?> 
