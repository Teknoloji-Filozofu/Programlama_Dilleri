 <?php

 // para birimi dizesi olarak biçimlendirilmiş vir dize döndürür

$number = 1234.56;
setlocale(LC_MONETARY,"tr_TR");
echo money_format("PARA  %i", $number);
?> 
