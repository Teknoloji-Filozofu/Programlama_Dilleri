#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,n,m;
	int A[100][100];
	int ng=0,poz=0;
	int ortn,ortp,tn=0,tp=0;
	
	printf("\n Satır sayısını giriniz : ");
	scanf(" %d ",&n);
	
	printf("\n Sütün sayısını giriniz : ");
	scanf(" %d ",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",A[i][j]);

			if(A[i][j]<0){
				ng++;
				tn+=A[i][j];
}
			else if(A[i][j]>0){
				poz++;
				tp+=A[i][j];
    }
  }
}
	
	printf("\n Negatif sayısı : %d ",ng);
	
	if(ng!=0){
		ortn=tn/ng;
		printf("\n Negatif sayıların ortalaması : %d ",ortn);
}
	else
		printf("\n Negatif sayı olmadığından ortalama hesaplanamaz. ");
	
	printf("\n Pozitif sayısı : %d ",poz);
	
	if(poz!=0){
		ortp=tp/poz;
		printf("\n Pozitif sayıların ortalaması : %d ",ortp);
}
	else 
		printf("\n Pozitif sayı olmadığından ortalama hesaplanamaz. ");
		
		
	system("PAUSE");
	return 0;

}
