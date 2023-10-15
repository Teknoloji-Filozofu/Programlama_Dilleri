#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char *pk, k = 'a';
	int *pt, t = 22;
	double *pg, g = 5.5;
	
	pk = &k;
	pt = &t;
	pg = &g;
	
	printf("\n Önceki adresler : pk= %p  pt= %p  pg= %p ",pk,pt,pg);
	
	pk++;
	pt--;
	pg = pg + 10;
	
	printf("\n Sonraki adresler: pk= %p  pt= %p   pg= %p ",pk,pt,pg);
	
	system("PAUSE");
	return 0;
}
