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
		
	int a;
	typedef struct kisi kisi_bilgisi;

	kisi_bilgisi ali;

	ali.dg.ay = 10;

	printf("%d", ali.dg.ay);

	system("PAUSE");
	return 0;

}
