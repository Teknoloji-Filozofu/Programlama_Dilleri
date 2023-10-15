#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int dizi[5] = {5,7,3,2,8};
	int *ptr;
	
	printf(" %d \n", dizi[0]);

	ptr = dizi;

	printf(" %d \n", ptr[0]);
	printf(" %d \n", *ptr);
	printf(" %d \n", *ptr++);
	printf(" %d \n", *ptr);

	ptr = dizi;

	printf(" %d \n", *ptr+1);
	printf(" %d \n", (*ptr)++);
	printf(" %d \n", *ptr);

	printf(" %d \n", *(ptr+3));

	*(ptr+1) = 8;

	printf(" %d \n", dizi[1]);

	system("PAUSE");
	return 0;
}
