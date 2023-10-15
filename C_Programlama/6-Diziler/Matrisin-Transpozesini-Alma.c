#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int n,i,j;
	int A[99][99];
	int C[99][99];
	
	printf("\n Matrisin transpozesini alabilmek için kare matris olması lazım. \n");
	
	printf("\n Matrisin boyutunu giriniz : ");
	scanf(" %d ",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\n A[%d][%d] ",i,j);
			scanf(" %d ",&A[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j]=A[j][i];
			printf("\n %d ",C[i][j]);
		}
	}
	
	system("PAUSE");
	return 0;
}
