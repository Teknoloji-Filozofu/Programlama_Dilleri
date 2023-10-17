 <?php

$renk = "kırmızı";

switch ($renk){
    case "kırmızı":
        echo "Favori renginiz kırmızı!";
        break;
    case "mavi":
        echo "Favori renginiz mavi!";
        break;
    case "yeşil":
        echo "Favori renginiz yeşil!";
        break;
    default:
        echo "Favori renginiz kırmızı, mavi veya yeşil değil!";
}

$not = 53;

switch ($not){
    case $not<=100 && $not>=95:
        echo "AA";
        break;
    case $not<=94 && $not>=90;
        echo "AB";
        break;
    case $not<=89 && $not>=80;
        echo "BB";
        break;
    case $not<=79 && $not>=70;
        echo "BC";
        break;
    case $not<=69 && $not>=60;
        echo "CC";
        break;
    case $not<=59 && $not>=50;
        echo "CD";
        break;
    case $not<=49 && $not>=40;
        echo "DD";
        break;
    default:
        echo "FF";
        break;
}

?> 