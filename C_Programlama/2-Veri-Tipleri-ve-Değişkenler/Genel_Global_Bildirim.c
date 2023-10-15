#include<stdio.h>   /* Önişlemci Komutları */

    int m,n;          /* Genel Bildirim */ 

void kare(void);   /* Fonksiyon Bildirimi */ 

int main(){        /* Ana Fonksiyon */

    m=7;

    kare();

    printf(" %d nin karesi = %d dir.",m,n);

}

void kare(void){    /* Fonksiyon */

	n=m*m;
}

/*
Genel (global) değişken bütün fonksiyonların dışında bildirilir.
Bir değişken program boyunca sürekli kullanılıyor ise genel 
bildirilmedir.Böyle bir değişken yerel olarak bildirilirse, 
kullanacağı her fonksiyona gönderilmesi gerekir.
Bu da gereksiz parametre aktarımına sebep olur. 
*/ 

