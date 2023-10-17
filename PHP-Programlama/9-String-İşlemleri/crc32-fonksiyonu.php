 <?php
 
// bir dize için 32 bitlik bir CRC (döngüsel artıklık sağlama toplamı) hesaplar
 
$str = crc32("Hello World!");
printf("%u\n",$str);
?> 
