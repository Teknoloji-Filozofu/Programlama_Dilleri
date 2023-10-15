#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int n,m,i,j;
	int A[99][99];
	int C[99][99];
	int D[99][99];
	
	printf("\n Matrislerin satır sayısını giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n Matrislerin sütün sayısını giriniz : ");
	scanf(" %d ",&m);
	
	printf("\n A matrisi : ");
	printf("\n----------------\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",&A[i][j]);
		}
	}
	
	printf("\n C matrisi : ");
	printf("\n-----------------\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n C[%d][%d] : ",i,j);
			scanf(" %d ",&C[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(A[i][j]!=C[i][j])
				D[i][j]=A[i][j]-C[i][j];
			else
				D[i][j]=0;
		}
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(D[i][j]==0)
				C[i][j]=A[i][j];
			else
				C[i][j]=A[i][j]-D[i][j];
		}
	}
	
	printf("\n Tekrar oluşturulan C matrisi : ");
	printf("\n--------------------------\n");
	
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n C[%d][%d] : %d ",i,j,C[i][j]);
	}
}

	system("PAUSE");
	return 0;
}
