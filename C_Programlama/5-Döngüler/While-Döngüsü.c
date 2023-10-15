#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int sayac=1,n;

	printf("\n Kaça kadar sayalım : ");
    scanf(" %d ",&n);

    while(sayac <= n){

        printf("  %d  ",sayac);
        sayac++;
  }

  printf(" \n\n ");

  system("PAUSE");
  return 0;
}
/*
"while" dögü yapısı için örneği
*/