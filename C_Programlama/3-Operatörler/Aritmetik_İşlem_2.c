#include<stdio.h>

int main(){
	
    int m=10, n=2, t,a,a2,b;

    t=m+n;

    a=m++;       /* once a=m sonra m=m+1 */

    a2=--m;      /* once m=m-1 sonra a2=m */

    b=m/2; 

    ++m;        /* m=m+1 */ 

   printf("m= %d, t= %d, a= %d, a2= %d, b= %d",m,t,a,a2,b);
}