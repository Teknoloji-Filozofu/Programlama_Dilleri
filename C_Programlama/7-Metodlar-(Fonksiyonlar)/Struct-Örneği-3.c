#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	struct dogum_gunu{
		int yil;
		int ay;
		int gun;
};

	int main(void){
	
	setlocale(LC_ALL, "Turkish");
	
	int a=19;

	struct dogum_gunu ali;
	struct dogum_gunu hasan = {1987, 12, 12};

	ali.ay=12;
	ali.gun = 10;
	ali.yil =1999;

	printf("%d %d %d \n", ali.gun, ali.ay, ali.yil);
	printf("%d %d %d", hasan.gun, hasan.ay, hasan.yil);
	
	system("PAUSE");
	return 0;

}
