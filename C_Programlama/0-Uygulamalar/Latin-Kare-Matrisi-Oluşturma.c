#include<stdio.h>
#include<stdlib.h>//rand()
#include<locale.h>
#include<time.h>  //srand
 
int RSU(int);
void IlkSatir(int);
void DiziYazdir(int);
void LatinKareMatrisOlustur(int);

int A[9]={1,2,3,4,5,6,7,8,9};
int B[9];
int LatinKareMatrisi[9][9];

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	int n;
	
	printf("\n Latin Kare Matrisi boyutunu giriniz (2-9) : ");
	scanf(" %d ",&n);
	
	if((n>1) && (n<10)){
		IlkSatir(n);
		DiziYazdir(n);
		
		printf("\n\n");
		
		LatinKareMatrisOlustur(n);
}
	else{
		printf("\n Latin Kare Matrisi 2-9 arasında olmalı. ");
	}
	
	system("PAUSE");
	return 0;
}

void DiziYazdir(int boyut){

	int i;
	
	for(i=0;i<boyut;i++){
		printf("\n B[%d] : %d ",i,B[i]);
  }
}

void IlkSatir(int boyut){

	int i=0;
	
	do{
		int rassal = rand() % boyut;
		
		if(A[rassal]!=0){
			B[i]=A[rassal];
			A[rassal]=0;
			i++;
		}
	}
	while(i<boyut);
}

void LatinKareMatrisOlustur(int boyut){

	 int i,j,k,gecici;
	 
	 for(i=0;i<boyut;i++){
		gecici=B[0];
		for(j=0;j<boyut;j++){
			LatinKareMatrisi[i][j]=B[j];
			printf(" %d ",LatinKareMatrisi[i][j]);
			printf(" \t ");
}

		for(k=0;k<boyut;k++){
			B[k]=B[k+1];
}
	B[boyut-1]=gecici;
  }
}
