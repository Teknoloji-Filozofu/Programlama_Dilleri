#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	/* Verilen diziyi ekrana yazdiran fonksiyon */
void dizi_yazdir(int dizi[], int boyut){

	int i;
	
	for (i = 0; i < boyut; i++){
		 printf("\n %d \t", dizi[i]);
 }
}

	/* Bölümleme algoritması içeren fonksiyon*/
int bolumle(int dizi[], int ilk, int son){

	int i = ilk;
	int j = son;
	int gecici;
	int pivot = dizi[(ilk + son) / 2];
	
	while (i <= j){
		while (dizi[i] < pivot) i++;
		while (dizi[j] > pivot) j--;
		if (i <= j){
			gecici = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = gecici;
			i++;
			j--;
 }
}
	return i;
}

void hizli_siralama(int dizi[], int ilk, int son){

	int konum = bolumle(dizi, ilk, son);
	
	if (ilk < konum - 1){
		hizli_siralama(dizi, ilk, konum - 1);
}
	if (konum < son){
		hizli_siralama(dizi, konum, son);
 }
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
	
	hizli_siralama(sirasiz_dizi, 0, boyut - 1);
	printf("\n Sirali: ");
	dizi_yazdir(sirasiz_dizi, boyut);
	printf("-----------------------------------------\n");

	system("PAUSE");
	return 0;
}
