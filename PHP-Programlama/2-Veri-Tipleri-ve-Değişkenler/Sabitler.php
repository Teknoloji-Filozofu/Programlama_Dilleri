<?php 

#sabitler tanımlanırken ilk kısma sabitin ismi 2. kısma sabitin değerini yazarız
define("pi",3.15);

define("isim"," oktay ");

$pi = 9.45;

echo pi;
echo $pi;
echo isim;


define("cars", [" Alfa Romeo",
                " BMW " ,
                " Toyota "]
);

echo cars[0];
?>