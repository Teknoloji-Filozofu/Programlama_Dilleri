#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

long int us(int, int);
int x,n;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	printf("\n Sayıyı giriniz : ");
	scanf(" %d ",&x);
	
	printf("\n Üssü giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n %d^%d = %1d \n",x,n,us(x,n));
	
	system("PAUSE");
	return 0;
}

long int us(int a, int b){

	long int g;
	
	if(b>1)
		g=a*us(a,a-1);
	else
		g=x;
	
	return g;
}
