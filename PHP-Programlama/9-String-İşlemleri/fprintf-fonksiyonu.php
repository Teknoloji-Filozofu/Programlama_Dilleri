 <?php
 
// belirtilen bir çıktı akışını biçimlendirilmiş bir dize yazar 
 
$number = 9;
$str = "Beijing";
$file = fopen("test.txt","w");
echo fprintf($file,"There are %u million bicycles in %s.",$number,$str);
?> 
