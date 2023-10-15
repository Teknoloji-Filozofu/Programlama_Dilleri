#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int i,n;
int A[100];

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	printf("\n Dizinin eleman sayısını giriniz : \n");
	scanf(" %d ",&n);
    
    printf("\n");  

    for(i=1;i<=n;i++){

    printf("\n Dizi elemanını giriniz : \n");
    scanf(" %d ",&A[i]);
}

    system("PAUSE");
    return 0;
}
