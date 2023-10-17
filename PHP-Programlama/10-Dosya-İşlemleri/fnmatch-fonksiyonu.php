<?php 

// bir dize veya dosya adının belirtilen kabuk joker deseniyle eşleşip eşleşmediğini denetler


$txt = "My car is a dark color";
if (fnmatch("*col[ou]r",$txt))
  {
  echo "hmm...";
  }

?> 
