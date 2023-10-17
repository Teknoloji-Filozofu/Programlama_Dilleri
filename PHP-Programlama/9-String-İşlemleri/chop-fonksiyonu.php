 <?php
 
// boşlukları veya önceden tanımlanmış karakterleri bir dizenin sağ ucundan kaldırır 
 
$str = "Hello World!";
echo $str . "\n";
echo chop($str,"World!");
?> 
