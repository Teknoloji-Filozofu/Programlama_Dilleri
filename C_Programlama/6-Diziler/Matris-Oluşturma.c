#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,n,m;
	int A[100][100];
	
	printf("\n Satıt sayısını giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n Sütün sayısını giriniz : ");
	scanf(" %d ",&m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",&A[i][j]);
		}
	}
	
	system("PAUSE");
	return 0;

}
