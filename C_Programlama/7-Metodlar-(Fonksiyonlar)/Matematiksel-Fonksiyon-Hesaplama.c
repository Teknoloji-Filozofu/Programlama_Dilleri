#include<stdio.h>
#include<stdlib.h>

int main(int arrgc, char *argv[]){

	int x;

	printf(" x değeri? : ");
    scanf(" %d",&x);
    printf(" \n ");

    if(x<0)
    	printf(" f(x) = 1");

    else if((x >= 0) && (x <= 3))
    	printf(" f(x) = x+1");

    else if(x > 3)
    	printf(" f(x) = 4");

    //getch();
    return 0;

}
/*

         | 1   --> x<0 
  f(x) --| x+1 --> 0<=x<=3
         | 4   --> x>3

         fonksiyonun c kodu 
*/         