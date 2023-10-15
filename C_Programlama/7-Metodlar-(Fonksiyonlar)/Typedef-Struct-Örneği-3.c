#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	typedef struct{
		int gun;
		int ay;
		int yil;
}tarih;

	typedef struct{
		char isim[40];
		int kimlik;
		tarih dogumtarihi;
}kisibilgileri;

	int main(){
		
	setlocale(LC_ALL, "Turkish");
		
	kisibilgileri *kisi;

	kisi = malloc(sizeof(kisibilgileri));

	kisi->kimlik = 12345;

	kisibilgileri *kisiler;

	kisiler = malloc(10 * sizeof(kisibilgileri));

	(kisiler+2)->kimlik = 123456;

	system("PAUSE");
	return 0;

}
