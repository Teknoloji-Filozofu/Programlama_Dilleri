 <?php
 
// bir dizenin sağ tarafında boşluk veya önceden tanımlanmış diğer karakterleri kaldırır

$str = "Hello World!";
echo $str . "\n";
echo rtrim($str,"World!");
?> 
