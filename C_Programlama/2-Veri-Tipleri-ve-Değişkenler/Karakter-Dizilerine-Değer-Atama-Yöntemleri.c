#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char cdizi1[11] = "Bilgisayar";
	char cdizi2[] = "Bilgisayar";
	char cdizi3[11] = { 'B', 'i', 'l', 'g', 'i', 's', 'a', 'y', 'a', 'r', '\0' };
	char cdizi4[11];
	char cdizi5[11];

	cdizi4[0] = 'B';
	cdizi4[1] = 'i';
	cdizi4[2] = 'l';
	cdizi4[3] = 'g';
	cdizi4[4] = 'i';
	cdizi4[5] = 's';
	cdizi4[6] = 'a';
	cdizi4[7] = 'y';
	cdizi4[8] = 'a';
	cdizi4[9] = 'r';
	cdizi4[10] = '\0';

	strcpy(cdizi5, "Bilgisayar");

	printf("%s\n", cdizi1);
	printf("%s\n", cdizi2);
	printf("%s\n", cdizi3);
	printf("%s\n", cdizi4);
	printf("%s", cdizi5);
	
	system("PAUSE");
	return 0;
}
