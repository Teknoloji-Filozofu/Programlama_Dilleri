#include <stdio.h>//Standart giriþ/çıkış fonksiyonları
#include <stdlib.h>//Dönüşüm sıralama fonksiyonları
#include <ctype.h>//Karakter dönüþüm ve sınıflandırma 
#include <string.h>//Karakter kullanımı için 
#include <math.h>//Matematiksel fonksiyonlar

int main(int argc, char *argv[]){
	int secim=0,onSay=0,j,ustDeg=0,m=0,n,l=1,i,s=0,x,k[20],d=0,d1,r,c=0,p,girSayi;

  char diziOnAlt[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A','B', 'C', 'D', 'E', 'F'},onAltDeger[300]; 

    //menu 
    printf("\t\t\t\t\t6 sayısı ile   16 tabanindan 10'lik tabanana başlatma ");
    
    printf("\t\t\t\t\t0 sayısı ile çıkış işemi yapma\n");
    enbasadon:

  printf("secim:",secim); 
	scanf("%d",&secim); 
	system("cls");

	switch(secim){
     
		case 6:basadon6:
		      printf("\n\n\n\n\n\t\t\t\t\t16 tabanýnda bir sayi giriniz:%c",onAltDeger[30]); 
			    scanf("%s", onAltDeger);  

                for(i=strlen(onAltDeger)-1; i >= 0; i--){//girilen degerin strlen sayesinde uzunlugu alinir ve -1 cýkarýlýr sebebi i en sifira esitlenmesi durumudur
                    for(j=0; j<16; j++){//diziOnAlt[]'in icerisini gormek 
                       if(toupper(onAltDeger[i])== diziOnAlt[j])//girilen deger ile diziOnAlt[] dogrulugu karsilastirilir
                          onSay += j*pow(16, ustDeg);//herseferinde 16'nin ustu alinir ve 10 luk tabani bulunur     
                    }
                  ustDeg++;
                }
          printf("\n\n\t\t\t\t\t16 tabaninda %s sayisinin 10 tabanininda karsiligi%d:",onAltDeger,onSay); 
				  goto basadon6; 
				  break; 
				  system("cls"); 
		
	return 0;
}
}
