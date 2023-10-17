 <?php
 
// belirtilen çıktı akışına biçimlendirilmiş bir dize yazar

$number = 9;
$str = "Beijing";
$file = fopen("test.txt","w");
echo vfprintf($file,"There are %u million bicycles in %s.",array($number,$str));
?> 
