<?php 
  
#diziler - array 

// bu 2 şekilde tanımlanabilir
$dizi = [];
$dizi1 = array();

$dizi2 = [" Opel ", " Renault ", " Fiat "];

echo $dizi2[0];
echo $dizi2[1];
echo $dizi2[2];

$araba = [" Opel ", 1.2 , 90];

echo $araba[0];
echo $araba[1];
echo $araba[2];


#ilişkisel diziler - associative arrays
$araba1 = ["marka"=>"Audi ",
           "hacim"=>1.2,
           "güç"=>90];

echo $araba1["marka"];
echo $araba1["hacim"];
echo $araba1["güç"];

$cars = array
  (
  array("Volvo",22,18),
  array("BMW",15,13),
  array("Saab",5,2),
  array("Land Rover",17,15)
  );

echo $cars[0][0].": Stokda: ".$cars[0][1].", satıldı: ".$cars[0][2].".\n";
echo $cars[1][0].": Stokda: ".$cars[1][1].", satıldı: ".$cars[1][2].".\n";
echo $cars[2][0].": Stokda: ".$cars[2][1].", satıldı: ".$cars[2][2].".\n";
echo $cars[3][0].": Stokda: ".$cars[3][1].", satıldı: ".$cars[3][2].".\n";
?>