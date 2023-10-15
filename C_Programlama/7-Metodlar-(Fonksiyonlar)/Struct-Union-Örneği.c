#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

	struct dogum_gunu{
		int gun;
		int ay;
		int yil;
};

	union kisi{
		char isim[50];
		int yil;
		float f;
};

	int main(void){
		
	setlocale(LC_ALL, "Turkish");
		
	typedef struct dogum_gunu dg_s;

	printf("%d\n", sizeof(dg_s));
	printf("%d\n", sizeof(union kisi));

	union kisi a;

	a.yil = 2019;
	a.f = 12.8;
	strcpy(a.isim, "ali");

	printf("%d\n", sizeof(a));
	printf("%d\n", a.yil);
	printf("%f\n", a.f);
	printf("%s\n", a.isim);

	system("PAUSE");
	return 0;
}
