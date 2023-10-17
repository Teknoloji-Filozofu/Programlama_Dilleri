<?php 

$araba1 = ["Opel",1.2,90];

###############################################################################

$arabalar = [
    ["Opel",1.2,90],
    ["Ford" ,1.4,95],
    ["Audi",2.0,130]
];

foreach ($arabalar as $araba){
    echo $araba[0];
    echo "\n";
    //echo <br>;
}

echo $arabalar[0][0];

################################################################################

$arabalar1 = [
    ["marka"=>"Opel","hacim"=>1.2,"güç"=>90],
    ["marka"=>"Ford","hacim"=>1.4,"güç"=>95],
    ["marka"=>"Audi","hacim"=>2.0,"güç"=>130]
];

foreach ($arabalar1 as $arabaa) {
    echo $arabaa["güç"];
    echo "\n";
    //echo <br>;
};

###############################################################################

$meyveler = array('elma' => 3,
                  'armut' => 4.5,
                  'şeftali' => 2 
);

echo $meyveler['elma'];

##############################################################################

$dersler = array("Matematik",
                 "Fizik",
                 "Geometri",
                 "Biyoloji",
                 "Kimya"
);

echo $dersler[1];

############################################################################

$meyveler2 = array('Kiraz' => array('kiraz','bursa',10),
                   'Elma'  => array('elma','manisa',20),
                   'Karpuz' => array('karpuz','diyarbakır',30)
);

echo $meyveler2['Elma'][2];

############################################################################

$meyveler3 = array('Kiraz' => array('adı'=>'kiraz','şehir'=>'bursa','ton'=>10),
                   'Elma'  => array('adı'=>'elma','şehir'=>'manisa','ton'=>20),
                   'Karpuz' => array('adı'=>'karpuz','şehir'=>'diyarbakır','ton'=>30)
);


echo $meyveler3['Kiraz']['şehir'];

$meyve = "Karpuz";

echo "Meyve adı: " . $meyveler3[$meyve]['adı']."\n";
echo "Meyve şehiri: " . $meyveler3[$meyve]['şehir']."\n";
echo "Meyve tonu: " . $meyveler3[$meyve]['ton']."\n";

$meyve = "Kiraz";

echo "Meyve adı: " . $meyveler3[$meyve]['adı']."\n";
echo "Meyve şehiri: " . $meyveler3[$meyve]['şehir']."\n";
echo "Meyve tonu: " . $meyveler3[$meyve]['ton']."\n";

$meyve = "Elma";

echo "Meyve adı: " . $meyveler3[$meyve]['adı']."\n";
echo "Meyve şehiri: " . $meyveler3[$meyve]['şehir']."\n";
echo "Meyve tonu: " . $meyveler3[$meyve]['ton']."\n";


?>