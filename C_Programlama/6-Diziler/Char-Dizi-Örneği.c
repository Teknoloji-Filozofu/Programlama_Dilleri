#include<string.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

char c1[50], c2[20];

int main(int argc, char *argv[]){

  setlocale(LC_ALL, "Turkish");

  printf("Bir karakter dizisi giriniz (20 karakterden az): ");
  scanf(" %s ",&c1[50]);

  printf("Bir karakter dizisi giriniz (20 karakterden az): ");
  scanf(" %s ",&c2[20]);

  printf("\n %s  %s\n", c1, c2);
  
  printf("Karakter dizilerinin uzunlukları : %d %d \n", strlen(c1), strlen(c2));
  // strlen() fonksiyonu ile dizinin uzunluğunu öğreniriz 

  if (!strcmp(c1, c2))
    printf("Karakter dizileri birbirine eşittir!");
    
    /* strcmp() fonksiyonu ile c1 ve c2 dizileri karşılaştırılır ve eşir ise strcmp() fonksiyonu 0 değerini geri verir. Eğer cdizi1 karakter dizisi cdizi2 karakter dizisinden küçük ise 0'dan küçük bir değer, büyük ise 0'dan büyük bir değer geri verir. */

  else printf("Karakter dizileri birbirine eşit değildir!");
  
  strcat(c1, c2);
  printf("\n %s \n", c1);

  /* strcat() fonksiyonu cdizikaynak ile gösterilen karakter dizisini cdizihedef adlı karakter dizisinin sonuna ekler. strcat() fonksiyonu kullandığı dizi ile ilgili sınır kontrolü yapmadığından, dizi boyutunu tanımlarken, diziye eklenecek karakter dizilerinin boyutları dahil olmak üzere, karakter dizisinin azami boyutunun dikkate alınması gerekir. strcat() fonksiyonu cdizihedef karakter dizisinin bellek adresini geri verir. */

  strcpy(c1, c2);
  printf("\n %s \n", c1);

  /* strcpy() fonksiyonu cdizikaynak ile gösterilen karakter dizisini cdizihedef ile gösterilen karakter dizisine kopyalar. Eğer cdizihedef dizisi içinde mevcut bir karakter dizisi varsa üzerine yazılır. Yani, cdizihedef dizininde yer alan önceki karakter dizisi silinir. Fonksiyon cdizihedef karakter dizininin bellek adresini geri verir. */
  
  system("PAUSE");
  return 0;
}
