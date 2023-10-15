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
		
	int a = 0;
	kisibilgileri t1 = {"ali duru", 12345, {1,1,1990}};

	kisibilgileri kisiler[5];

	scanf("%d %d %d", &kisiler[0].dogumtarihi.gun, &kisiler[0].dogumtarihi.ay, &kisiler[0].dogumtarihi.yil);

	kisiler[0].dogumtarihi.gun = 12;
	kisiler[0].dogumtarihi.ay = 12;
	kisiler[0].dogumtarihi.yil = 2012;

	printf("%d.%d.%d", kisiler[0].dogumtarihi.gun, kisiler[0].dogumtarihi.ay, kisiler[0].dogumtarihi.yil);

	system("PAUSE");
	return 0;
	
}
