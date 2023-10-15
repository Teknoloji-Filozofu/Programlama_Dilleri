#include <stdio.h>//Standart giriþ/çýkýþ fonksiyonlarý
#include <stdlib.h>//Dönüþüm sýralam fonksiyonlarý
#include <ctype.h>//Karakter dönüþüm ve sýnýflandýrma
#include <string.h>//Karakter kullanýmý için
#include <math.h>//Matematiksel fonksiyonlar

int tbndonusum(int grlntbn,int grlnsy){
	
	int sayac=0;
	int basamak=0;
	int donusum=0;
	
	while(grlnsy !=0){
		
		
		// verilen sayýyý son basamaðýndaki rakama bakýyoruz
		basamak=grlnsy%10; 
		
		/* girilen sayýnýn  birler basmaðýndaki rakama bakarak tabansayýsýndan  büyüklük kontrolü yapýyoruz */
		if(basamak>=grlntbn)
		return 0;
		
		grlnsy-= basamak;
		grlnsy=grlnsy/10;
		
		/* verilen sayýyý basamaklarýna ayýrýp tabandan küçük olma durumuna baktýktan sonra  çevirme iþlemini yapýyoruz */
		donusum+= basamak*(pow(grlntbn,sayac));
		sayac++;
	}
	return donusum;
}

int onalt_tbndonusum(int grlnsy){
     char diziOnAlt[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A','B', 'C', 'D', 'E', 'F'},onAltDeger[300];
     int i,j,ustDeg=0,onSay=0;
     
     //girilen degerin strlen sayesinde uzunlugu alinir ve -1 cýkarýlýr sebebi i en sifira esitlenmesi durumudur
     for(i=strlen(onAltDeger)-1; i >= 0; i--){
     	
     	//diziOnAlt[]'in icerisini gormek 
	    for(j=0; j<16; j++){
	    	
	    	//girilen deger ile diziOnAlt[] dogrulugu karsilastirilir
            if(toupper(onAltDeger[i])== diziOnAlt[j])
            
            //herseferinde 16'nin ustu alinir ve 10 luk tabani bulunur 
            onSay += j*pow(16, ustDeg);
    
                    }
                  ustDeg++;
                }
}


int main(){
	
	int grlntbn, grlnsy,sonuc;
	
	//girilecek sayýnýn hangi tabana ait olduðunu sorguluyoruz
	printf("\n gireceginiz sayi hangi sayi tabanina aittir ? \n");
	scanf("%d",&grlntbn);
	
	/* 10 luk sisteme çevrilecek sayýyý alýyoruz */
	printf("\n lutfen 10 luk sisteme cevrielecek sayiyi giriniz. \n");
    scanf("%d", &grlnsy);
    
    if(grlntbn ==16){
    	int sonuc=onalt_tbndonusum(grlnsy);
}
    else {
	    int sonuc=tbndonusum(grlntbn, grlnsy);
}
    if(sonuc=0){
    	printf(" geçersiz iþlem ");
	}
	else if(grlntbn == 16){
		printf("\n %d tabaninda girilen sayinin 10 tabaninda karsiligi %d \n",grlntbn, onalt_tbndonusum(grlnsy));
	}
	else{
		printf("\n %d tabaninda girilen sayinin 10 tabaninda karsiligi %d \n",grlntbn, tbndonusum( grlntbn,grlnsy));
	}
	return 0;
}


