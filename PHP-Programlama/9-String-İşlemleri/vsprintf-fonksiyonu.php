 <?php
 
// bir değişkene biçimlendirilmiş bir dize yazar


$number = 9;
$str = "Beijing";
$txt = vsprintf("There are %u million bicycles in %s.",array($number,$str));
echo $txt;
?> 
