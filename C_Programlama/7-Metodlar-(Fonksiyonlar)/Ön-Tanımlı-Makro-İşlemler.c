#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	printf("File :%s\n", __FILE__ );
	printf("Date :%s\n", __DATE__ );
	printf("Time :%s\n", __TIME__ );
	printf("Line :%d\n", __LINE__ );
	printf("ANSI :%d\n", __STDC__ );
	
	system("PAUSE");
	return 0;
}
