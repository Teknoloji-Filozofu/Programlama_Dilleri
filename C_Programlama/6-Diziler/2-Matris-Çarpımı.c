#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){
  
	setlocale(LC_ALL, "Turkish");
	
	int i,j,n,m,t,k;
	int A[99][99];
	int B[99][99];
	int C[99][99];
	
	printf("\n n sayısını giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n m sayısını giriniz : ");
	scanf(" %d ",&m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n A[i][j] : ");
			scanf(" %d ",&A[i][j]);
  }
}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\n A[i][j] : ");
			scanf(" %d ",&B[i][j]);
  }
}
	 
	 for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			t=0;
			for(k=0;k<n;k++)
				t+=A[i][k]*B[k][j];
				
			C[i][j]=t;
			printf("\n %d ",C[i][j]);
  }
  printf("\n \n ");
}
	 
	 system("PAUSE");
	 return 0;
}
