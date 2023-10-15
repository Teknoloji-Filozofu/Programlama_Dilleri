#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int a = 10;
	int *p;
	p = &a;
	a = 9;

	printf(" %d \n", a);
	printf(" %d \n", p);
	printf(" %d \n", *p);
	printf(" %d \n", &p);

	*p = 15;

	printf(" %d \n", a);
	printf(" %d \n", p);
	printf(" %d \n", *p);
	printf(" %d ", &p);
	
	system("PAUSE");
	return 0;
}
