#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	struct dogum_gunu{
		int gun;
		int ay;
		int yil;
};

	struct kisi{
		struct dogum_gunu dg;
		char isim[30];
};

	int main(void){

	setlocale(LC_ALL, "Turkish");
	
	struct kisi kisi1 = {{10,10,1999}, "ali"};

	printf("%d %d %d - %s\n", kisi1.dg.gun, kisi1.dg.ay, kisi1.dg.yil, kisi1.isim);
	
	system("PAUSE");
	return 0;
}
