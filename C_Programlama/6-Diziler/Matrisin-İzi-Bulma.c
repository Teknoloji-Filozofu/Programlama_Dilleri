#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

double iz(double a[][3], int);

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	double a[3][3], izA;
	int i,j;
	
	puts("\n Matrisi giriniz : ");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf(" %1f ",&a[i][j]);
			
	izA = iz(a,3);
	
	printf("\n Matrisin izi = %1f \n",izA);
	
	system("PAUSE");
	return 0;
}

double iz(double a[][3], int n){

	int i;
	double toplam = 0.0;
	
	for(i=0;i<n;i++)
		toplam += a[i][i];
		
	return toplam;
}
