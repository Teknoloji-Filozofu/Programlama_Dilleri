#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,det,solk,sagk;
	int A[99][99];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n A[%d][%d] :",i,j);
			scanf(" %d ",&A[i][j]);
		}
	}
	
	solk=A[0][0]*A[1][1]*A[2][2];
	solk+=A[0][1]*A[1][2]*A[2][0];
	solk+=A[0][2]*A[1][0]*A[2][1];
	
	sagk=A[0][2]*A[1][1]*A[2][0];
	sagk+=A[0][0]*A[1][2]*A[2][1];
	sagk+=A[0][1]*A[1][0]*A[2][2];
	
	det=solk-sagk;
	
	printf("\n Matrisin determinantı : %d ",det);
	
	system("PAUSE");
	return 0;
}
