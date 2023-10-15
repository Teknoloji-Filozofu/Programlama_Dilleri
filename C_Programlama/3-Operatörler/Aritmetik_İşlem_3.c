#include<stdio.h>

int main(){

    int x,y;

    x= 10;

    y= 3;

    printf("%d", x/y);   /* ekrana 3 yazdırılıyor */

    printf("%d", x%y);   /* ekrana 1 yazdırılıyor */

    x= 1;

    y= 2;

    printf("%d  %d", x/y, x%y);  /* ekrana 3 1 yazdırılıyor */

    return 0;



}