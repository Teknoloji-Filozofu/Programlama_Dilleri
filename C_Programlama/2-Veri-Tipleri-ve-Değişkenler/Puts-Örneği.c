#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");

	char name[20];
	
	printf("\n Bir isim giriniz : ");
	gets(name);
	puts(name);
	
	system("PAUSE");
	return 0;
}
