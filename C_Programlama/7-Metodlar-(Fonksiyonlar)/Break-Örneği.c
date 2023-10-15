#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){

	setlocale(LC_ALL, "Turkish");
	
	long int i,n,faktor;

	while(1) /* sonsuz döngü */{
	
	printf("Faktoriyeli hesaplanacak sayi girin : ");
	scanf("%ld",&n);
	
	if(n<0) break; /* döngüyü sonlandır */
	
	for(faktor=1, i=1; i<=n; i++)
		faktor *= i;
		
	printf("%ld! = %ld\n",n,faktor);
}
	system("PAUSE");
	return0;
}
