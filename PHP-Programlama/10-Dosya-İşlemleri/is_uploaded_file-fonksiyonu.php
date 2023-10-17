<?php 

// belirtilen dosyanın HTTP POST yoluyla yülenip yüklenmediğini kontrol eder 


$file = "test.txt";
if(is_uploaded_file($file)) {
  echo ("$file is uploaded via HTTP POST");
} else {
  echo ("$file is not uploaded via HTTP POST");
}
?> 
