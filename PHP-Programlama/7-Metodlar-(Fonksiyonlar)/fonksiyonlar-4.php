<?php 

function selam_ver() {
   echo 'Selam!';
}




function rakamlar() {
   for($sayi = 0; $sayi<10; $sayi++) {
      echo $sayi;
   }
}
 
rakamlar();

///////////////////////////////////////////////////////////////////////////////////////

# Fonksiyonlara parametre ekleme

function topla($sayi1, $sayi2) {
   $sonuc = $sayi1 + $sayi2;
   echo $sonuc;
}
 
topla(5, 10);



function bolunur_mu($bu, $buna) {
   $kalan = $bu % $buna;
   if($kalan == 0) {
      echo $bu . ' sayısı ' . $buna . ' sayısına bölünür!';
   } else {
      echo $bu . ' sayısı ' . $buna . ' sayısına bölünmez! (kalan: '.$kalan.')';
   }
}
 
bolunur_mu(10, 2);
bolunur_mu(25, 10);

////////////////////////////////////////////////////////////////////////////////////

# prametrelere varsayılan değer verme

function hosgeldin($isim = 'Misafir') {
   echo 'Hoşgeldin ' . $isim . '! ';
}
 
hosgeldin();
hosgeldin('Musa');

////////////////////////////////////////////////////////////////////////////////////

# return ifadesi ile sonuç atama

function topla($sayi1, $sayi2) {
   $sonuc = $sayi1 + $sayi2;
   return $sonuc;
}
 
$hesap = topla(10, 20);
echo 'Fonksiyon ile toplama yaptık ve sonuç: ' . $hesap;

////////////////////////////////////////////////////////////////////////////////////

# Fonksiyonlarda global ifadesi kukkanımı ve örneği 

function deneme() {
   $isim = 'Musa';
}
 
deneme();
echo $isim;


$isim = 'Musa';
 
function selam() {
   global $isim; // Dışarıda tanımlanmış bir değişkeni fonksiyon içine çağırdık
   echo 'Selam ' . $isim;
}
 
selam();

/////////////////////////////////////////////////////////////////////////////////////

# Fonksiyonlarda referans ile değer atama 

function topla(&$sayi) {
   $sayi = $sayi + 10;
}
 
$x = 10;
topla($x);
echo $x;


?>
