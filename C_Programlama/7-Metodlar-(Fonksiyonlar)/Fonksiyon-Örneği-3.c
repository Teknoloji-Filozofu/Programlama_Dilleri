#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int ekle(int, int);

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int x,y;
	
	printf("\n 7'ye eklenecek sayıyı giriniz : ");
	scanf(" %d ",&x);
	
	y=ekle(x, 7);
	
	printf("\n Sonuç : %d ",y);
	
	system("PAUSE");
	return 0;
}

int ekle(int a,int b){

	int g;
	g=a+b;
	
	return g;
}
