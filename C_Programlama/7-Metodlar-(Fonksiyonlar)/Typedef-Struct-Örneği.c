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

	printf("%d.%d.%d", t1.dogumtarihi.gun, t1.dogumtarihi.ay, t1.dogumtarihi.yil);

	system("PAUSE");
	return 0;
}
