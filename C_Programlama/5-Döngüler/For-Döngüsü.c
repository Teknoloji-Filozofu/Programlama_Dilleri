#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<conio.h>

int main(){

	setlocale(LC_ALL, "Turkish");
	//system("cls");


	int i, n, faktoriyel=1;

	printf(" Faktoriyel alınacak sayıyı giriniz : ");
	scanf(" %d ",&n);

	for(i=1; i<=n; i++){

		faktoriyel*=i;    // faktoriyel=faktoriyel*1
		// tek satır olduğu için parantezler kullanılmayabilirdi
	}

	printf(" Hesaplanan faktoriyel değeri = %d \n",faktoriyel);

	//getch();
}
