#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	/* Verilen diziyi ekrana yazdiran fonksiyon */
void dizi_yazdir(int dizi[], int boyut){

	int i;
	
	for (i = 0; i < boyut; i++){
		printf("\n %d \t" , dizi[i]);
 }
}

	/* Secmeli siralama fonksiyonu */
void secmeli_siralama(int dizi[], int boyut){

	int i, j, enkucukyer, gecici;
	
	for (i = 0; i < boyut - 1; i++){
		// ilk elemani en kucuk olarak ata
		enkucukyer = i;
		// dizinin o anki en kucuk elemanini bul
		for (j = i + 1; j<boyut; j++){
			if (dizi[j] < dizi[enkucukyer]){
				enkucukyer = j;
}
} 
	if (enkucukyer != i){
		printf(" Yer degistirdi: [ %d, %d ] \n", dizi[i],
		dizi[enkucukyer]);
		// en kucuk elemani i. eleman ile degistir
		int gecici = dizi[enkucukyer];
		dizi[enkucukyer] = dizi[i];
		dizi[i] = gecici;
}
	printf("\n %d. adim: ", i + 1);
	dizi_yazdir(dizi, boyut);
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
	secmeli_siralama(sirasiz_dizi, boyut);
	
	system("PAUSE");
	return 0;
}
