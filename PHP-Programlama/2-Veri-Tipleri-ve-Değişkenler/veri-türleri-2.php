<?php 

	$sayi  = 5;
	print("Birinci değişkenin adı: \$sayi \n");
	print("Değeri : ");
	print "$sayi \n";
	print("Türü : ");
	print gettype( $sayi ) ; //tamsayi/integer
	print "\n";
	print "\n";

	$alfanumerik  = "Şahika";
	print "İkinci değişkenin adı: \$alfanumerik \n";
	print "Değeri : ";
	print "$alfanumerik \n";
	print("Türü : ");
	print gettype( $alfanumerik ) ; //alfanümerik/string
	print "\n";
	print "\n";

	$ondalik  = 5.1234;
	print "Üçüncü değişkenin adı: \$ondalik \n";
	print "Değeri : ";
	print "$ondalik \n";
	print("Türü : ");
	print gettype( $ondalik ) ; //çift,ondalık/double
	print "\n";
	print "\n";

	$mantiksal  = false;
	print "Üçüncü değişkenin adı: \$mantiksal \n";
	print "Değeri : ";
	print "$mantiksal \n";
	print("Türü : ");
	print gettype( $mantiksal ) ; //mantıksal/boolean
	print "\n";
	print "\n";

?>
