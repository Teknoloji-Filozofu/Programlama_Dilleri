#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,n,m,p;
	int A[99][99];
	int D[99][99];
	
	printf("\n Matrisin satır sayısını giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n Matrisin sütün sayısını giriniz : ");
	scanf(" %d",&m);
	
	for(i=0;i<n;i++){
	 for(j=0;j<m;j++){
		printf("\n A[%d][%d] : ",i,j);
		scanf(" %d "&A[i][j]);
	  }
	}
	
	p=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(A[i][j]!=0){
				p++;
				D[p][0]=i;
				D[p][1]=j;
				D[p][2]=A[i][j];
			}
		}
	}
	
	for(i=0;i<p;i++){
		for(j=0;j<3;j++){
			printf("\n %d ",D[i][j]);
		}
	}
	
	system("PAUSE");
	return 0;
}
