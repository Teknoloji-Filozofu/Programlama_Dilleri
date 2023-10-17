<?php 

// bir yapılandırma (ini) dosyasını ayrıştırır ve ayarlarını döndürür

/* test.ini
[names]
me = Robert
you = Peter

[urls]
first = "http://www.example.com"
second = "https://www.w3schools.com" 
*/

print_r(parse_ini_file("test.ini"));
?> 
