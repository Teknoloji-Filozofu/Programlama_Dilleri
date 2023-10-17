<?php 

// belirtilen dosya adının bir dizi olup olmadığını kontrol eder 


$file = "images";
if(is_dir($file)) {
  echo ("$file is a directory");
} else {
  echo ("$file is not a directory");
}

?> 
