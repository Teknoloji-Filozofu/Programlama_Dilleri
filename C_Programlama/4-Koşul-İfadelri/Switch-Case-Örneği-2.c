#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish"); // Türkçe karakter desteği 

	char a;

	printf("\n 1-10 arası bir rakam giriniz: \n");
	scanf(" %c ",&a);

    switch (a){

    	case '1' : 

    	case '2' : 

    	case '3' : printf("\n Çok zayıf \n");
        break;

    	case '4' : 

    	case '5' : printf("\n Zayıf \n");
        break;

        case '6' : 

        case '7' : printf("\n Orta \n");
        break;

        case '8' : 

        case '9' : printf("\n İyi \n");
        break;

        case '10' : printf("\n Pekiyi \n");
        break;

    	default : printf("\n Yanlış seçim \n");
    }

    system("PAUSE");
    return 0;

}
/* 
switch case örneği 
*/