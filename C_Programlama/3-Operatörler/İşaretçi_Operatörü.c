#include<stdio.h>
//#include<conio.h>  //conio.h kütüphanesi windows dos destekli giriş çıkış için
#include<stdlib.h> // system ("cls") ile ekran temizlemek için 


int main(){

    int *p, *q, n=5, m=10, g;

    g=n;

    p= &n;  // n'nin adresini p'ye atıyoruz 

    q= &m;  // m'nin adresini q'ya atıyoruz 

    *p= m;  // adresi p ile gösterilen yere (yani n) m'nin değeri atanıyor 

    *q= g;  // adresi q ile gösterilen yere (yani m) g'nin değeri atanıyor


    printf(" p= %p, n= %d, q= %p, m=%d" ,p,n,q,m);

    system("cls"); // ekran temizleme komutu 
    //getch();
}