#include<stdio.h>
#include<locale.h>


int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");
	system("cls");

	int a,b,c;

	printf(" a değerini giriniz : ");
	scanf(" %d ",&a);

	printf(" b değerini giriniz : ");
	scanf(" %d ",&b);

	printf("\n");

	if(a<100 && b<100){

	    c = a*a+b;

	    printf(" c değeri : %d \n",c);
	}

	else
	    printf(" Sayılardan en az biri uygun değildir. \n");

	system("PAUSE");
	return 0;
}
