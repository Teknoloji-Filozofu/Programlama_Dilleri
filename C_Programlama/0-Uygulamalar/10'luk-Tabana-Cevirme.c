#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int birdendokuza(int verilenSayi,int verilenTaban){
    
	int sayac=0;
	int tutucu =0;
	int sayiToplayici=0;
    
	while(verilenSayi!=0){
		tutucu=verilenSayi %10;
		if(tutucu>=verilenTaban)
		return 0;
        
		verilenSayi-=tutucu;
		verilenSayi=verilenSayi/10;
		sayiToplayici+=tutucu*(pow(verilenTaban,sayac));
		sayac++;
}

	return sayiToplayici;
	
}


int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");
	
	int baslaBitir=1;

	while(baslaBitir==1){

	int verilenTaban,verilenSayi,olusanSayi=0;
    
	printf("\n Hangi tabandan onluk tabana çevirmek istiyorsunuz \n");
	scanf(" %d ",&verilenTaban);
    
	printf("\n Sayiyi giriniz \n");
	scanf("%d",&verilenSayi);
    
	int sonuc=birdendokuza(verilenSayi,verilenTaban);
    
	if(sonuc==0){
		printf("\n Geçersiz veya mant?ks?z bir i?lem yapmaya çal??t?n?z \n");
		
}
	else{
        printf("\n Olusan Sayi : %d",birdendokuza(verilenSayi,verilenTaban));
 }	
}

	system("PAUSE");
	return 0;
	
}


