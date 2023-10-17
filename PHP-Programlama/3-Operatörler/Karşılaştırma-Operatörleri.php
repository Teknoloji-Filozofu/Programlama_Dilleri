<?php 


 /*
  ==   --> eşittir
  ===  --> özdeş (tür karşılaştırma)
  !=   --> eşit değildir
  <>   --> eşit değildir
  !==  --> özdeş değil
  <    --> küçüktür
  >    --> büyüktür
  <=   --> küçük eşittir
  >=   --> büyük eşittir
  <=>  --> 
 */

$x = 60;
$t = 80;
$y = 20;
$z = 20;
$d = "60";

var_dump($x == $y);
var_dump($x === $d);
var_dump($x != $d);
var_dump($x <> $d);
var_dump($x !== $d);
var_dump($x < $t);
var_dump($x > $t);
var_dump($z <= $y);
var_dump($z >= $y);

var_dump($x <=> $y);
var_dump($z <=> $y);
var_dump($y <=> $x);



?>