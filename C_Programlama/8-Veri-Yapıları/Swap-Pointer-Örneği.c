#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define SIZE  100

void swap(int x, int y){

	int temp = x;
	x = y;
	y = temp;
}

void swap2(int *p1, int *p2){

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int a=10;
	int b=20;
	
	swap(a,b);
	printf("\n a= %d \n b=%d ",a,b);
	
	swap2(a,b);
	printf("\n a=%d \n b=%d ",a,b);
	

}
