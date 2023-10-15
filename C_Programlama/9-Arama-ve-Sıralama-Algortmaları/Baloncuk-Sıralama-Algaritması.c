#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void dizi_yazdir(int dizi[], int boyut){
	
	int i;
	
	for (i = 0; i < boyut; i++){
		printf(" \n %d \t" , dizi[i]);
  }
}

void baloncuk_siralamasi(int dizi[], int boyut){
 
	int i, j, gecici;
	
	for (i = 0; i < (boyut - 1); i++){
		for (j = 0; j < boyut - i - 1; j++){
			if (dizi[j] > dizi[j + 1]){
				// yer degistirme islemi
				gecici = dizi[j];
				dizi[j] = dizi[j + 1]; 
				dizi[j + 1] = gecici;
}
	printf("\n Adim %d.%d: ", i + 1, j + 1);
	dizi_yazdir(dizi, boyut);
}
}
	printf("-----------------------------------------\n");
	printf("\n Sirali: ");
	dizi_yazdir(dizi, boyut);
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int aranan;
	int sirasiz_dizi[] = { 21, 13, 9, 12, 4 };
	
	// Dizinin eleman sayisi tespit ediliyor
	int boyut = sizeof(sirasiz_dizi) / sizeof(int);
	
	printf("\n Sirasiz: ");
	dizi_yazdir(sirasiz_dizi, boyut);
	printf("-----------------------------------------\n");
	baloncuk_siralamasi(sirasiz_dizi, boyut);

	system("PAUSE");
	return 0;
}
