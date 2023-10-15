#include<stdio.h>  /* Önişlemci Komutları */

    int kare(int);

int main(){   /* Ana Fonsiyon */

    int m,n;       /* Yerel Bildirim */

    m=7;

    n=kare(m);

    printf(" %d nin karesi = %d dir.",m,n);

} 

    int kare(int k){     /* Fonksiyon ve Formal Bildirim*/ 

    	int gecici;     /* Yerel Bildirim */ 

    	gecici=k*k;

    	return gecici;
}

/*  
Yerel (local) değişkenle kullanıldıkları fonksiyon içerisinde 
bildirilir ve yalnızca bildirildiği fonksiyon içerisinde tanınır ve
kullanılırlar.Bildirildiği fonksiyon dışında tanınmazlar. 
Yerel değişkenler içinde bildirildikleri fonksiyon programının
işlemesi sırasında yürütüldüğü anda bellekteki veri alanında yer kaplar.
*/