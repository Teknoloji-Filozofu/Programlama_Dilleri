<?php 

// belirtilen dosya adının yürütülebilir olup olmadığını kontrol eder 


$file = "setup.exe";
if(is_executable($file)) {
  echo ("$file is executable");
} else {
  echo ("$file is not executable");
}
?> 
