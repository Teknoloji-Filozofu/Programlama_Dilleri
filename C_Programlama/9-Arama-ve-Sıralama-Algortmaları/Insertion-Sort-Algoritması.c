#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 int n,i,j,k;
	 int A[100];
	 int tasinan;
	 
	 printf("\n Dizinin eleman sayısını giriniz : ");
	 scanf(" %d ",&n);
	 
	 for(i=0;i<n;i++){
		  printf("\n Elemanları giriniz :  ");
		  scanf(" %d ",&A[i]);
	 }
	 
	 for(i=0;i<n;i++){
		  tasinan=A[i];
		  j=i-1;
		  printf("\n i=%d j=%d Sıralı -> ",i,j);
		  
		  while((A[j]>tasinan) && (j>=0)){
				A[j+1]=A[j];
				j--;
		  }
		  
		  A[j+1]=tasinan;
		  
		  for(k=0;k<n;k++)
				printf("\n %d ",A[k]);
	 }
	 
	 printf("\n Sıralandı -> ");
	 for(i=0;i<n;i++)
		  printf(" %d ",A[i]);
	 
	 system("PAUSE");
	 return 0;

}
