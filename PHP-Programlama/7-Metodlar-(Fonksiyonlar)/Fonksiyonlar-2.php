<?php 

function VKE($kilo,$boy){
	$kilo_durumu = "";
	$endex = $kilo/($boy*$boy);
	
	if($endex<20){
		$kilo_durumu = "Zayıf";
	}
	elseif($endex>20 && $endex<=25){
		$kilo_durumu = "Normal";
	}
	elseif($endek>25 && $endex<=30){
		$kilo_durumu = "Kilolu";
	}
	elseif($endex>30){
		$kilo_durumu = "Obez";
	}
    return $kilo_durumu;
}

echo VKE(90,1.75);


?>