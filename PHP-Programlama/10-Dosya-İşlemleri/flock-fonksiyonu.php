<?php 

// bir dosyayı kilitler veua serbest bırakır


$file = fopen("test.txt","w+");

if (flock($file,LOCK_EX)) {
  fwrite($file,"Add some text to the file.");
  fflush($file);

  flock($file,LOCK_UN);
} else {
  echo "Error locking file!";
}
fclose($file);

?> 
