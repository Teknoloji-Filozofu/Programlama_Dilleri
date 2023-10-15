// Haftalık gelir hesaplama

#include<stdio.h>
#include<locale.h>   // setlocale()
//#include<conio.h>   // ekran bekletme

int main(){

  //setlocale(LC_ALL, "Turkish"); 
  // Türkçe karakter desteği sağlanıyor 

  float haftalik, yillik;

  printf(" Yıllık geliriniz nedir? "); 
  // kullanıcıya mesaj 
  scanf("%f",&yillik);

  haftalik= yillik/52;   
  // haftalık gelir hesaplanır 

  printf(" \n Haftalık geliriniz %.2f TL", haftalik);

 // getch(); 
  return 0;
}