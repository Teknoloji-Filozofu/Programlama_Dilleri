#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	/* Verilen diziyi ekrana yazdiran fonksiyon */
void dizi_yazdir(int dizi[], int boyut){

	int i;
	
	for (i = 0; i < boyut; i++){
		printf("%d \t", dizi[i]);
}
	printf("\n");
}

	/* Araya sokarak siralama fonksiyonu */
void araya_sokarak_siralama(int dizi[], int boyut){

	int i, j, anahtar;
	
	for (i = 1; i < boyut; i++){
		anahtar = dizi[i];
		j = i - 1;
		// anahtardan buyuk olanlari dizide bir saga kaydir
		while (j >= 0 && dizi[j] > anahtar){
			dizi[j + 1] = dizi[j]; 
			j--;
}
		dizi[j + 1] = anahtar;
		printf("\n %d. adim: ", i);
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
	araya_sokarak_siralama(sirasiz_dizi, boyut);

	system("PAUSE");
	return 0;
}
