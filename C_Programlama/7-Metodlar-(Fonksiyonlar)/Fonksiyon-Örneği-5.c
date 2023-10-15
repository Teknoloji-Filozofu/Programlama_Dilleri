#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

long int fakt(int);
int x;

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 printf("\n Sayıyı giriniz : ");
	 scanf(" %d ",&x);
	 
	 printf("\n %d! = %1d \n",x,fakt(x));
	 
	 system("PAUSE");
	 return 0;
}

long int fakt(int a){

	long int g;
	
	if(a>1)
		g=a*fakt(a-1);   /* n!=n*(n-1)   */
	else
		g=1;
		
	return g;
}

/*
long int fakt(int a){

	if(a<=1)
		return 1;
	else
		return a*fakt(a-1);
}
*/
