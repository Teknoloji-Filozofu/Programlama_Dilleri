#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	struct{
		int yil;
		int ay;
		int gun;
	}dogum_gunu;

int main(void){
	
	setlocale(LC_ALL, "Turkish");
	
	int a;

	//printf("%d", sizeof(dogum_gunu));

	a=9;

	dogum_gunu.yil = 1985;
	dogum_gunu.ay = 10;
	dogum_gunu.gun = 12;

	//scanf("%d", &dogum_gunu.yil);

	printf("%d %d %d", dogum_gunu.gun, dogum_gunu.ay, dogum_gunu.yil);
	
	system("PAUSE");
	return 0;
}
