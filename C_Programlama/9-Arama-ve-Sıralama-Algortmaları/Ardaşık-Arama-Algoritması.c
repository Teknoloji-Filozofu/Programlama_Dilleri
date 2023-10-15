#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void ardisik_arama(int dizi[], int boyut, int aranan){

	int i;

	for (i = 0; i < boyut; i++){
		if (dizi[i] == aranan){
			printf(" %d sayisi, dizinin %d. konumundadir. \n",aranan, i + 1);
			break;
  }
}
	if (i == boyut)
		printf(" %d sayisi dizide bulunamadi. \n", aranan);
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int aranan1 = 11, aranan2 = 8;
	int dizi[] = { 10, 14, 11, 26, 16 };
	
	// Dizinin eleman sayisi tespit ediliyor
	int boyut = sizeof(dizi) / sizeof(int);
	ardisik_arama(dizi, boyut, aranan1);
	ardisik_arama(dizi, boyut, aranan2);
	
	system("PAUSE");
	return 0;
}
