#include<stdio.h>
//#include<conio.h>  //dos destekli giriş çıkış için 
#include<locale.h> // setlocale
#include<stdlib.h>  // system("cls") ile ekran temizleme işlemi


    int veri();
    float hesapla(int);
    void yaz(float);
    int sayi,n;


int main(){

    setlocale(LC_ALL, "Turkish"); // Türkçe karakter desteği 
    system("cls"); // ekran temizleme komutu 


    int i;
    float toplam;
    n=veri();
    toplam= hesapla(n);
    yaz(toplam);
}

int veri(){    // veri modülü 

    printf("\n 1'den N'e kadar olan sayıların toplamını bulan program \n");

    printf(" \n  \n ");

    printf(" N değerini giriniz ");
    scanf(" %u ",&sayi);

   return sayi;
} 

float hesapla(int n){    // hesapla modülü 

   int i;
   float t=0;

   for(i=0;i<=n;i++)
   	t=t+i;

  return t;
}

void yaz(float toplam){  //yaz modülü 

    printf(" \n ");

    printf(" sonuç : %0.0f",toplam);

    //getch();
}