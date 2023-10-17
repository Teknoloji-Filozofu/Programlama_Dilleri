<?php 

 /*
  and   --> ve 
  or    --> yada
  xor   --> eşit değildir
  &&    --> ve
  ||    --> yasa
  !     --> değil
 */

$x = 60;
$y = 20;

if ($x == 60 and $y == 20){
    echo "Hello world!";
    echo "\n";
}

if ($x == 60 or $y == 20){
    echo "Hello world!";
    echo "\n";
}

if ($x == 60 xor $y == 50){
    echo "Hello world!";
    echo "\n";
}

if ($x == 60 && $y == 20){
    echo "Hello world!";
    echo "\n";
}

if ($x == 60 || $y == 50){
    echo "Hello world!";
    echo "\n";
}

if ($x == 100){
    echo "Hello world!";
}

?>