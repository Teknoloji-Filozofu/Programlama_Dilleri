#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int sayi, kare;

	do{

	    printf("\n Bir sayı giriniz : ");
	    scanf(" %d ",&sayi);

	    kare=sayi*sayi;

	    printf(" \n Sayının karesi = %d \n ",kare);
	}
    while(sayi>0);

        printf("\n Çevrin sonlandırıldı. \n\n");

    system("PAUSE");
    return 0;
}
/*
"do...while" döngü örneği
*/