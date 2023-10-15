#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define SIZE  100

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char str[SIZE];
	int ch;
	int index = 0;
	
	printf("\n Bir yazı giriniz : ");
	printf("\n\n");
	
	while((ch = getchar()) != '\n')
		str[index] = '\0';
		
	system("PAUSE");
	return 0;
}
