 <?php
 
// html varlıklarını karakterlere dönüştürür
 

$str = '&lt;a href=&quot;https://www.google.com';
echo html_entity_decode($str);
?> 
