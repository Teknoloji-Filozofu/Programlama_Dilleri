 <?php
 
// yerel sayısal ve parasal biçimlendirme bilgilerini içeren vir dizi döndürür
 

setlocale(LC_ALL,"TR");
$locale_info = localeconv();
print_r($locale_info);
?> 
