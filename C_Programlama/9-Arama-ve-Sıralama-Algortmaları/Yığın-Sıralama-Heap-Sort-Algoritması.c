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

void maksimuma_yiginla(int dizi[], int n, int i){
	
	// en buyuk elemani kok dugum olarak ata
	int enbuyuk = i;
	int sol = 2 * i + 1;
	int sag = 2 * i + 2;
	int gecici;
	
	// Eger sol alt agac kok dugumden buyukse
	if (sol < n && dizi[sol] > dizi[enbuyuk])
		enbuyuk = sol;
	
	// Eger sag alt agac kok dugumden buyukse
	if (sag < n && dizi[sag] > dizi[enbuyuk])
		enbuyuk = sag;
	
	// Eger enbuyuk eleman kok dugum degilse
	if (enbuyuk != i){
		// en buyugu degistir
		gecici = dizi[i];
		dizi[i] = dizi[enbuyuk];
		dizi[enbuyuk] = gecici; 
		// Ozyinelemeli olarak fonksiyonu cagir
		maksimuma_yiginla(dizi, n, enbuyuk);
 }
}

void yigin_siralamasi(int dizi[], int boyut){
	
	int i, gecici;
	
	// Yigini olustur
	for (i = boyut / 2 - 1; i >= 0; i--)
		maksimuma_yiginla(dizi, boyut, i);
	printf("\n Yigin olustu: ");
	dizi_yazdir(dizi, boyut);
	
	 // Yiginda sira sira bir eleman cikart
	for (i = boyut - 1; i > 0; i--){
		printf("\n %d.Adim (Once): ", boyut - i);
		dizi_yazdir(dizi, boyut);
		// ilk konumdaki en buyuk degeri sonlara dogru kaydir
		gecici = dizi[0];
		dizi[0] = dizi[i];
		dizi[i] = gecici;
		printf("\n %d.Adim (Sonra): ", boyut - i);
		dizi_yazdir(dizi, boyut);
		maksimuma_yiginla(dizi, i, 0);
 }
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int aranan;
	int dizi[] = { 21, 13, 9, 12, 4 };
	
	// Dizinin eleman sayisi tespit ediliyor
	int boyut = sizeof(dizi) / sizeof(int);
	printf("\n Sirasiz: ");
	dizi_yazdir(dizi, boyut);
	
	printf("-----------------------------------------\n");
	yigin_siralamasi(dizi, boyut);
	
	printf("-----------------------------------------\n");
	
	printf("\n Sirali: ");
	dizi_yazdir(dizi, boyut);

	system("PAUSE");
	return 0;
}
