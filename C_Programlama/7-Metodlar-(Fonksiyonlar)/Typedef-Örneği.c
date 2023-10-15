#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef int tms;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	tms id;

  id = 21;

  printf("%d", id);
	
	system("PAUSE");
	return 0;
}
