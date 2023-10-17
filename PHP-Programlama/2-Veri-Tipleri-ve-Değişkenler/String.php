<?php

echo "sadık oktay biçici ";
echo "sadık " . "oktay " . "biçici";

$ad = "sadık oktay";
$soyad = " biçici ";

echo "merhaba " . $ad;
echo $ad . $soyad;

$selam = "selam";

$tanısma = $selam . " " . $ad;

echo "merhaba $ad";

#tek tırnak ile yapılan işlemlerde değişkenin değerini bastırmıyor
echo 'merhaba $ad';

?>