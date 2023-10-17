<?php 

// popen() tarafından açılan bir boruyu kapatır


$file = popen("/bin/ls","r");

pclose($file);
?>
