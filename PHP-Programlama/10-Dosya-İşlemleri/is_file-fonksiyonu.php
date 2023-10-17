<?php 

// belirtilen dosya adının normal bir dosya  olup olmadığını kontrol eder 


$file = "test.txt";
if(is_file($file)) {
  echo ("$file is a regular file");
} else {
  echo ("$file is not a regular file");
}
?> 
