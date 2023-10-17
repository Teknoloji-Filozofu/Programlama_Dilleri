<?php 

/*
   =  --> x = y --> sağdaki değere soldakine atıyor
  +=  --> x = x+y --> toplamanın kısa yolu
  -=  --> x = x-y --> çıkarmanın kolay yolu
  *=  --> x = x*y --> çarpmanın kısa yolu
  /=  --> x = x/y --> bölmenin kısa yolu
  %=  --> x = x%y --> mod almanın kısa yolu
 */

$a = 48;

$x = 60;
$x1 = $x+= 100;

$t = 40;
$t1 = $t-= 20;

$y = 20;
$y1 = $y*= 2;

$z = 5;
$z1 = $z/= 5;

$d = 300;
$d1 = $d%= 40; 

echo $x + $y . " ";
echo $y - $d . " ";
echo $d * $z . " ";
echo $x / $z . " ";
echo $t / $d . " ";
echo $y % $d . " ";

echo $a . " ";
echo $x1 . " ";
echo $t1 . " ";
echo $y1 . " ";
echo $z1 . " ";
echo $d1 . " ";


?>