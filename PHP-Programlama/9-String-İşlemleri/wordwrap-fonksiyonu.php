 <?php
 
// bir dizeyi belirli bir uzunluğa ulaştığında yeni satırlara sarar


$str = "An example of a long word is: Supercalifragulistic";
echo wordwrap($str,15,"\n");
?> 
