#include<stdio.h> 

int main(){

    int a,b,c;

    a=10;  /* a değişkenine 10 sayısı */ 

    b=5;    /* b değişkenine 5 sayısı */

    c=a+b; /* c değişkenine 15 sayısı */

    printf(" C nin değeri : %d \n ",c); /* ekrana 15 yazılır */ 
    c++;  /* c nin değeri 1 artırılır */

    printf(" C nin değeri : %d \n ",c); /* ekrana 16 yazılır */ 
    c--; /* c nin değeri 1 eksiltilir */

    printf(" C nin değeri : %d \n ",c); /* ekrana 15 yazılır */ 

}