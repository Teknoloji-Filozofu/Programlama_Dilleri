#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAK01 1

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int id;

	#if MAK01 == 1
		for (id=0; id<10; id++) printf("%d ", id+1);
	#else
		for (id=10; id>0; id--) printf("%d ", id);
	#endif

	system("PAUSE");
	return 0;
}
