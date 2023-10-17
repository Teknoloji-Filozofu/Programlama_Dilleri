 <?php
 
// bir dizeden girdiyi belirtilen biçime göre ayrıştırır, 
// bir dizeyi biçim dizesine göre değişkenlere ayırır

$str = "age:30 weight:60kg";
sscanf($str,"age:%d weight:%dkg",$age,$weight);
var_dump($age,$weight);
?> 
