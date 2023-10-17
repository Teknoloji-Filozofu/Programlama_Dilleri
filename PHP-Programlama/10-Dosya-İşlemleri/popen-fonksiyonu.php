<?php 

// komut parametresinde belirtilen programa bir kanal açar


$file = popen("/bin/ls","r");

pclose($file);
?> 
