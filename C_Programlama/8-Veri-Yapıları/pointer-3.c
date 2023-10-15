#include<stdio.h>

int main(){
	
	int sayilar[5],i,j,toplam = 0;
	int *ptr;
	int sonuc = 0;
	printf("Lutfen 5 tane deger giriniz: \n");
	for(i = 0;i<5; i++ ){
		scanf("%d", &sayilar[i]);
	}
	ptr = &sayilar[0]; // sayilar

	for(j = 0; j<5 ; j++){
		toplam = toplam + *ptr;
		ptr++;
	}
	
	sonuc = toplam / 5;
	printf("girilen sayilarin aritmetik ortalamasi: %d \n", sonuc);

	return 0;
}
