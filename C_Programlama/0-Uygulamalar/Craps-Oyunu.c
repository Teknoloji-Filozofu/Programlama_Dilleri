#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define NKEZ  1000000

int zar_at(){

	int zar1 = rand() % 6 + 1;
	int zar2 = rand() % 6 + 1;
	
	return zar1 + zar2;
}

/* Oyuncu kazanırsa 1 değerine, oyuncu kaybederse 0 değerini geri döner */

int oyun(){

	int zar_toplam;
	
	zar_toplam = zar_at();
	
	switch(zar_toplam){
		case 7 :
		case 11 : return 1;
		case 2 :
		case 3 :
		case 12 : return 0;
	}
	return oyun_devami(zar_toplam);
}

/* Oyuncu 4,5,6,8,9,10 atmışsa oyun devamı. 
	Oyuncu kazanırsa 1 değerine, oyuncu kaybederse 0 değerine geri döner. 
*/

int oyun_devami(int zar_toplam){

	int yeni_zar;
	
	for(;;){
		yeni_zar = zar_at();
		if(yeni_zar == zar_toplam)
			return 1;
		if(yeni_zar == 7)
			return 0;
	}
}

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int k;
	int kazanma_sayisi = 0;
	
	srand(time(0));
	
	for(k=0;k<NKEZ;++k)
		kazanma_sayisi+=oyun();
		
	printf("\n Kazanma olasılığı = %1f \n", (double)kazanma_sayisi/NKEZ);
	
	system("PAUSE");
	return 0;
}
