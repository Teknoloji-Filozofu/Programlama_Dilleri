
<?php 

# strlen()  ---> karakter sayısını verir
echo strlen("Hello world!");


#str_word_count()  ---> kelime sayısını 
echo str_word_count("Hello world!");


#strrev()  ---> tersten yazdırır
echo strrev("Hello world!");


#strpos() --> bir dize içindeki belirli bir metni arar. Bir eşleşme bulunursa, işlev ilk eşleşmenin karakter konumunu döndürür. Eşleşme bulunmazsa YANLIŞ döndürür.
echo strpos("Hello world!", "world");


#str_replace ---> world kelimesini dolly ile değiştiriyoruz
echo str_replace("world", "Dolly", "Hello world!");


?>
