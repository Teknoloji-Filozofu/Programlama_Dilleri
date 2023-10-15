#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void YeniMatris(int [8][3], int [8][3]);
void Yeniden(int [][3],int [][3]);
void Yaz(int [][3],int);

int p;
int A[8][3] = {
	{1,0,0},{0,1,1},{1,0,1},{1,1,0},
	{1,1,1},{1,0,0},{0,1,1},{0,1,0}
}

int D[8][3] = {
	{1,0,1},{0,1,1},{1,0,1},{1,1,0},
	{1,1,1},{1,0,0},{0,1,1},{1,1,}
}

int C[24][3];

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	Yaz(A,8);
	Yaz(D,8);
	YeniMatris(A,D);
	Yaz(C,p);
	Yeniden(A,C);
	Yaz(D,8);
	

	system("PAUSE");
	return 0;
}

void YeniMatris(int mat1[8][3], int mat2[8][3]){

	int i,j;
	p=0;
	
	for(i=0;i<8;i++){
		for(j=0;j<3;j++){
			if(mat1[i][j]!=mat2[i][j]){
				C[p][0]=i;
				C[p][1]=j;
				C[p][2]=mat1[i][j]-mat2[i][j];
				p++;
			}
		}
	}
}
	
void Yeniden(int m1[][3], int m2[][3]){

	int i,j;
	
	for(i=0;i<8;i++){
		for(j=0;j<3;j++){
			D[i][j]=m1[i][j];
		}
	}
	
	for(i=0;i<p;i++){
		D[m2[i][0]][m2[i][1]]=m1[m2[i][0]][m2[i][1]]-m2[i][2];
	}
}

void Yaz(int matris[][3],int satir){

	int i,j;
	
	for(i=0;i<satir;i++){
		for(j=0;j<3;j++){
			printf("\n %d ",matris[i][j]);
		}
	}
}

/* 
Verilen 8*3 boyutlu A ve B matrislerinin A[i][j]!=B[i][j] şeklinde
farklı elemanlarının bulan ve bu elemanların farklarını ve yerlerini
yeni oluşturacağımız bir p*3 boyutlu yeni bir C matrisine
saklayan ve A matrisini ve yeni oluşturulacak 
C matrisini kullanarak B matrisini tekrar oluşturan bir C programı.
*/
