<?php

# dosya oluşturma 

touch('merhaba.txt');

/////////////////////////////////////////////////

# dosyaları açmak ve kapatmak 
/*
r = dosyayı okumak için açar 
r+ = dosyayı hem okumak hem yazmak için açar 
w = dosyayı yazmak için açar ve var olanı siler 
w+ = dosyayı hem yazmak hem de okymak için açar var olan içeriği siler baştan yazar
a = dosyayı yazmak için açar var olanı silmez sona ekler 
a+ = dosyayı hem yazmak hem de okumak için açar var olanı silmez sonuna ekler
x = dosyayı oluşturur ve yazmak için açar dosya varsa FALSE döner 
x+ = dosyayı oluşturur hem yazmak hem okumak için açar dosya varsa FALSE döner 
*/

$dosya = fopen('merhaba.txt', 'r');
fclose($dosya);


$dosya = fopen('merhaba.txt', 'r');
$icerik = fread($dosya, filesize('merhaba.txt'));
echo $icerik;
fclose($dosya);


$dosya = fopen('merhaba.txt', 'w');
fwrite($dosya, 'Merhaba Dünya');
fclose($dosya);


for($sayi = 1; $sayi < 4; $sayi++) {
   $dosya_adi = 'Dosya' . $sayi . '.txt';
   touch($dosya_adi);
    
   $dosya = fopen($dosya_adi, 'w');
   fwrite($dosya, 'Bu ' . $sayi . '. dosyanın içeriği!');
   fclose($dosya);
}


# dosyaları silmek 


unlink('merhaba.txt');


# dosyaların varlığını kontrol etme 


if(file_exists('merhaba.txt')) {
   echo 'Dosyamız var';
} else {
   echo 'Dosyamız yok';
}

?>
