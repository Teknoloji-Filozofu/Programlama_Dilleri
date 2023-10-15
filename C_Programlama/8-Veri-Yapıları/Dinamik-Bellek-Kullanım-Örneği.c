#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int *dizi;
	int boyut = 5;

	//dizi = malloc(boyut * sizeof(int));
	dizi = calloc(boyut, sizeof(int));

	dizi[4] = 7;

	dizi = realloc(dizi, sizeof(int) * (boyut+5));

	dizi[7] = 98;

	printf(" %d \n", dizi[7]);

	free(dizi);

	system("PAUSE");
	return 0;
}
