#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,det;
	int A[99][99];
	int D[99][99];
	
	for(i=0;i<2;i++){
		 for(j=0;j<2;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",&A[i][j]);
		 }
	}
	
	det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
	
	if(det!=0){
		D[0][0]=A[1][1];
		D[0][1]=A[1][0];
		D[1][0]=A[1][0];
		D[1][1]=A[1][1];
		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				D[i][j]=D[i][j]/det;
				printf("\n %f ",D[i][j]);
			}
		}
	}
	else
		printf("\n Matrisin tersi yoktur. ");
		
	system("PAUSE");
	return 0;
}
