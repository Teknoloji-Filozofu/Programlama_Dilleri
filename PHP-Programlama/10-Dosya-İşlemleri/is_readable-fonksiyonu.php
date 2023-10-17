<?php 

// belirtilen dosya adının okunabilir olup olmadığını kontrol eder 


$file = "test.txt";
if(is_readable($file)) {
  echo ("$file is readable");
} else {
  echo ("$file is not readable")
}
?> 
