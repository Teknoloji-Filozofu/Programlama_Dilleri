#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.141593

int main(){

	setlocale(LC_ALL, "Turkish");

	const int MAX = 100;
	char c = 'a';
	char *s = "Bu bir sicim";
	int i = 22;
	float f = 33.3; 
	double d = 44.4;
	
	printf("PI = %lf \n",PI);
	printf("MAX= %d \n", MAX);
	printf("c  = %c \n", c);
	printf("s  = %s \n", s);
	printf("i  = %d \n", i);
	printf("f  = %f \n", f);
	printf("d  = %lf \n",d);
	
	system("PAUSE");
	return 0;
}
