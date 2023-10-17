<?php


/*

Veri Türleri

8 veri türü desteklenmektedir

integer: 20, 0, 

float: 3,13  5,8

string: "yazılar genellikle çift tırnak arasında olur"

boolen: TRUE (1) , FALSE (0)

array: dizi veri tipi

null: değer atanmamış anlamına gerlir

object: nesnelerin tutulduğu veri tipi

resource: harici bir kaynağa bir gönderim içeren değişken

 */

 
//krakter dizisi - string
$string = "oktay";
$string2 = 'biçici ';

echo $string . $string2;
echo "\n";

#tam sayı - integer 
$x = 45;
$y = -50;
$z = 0;

echo $x . "--" . $y . "--" . $z;
echo "\n";

# değerlerin hangi türde olduğunu kontrol ediyoruz
var_dump($x);
var_dump($y);
var_dump($z);

echo "\n";

//reel sayı - float
$a = 1.2;
$b = 60.134;
$c = -12.5;

echo $a . "--" . $b . "--". $c ;
echo "\n";

# değerlerin hangi türde olduğunu kontrol ediyoruz
var_dump($a);
var_dump($b);
var_dump($c);

echo "\n";

#mantıksal veri tipi - boolean
$t = TRUE; // doğru
$f = FALSE; //yanlış

echo $t ;
echo $f ;
echo "\n";

# değerlerin hangi türde olduğunu kontrol ediyoruz
var_dump($t);
var_dump($f);

//diziler - array  
$arabalar = ["Opel","Renault","Fiat"];
$dizi = array(20,0,"oktay,FALSE");
$cars = array("Volvo","BMW","Toyota");
var_dump($cars);

#bu kısmın örneklerini diziler konusunda yer verilicek

//null
$x = "Hello world!";
$x = null;
var_dump($x);

// sınıf  kavramı
class araba {
  function araba() {
    $this->model = "BMW";
  }
}

// yeni adında bir yeni araba oluşturuyoruz
$yeni = new Car();

echo $yeni->model;
?>
