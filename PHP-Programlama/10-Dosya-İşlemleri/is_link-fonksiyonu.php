<?php 

// belirtilen dosya adının sembolik bir bağlantı  olup olmadığını kontrol eder 


$link = "images";
if(is_link($link)) {
  echo ("$link is a link");
} else {
  echo ("$link is not a link");
}
?> 
