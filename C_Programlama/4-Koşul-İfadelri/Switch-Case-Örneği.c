#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish"); // Türkçe karakter desteği 

	char a;

	printf("\n 1-5 arası bir rakam giriniz:");
	scanf(" %c ",&a);

    switch (a){

    	case '1' : printf("\n Çok zayıf \n");

    	case '2' : printf("\n Zayıf \n");

    	case '3' : printf("\n Orta \n");

    	case '4' : printf("\n İyi \n");

    	case '5' : printf("\n Pekiyi \n");

    	default : printf("\n Yanlış seçim \n");
    }

    system("PAUSE");
    return 0;

}
/* 
switch case örneği 
*/