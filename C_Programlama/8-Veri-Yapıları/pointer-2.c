#include<stdio.h>

int main (){
	
	int ogrenciNotlari[3] = {55, 70, 90};
	
	printf("ogrencinin ilk notu: %d\n", ogrenciNotlari[0]);
	
	int *ptr = ogrenciNotlari; // &ogrenciNotlari[0]
	
	printf("ogrenciNotlari adres degeri: %d\n", ptr);
	printf("ogrenciNotlari ikinci adres degeri: %d\n", ptr+1);
	printf("ogrenciNotlari ucuncu adres degeri: %d\n", ptr+2);
	
	
	printf("ogrenciNotlari ilk deger: %d\n", *ptr);
	printf("ogrenciNotlari ikinci deger: %d\n", *(ptr+1));
	printf("ogrenciNotlari ucuncu deger: %d\n", *(ptr+2));
	return 0;
}
