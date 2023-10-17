 <?php
 
// bir dizeyi bir kiril karakter kümesinden diğerine dönüştürür
 
$str = "Hello world! æøå";
echo $str . "\n";
echo convert_cyr_string($str,'w','a');
?> 
