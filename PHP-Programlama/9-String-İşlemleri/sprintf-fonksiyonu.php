 <?php
 
// bir değişkene biçimlendirilmiş bir dize yazar

$number = 9;
$str = "Beijing";
$txt = sprintf("There are %u million bicycles in %s.",$number,$str);
echo $txt;
?> 
