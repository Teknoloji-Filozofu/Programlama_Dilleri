<?php 

// belirtilen dosya adının yazılabilir olup olmadığını kontrol eder 


$file = "test.txt";
if(is_writable($file)) {
  echo ("$file is writable");
} else {
  echo ("$file is not writable");
}
?> 
