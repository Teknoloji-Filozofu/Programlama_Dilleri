<?php 

// belirtilen dosyanın izinlerini değiştirir
// 1. sayı her zaman 0 olarak kalır
// 2. sayı sahip için izinleri belirtir
// 3. sayı sahibin kullanıcı grubu için izinleri belirtir
// 4. sayı diğer herkes için izinleri belirtir
// 1 = çalıştırma // 2 = yazma // 4 = okuma izini demek oluyor

chmod("test.txt",0600);


chmod("test.txt",0644);


chmod("test.txt",0755);


chmod("test.txt",0740);

?> 
