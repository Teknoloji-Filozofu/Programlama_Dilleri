<?php 

$x = 5;  // global bir değer 

function test() { 
 // x değeri fonksiyon dışında tanımlandığı için fonksiyon içine çağrılamaz
 
 echo "X in değeri : $x \n";
 }
 
 test();
 
 echo "X in değeri : $x \n";

 /////////////////////////////////////////////////////////////////////////////////
 
function test2() {

$y = 5; 
 // y değeri fonksiyon içinde tanımlandığı için fonksiyon dışında kullanılamaz
 
 echo "Y nin değeri : $y \n";
 }
 
test2();

echo "Y nin değeri : $y \n";

///////////////////////////////////////////////////////////////////////////////////

$x = 5;
$y = 10;

function test3() {

// değerleri global olarak tanımladıktan sonra istediğimiz gibi kullabiliriz
global $x, $y;

$y = $x + $y ;
}

test3();

echo $y;
?>
