#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int x = 100;

	int *a;
	int **b;
	int ***c;

	a = &x;
	b = &a;
	c = &b;

	***c = 15;

	printf(" %d \n", ***c);
	printf(" %d \n", x);
	
	system("PAUSE");
	return 0;
}
