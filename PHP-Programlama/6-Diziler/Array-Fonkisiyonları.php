<?php

$araba = array("Volvo", "BMW", "Toyota");

#count() dizinin içindeki eleman sayınız verir
$diziuzunluk = count($araba);

for($x = 0; $x < $diziuzunluk; $x++) {
    echo $araba[$x];
    echo "\n";
}

###############################################################################

#sort() dizileri artan düzende sırala
$cars = array("Volvo", "BMW", "Toyota");
sort($cars);

$diziuzunluk = count($cars);
for($x = 0; $x < $diziuzunluk; $x++) {
    echo $cars[$x];
    echo "\n";
}

$numaralar = array(4, 6, 2, 22, 11);
sort($numaralar);

$diziuzunluk = count($numaralar);
for($x = 0; $x < $diziuzunluk; $x++) {
    echo $numaralar[$x];
    echo "\n";
}

##############################################################################

$cars = array("Volvo", "BMW", "Toyota");
rsort($cars);

$diziuzunluk = count($cars);
for($x = 0; $x < $diziuzunluk; $x++) {
    echo $cars[$x];
    echo "\n";
}

#rsort() dizileri azalan düzende sırala
$numaralar = array(4, 6, 2, 22, 11);
rsort($numaralar);

$diziuzunluk = count($numaralar);
for($x = 0; $x < $diziuzunluk; $x++) {
    echo $numaralar[$x];
    echo "\n";
}

#############################################################################

#asort() İlişkilendirilebilir dizileri değere göre artan düzende sıralar
$yaş = array("Sadık"=>"35", "Oktay"=>"37", "Biçici"=>"43");
asort($age);

foreach($yaş as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "\n";
}

#############################################################################

#ksort() çağrışım dizilerini anahtara göre artan düzende sıralar
$yaş = array("Sadık"=>"35", "Oktay"=>"37", "Biçici"=>"43");
ksort($age);

foreach($yaş as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "\n";
}

############################################################################

#arsort() ilişkilendirilebilir dizileri değerine göre azalan sırada sıralar
$yaş = array("Sadık"=>"35", "Oktay"=>"37", "Biçici"=>"43");
arsort($age);

foreach($yaş as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "\n";
}

##########################################################################

#krsort() ilişkisel dizileri anahtara göre azalan sırada sıralar
$yaş = array("Sadık"=>"35", "Oktay"=>"37", "Biçici"=>"43");
krsort($yaş);

foreach($yaş as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "\n";
}

?>