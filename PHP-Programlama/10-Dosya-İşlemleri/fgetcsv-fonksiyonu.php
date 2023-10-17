<?php 

// CSV alanlarını kontol ederek açık bir dosyadan bir satırı ayrıştırır

$file = fopen("contacts.csv","r");
print_r(fgetcsv($file));
fclose($file);

?> 
