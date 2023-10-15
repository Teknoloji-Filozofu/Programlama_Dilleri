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
		
	struct kisi kisiler[3] = {{{10,10,1999}, "ali"}, {{10,10,1998}, "veli"}, {{10,10,1997}, "ayse"}};
	
	int i=0;
/*
	for(i=0;i<3;i++){
		printf("%d %d %d - %s\n", kisiler[i].dg.gun, kisiler[i].dg.ay, kisiler[i].dg.yil, kisiler[i].isim);
}
*/
	struct kisi *kisiptr;

	kisiptr = &kisiler[0];
	//kisiptr = kisiler;

	for(i=0;i<3; i++){
		printf("%d %d %d - %s\n", (kisiptr+i)->dg.gun, (kisiptr+i)->dg.ay, (kisiptr+i)->dg.yil, (kisiptr+i)->isim);
		//printf("%d\n", kisiptr->dg.gun);
		//kisiptr++;
  }
  
  system("PAUSE");
  return 0;
}
