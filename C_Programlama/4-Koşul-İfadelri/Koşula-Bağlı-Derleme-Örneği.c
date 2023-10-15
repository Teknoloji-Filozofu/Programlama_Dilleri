#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAK01 20
#define MAK02 50

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	#if MAK01<MAK02
		printf("MAK01 değeri MAK02 değerinden küçüktür.\n");
		printf("MAK01 değeri: %d\nMAK02 değeri: %d\n", MAK01, MAK02);
	#endif

	#if MAK01>MAK02
		printf("MAK01 değeri MAK02 değerinden büyüktür.\n");
		printf("MAK01 değeri: %d\nMAK02 değeri: %d\n", MAK01, MAK02);
	#endif
	
	system("PAUSE");
	return 0;
}
