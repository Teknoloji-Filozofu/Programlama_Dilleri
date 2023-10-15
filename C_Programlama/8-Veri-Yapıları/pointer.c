#include<stdio.h>
int main(){
	
	int x = 77;
	printf("x degiskeninin degeri: %d \n", x);
	printf("x degiskeninin adresi: %d \n", &x);
	
	int *ptrX = &x;
	
	printf("ptrX degiskeninin gosterdigi adresin degeri: %d \n", *ptrX);
	printf("ptrX degiskeninin degeri: %d \n", ptrX);
	printf("ptrX degiskeninin adresi: %d \n", &ptrX);
	
	*ptrX = 52;
	printf("x degiskeninin degeri: %d \n", x);
	printf("x degiskeninin adresi: %d \n", &x);
	
	return 0;
}
