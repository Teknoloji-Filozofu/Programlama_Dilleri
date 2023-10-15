#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	struct{
		int gun;
		int ay;
		int yil;
	}tarih;

	int a;

	printf("gun ay ve yil giriniz:");
	scanf("%d %d %d", &tarih.gun, &tarih.ay, &tarih.yil);

	printf("girdiginiz tarih: %d.%d.%d", tarih.gun, tarih.ay, tarih.yil);

	system("PAUSE");
	return 0;
}
