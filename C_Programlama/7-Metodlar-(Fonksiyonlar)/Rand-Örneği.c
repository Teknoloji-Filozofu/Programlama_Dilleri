#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int k;
	
	for(k=0;k<10;++k){
		printf(" %d ", rand());
	}

	system("PAUSE");
	return 0;
}
