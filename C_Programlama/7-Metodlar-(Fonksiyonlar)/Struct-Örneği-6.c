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
		
	struct kisi *kisiptr;

	kisiptr = calloc(1, sizeof(struct kisi));

	kisiptr->dg.ay = 10;

	free(kisiptr);

	system("PAUSE");
	return 0;
}
