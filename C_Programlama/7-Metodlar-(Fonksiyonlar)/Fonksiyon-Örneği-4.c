#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void degistir(void);

int x,y;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int x,y;
	
	printf("\n Birinci sayıyı giriniz : ");
	scanf(" %d ",&x);
	
	printf("\n İkinci sayıyı giriniz : ");
	scanf(" %d ",&y);
	
	printf("\n %d  %d ,x,y");
	degistir();
	printf("\n %d   %d ",x,y);
	
	system("PAUSE");
	return 0;
}

void degistir(void){
	
	int g;
	g=x;
	x=y;
	y=g;
}
