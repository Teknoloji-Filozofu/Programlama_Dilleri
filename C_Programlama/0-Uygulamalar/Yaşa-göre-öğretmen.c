#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int yas;

    printf(" Öğrencinin yaşı? : ");
    scanf(" %d ",&yas);

    printf(" \n ");

    if((yas >= 1) && (yas <= 3))
    	printf(" Pınar öğretmen ");
    else if(yas == 4)
    	printf(" Aylin öğretmen ");
    else if(yas == 5)
    	printf(" Ceyda öğretmen ");
    else if((yas < 1) || (yas > 5))
    	printf(" Bu yaş için öğretmen yok! ");

    // getch();

    return 0;
}
/* 
Bir kreşe kayıt edilen öğrencilere yaşlarına göre öğretmen atayan program
*/