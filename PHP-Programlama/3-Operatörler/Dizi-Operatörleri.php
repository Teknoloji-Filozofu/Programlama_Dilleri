<?php 
 
  /*
  +    -->birleştirme
  ==   --> eşittir
  ===  --> özdeş (tür karşılaştırma)
  !=   --> eşit değildir
  <>   --> eşit değildir
  !==  --> özdeş değil
 */

$x = array("a"=>"kırmızı", "b"=>"yeşil");
$y = array("c"=>"mavi", "d"=>"sarı");

print_r($x + $y);

var_dump($x == $y);

var_dump($x === $y);

var_dump($x != $y);

var_dump($x <> $y);

var_dump($x !== $y);
?>