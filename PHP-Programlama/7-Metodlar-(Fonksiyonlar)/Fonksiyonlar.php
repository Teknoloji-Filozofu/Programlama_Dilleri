<?php

function ad(){
	echo "sadık oktay biçici";
}

function selam($isim){
	echo " mehaba " . $isim;
}


function selam2($isim,$isim2){
	echo " mehaba " . $isim . "ve" . $isim2;
}

function selam3($isim){
	return " mehaba " . $isim;
}

$karşılama = selam3("sadık");

ad();
selam("oktay");
selam2("oktay","uğur");
echo selam3("oktay");
echo $karşılama;


?>