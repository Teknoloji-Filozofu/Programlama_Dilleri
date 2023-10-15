#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>  //setlocale()

int main(int argc, char *argv[]){
 
    setlocale(LC_ALL, "Turkish"); // Türkçe karakter desteği 
    float a,x,e,b,y;
   
    printf(" Karakökü bulunacak sayıyı giriniz : ");
    scanf(" %f ",&a);

    printf(" Tahmini karakökü giriniz : ");
    scanf(" %f ",&x);

    printf(" Kabul edilebilir hatayı giriniz : ");
    scanf(" %f ",&e);

    printf("\n \n   sayı    Tahkök     hata      b       y");
    printf("----------------------------------------------");
    printf("\n      %f       %f        %f  ",a,x,e);


A4: 
 
    b=(a-x*x)/(2*x); // fark (hata) değeri olan b'yi hesapla
    y=x+b;   // daha yakın karakök değerini (y) hesapla 

    printf("\n      %f     %f    %f    %f  ",x,e,b,y);

    if(fabs(b)<=e)
        goto A9;  // eğer mutlak(b)<=e ise iterasyon durdurmak için A9 a git

    else
    	x=y;  // y yeni karakök değerini x değişkenine ata 


   goto A4; // işlemi yeni x tahmini ile tekrarlamak için A4'e git

A9:
  
   printf("\n --------------------------------------------");
   printf("\n\t Karakök= %f \n\n",y); // en son hesaplanan karakök değerini (y)
                                      // ekrana yaz 



   system("PAUSE");
   return 0;
 }