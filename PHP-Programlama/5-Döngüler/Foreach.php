<?php 

$agaçlar = ["çam", "çınar","meşe","kavak"];

foreach ($agaçlar as $agac){
	echo $agac;
	echo "\n";
	//echo "<br>";
}

$yaş = array("samet"=>"35", "oktay"=>"37", "sevgi"=>"43");

foreach($yaş as $x => $değer) {
  echo "$x = $değer \n";
}

echo "döngü bitti";

?>