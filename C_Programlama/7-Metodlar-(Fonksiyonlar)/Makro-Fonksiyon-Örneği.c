#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define buyuk(a,b) ( (a>b) ? a:b)

	int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int x,y,eb;

	printf("iki sayı girin: ");
	scanf("%d,%d",&x,&y);

	eb = buyuk(x,y);

	printf("buyuk olan  %d\n",eb);

	system("PAUSE");
	return 0;
}
