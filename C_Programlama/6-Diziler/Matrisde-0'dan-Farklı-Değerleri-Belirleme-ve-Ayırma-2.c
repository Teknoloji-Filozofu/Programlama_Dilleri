#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j;
	int s=0,k=0;
	int A[99][99];
	int D[99][99];
	
	for(i=0;i<32;i++){
		for(j=0;j<32;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",&A[i][j]);
			
			if(A[i][j]){
				D[s][0]=A[i][j];
				D[s][1]=i;
				D[s][2]=j;
				s++;
			}
		}
	}
	
	for(i=0;i<32;i++){
		for(j=0;j<32;j++){
			while(k<s){
				if((D[k][1]==i) && (D[k][2]==j))
					A[i][j]=D[k][0];
				else
					A[i][j]=0;
				k++
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
/*
32*32 piksellik bir siyah beyaz resimde siyah piksellerin 1, beyaz piksellerin ise 0 ile ifade edildiğini 
ve böyle bir resim bilgisinin 32*32 boyutlu bir a matrisinde tutulduğunu varsayalım. Sıfırdan farklı olan
elemanlaru D matrisine atıryoruz.
*/
