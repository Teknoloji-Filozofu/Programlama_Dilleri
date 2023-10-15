#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void ikili_arama(int dizi[], int boyut, int aranan){

	int i, ilk, son, orta;
	ilk = 0;
	son = boyut - 1;
	orta = (ilk + son) / 2;
	
	while (ilk <= son){
		printf(" Ilk: %d. eleman, Ortanca: %d. eleman, Son:%d. eleman \n", ilk + 1, orta + 1, son + 1);
		if (aranan > dizi[orta])
			ilk = orta + 1;
		else if (aranan == dizi[orta]){
			printf(" %d sayisi, dizinin %d. konumunda \n",aranan, orta + 1);
			break;
}
		else
		son = orta - 1;
		
		orta = (ilk + son) / 2;
}
	if (ilk > son)
		printf(" %d sayisi, dizide bulunamadi \n", aranan);
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int aranan1 = 14, aranan2 = 6, aranan3 = 5;
	int dizi[] = { 2, 6, 9, 12, 14, 20, 25 };
	
	 // Dizinin eleman sayisi tespit ediliyor
	int boyut = sizeof(dizi) / sizeof(int);

	printf("\n Ilk arama islemi: ");
	ikili_arama(dizi, boyut, aranan1);
	
	printf("\n Ikinci arama islemi: ");
	ikili_arama(dizi, boyut, aranan2);
	
	printf("\n Ucuncu arama islemi: ");
	ikili_arama(dizi, boyut, aranan3);

	system("PAUSE");
	return 0;
}



