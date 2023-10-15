#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	char Kar_diz1[20];
	int i=0,j,k;

	printf("\n Karakter dizinini giriniz : ");
	scanf(" %s ",Kar_diz1);

	do 
	    i++;
	while(Kar_diz1[i] != '\0');
	
	for(j=0; j<=i; j++){
        for(k=0;k<=i-j;k++)
        	printf(" ");
            printf(" %s ",Kar_diz1);
            printf("\n");
	}   

	printf("\n\n Karakter sayısı : %d \n\n",i);

	system("PAUSE");
	return EXIT_SUCCESS;
}
