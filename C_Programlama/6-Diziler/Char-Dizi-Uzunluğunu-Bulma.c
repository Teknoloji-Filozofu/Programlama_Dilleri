#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define SIZE  100 

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char str[SIZE];
	int k;
	int len = 0;
	
	printf("\n Bir yazı yazın : ");
	scanf(" %s ",&str);
	
	printf("\n Yazi = (%s) \n",str);
	
	for(k=0;str[k] != '\0';++k)
		len++;
		
	printf("\n (%s) Yazısının uzunluğu = %d ",str,len);
	
	system("PAUSE");
	return 0;

}
