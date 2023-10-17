 <?php
 
// bir dizeyi daha küçük dizelere (belirteçlere) böler

$string = "Hello world. Beautiful day today.";
$token = strtok($string, " ");

while ($token !== false)
{
echo "$token<br>";
$token = strtok(" ");
} 
?> 
