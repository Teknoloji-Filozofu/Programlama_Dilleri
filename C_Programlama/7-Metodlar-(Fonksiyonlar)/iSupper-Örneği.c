#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int ch;
	
	printf("\n Bir karakter giriniz : ");
	ch=getchar();
	
	if(isupper(ch))
		printf("\n %c büyük harf! ",ch);
	else
		printf("\n %c büyük harf değildir. ",ch);
		
	system("PAUSE");
	return 0;
}
