#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 int n,i,b,k,j;
	 int A[100];
	 
	 printf("\n Dizinin eleman sayısını giriniz : ");
	 scanf(" %d ",&n);
	 
	 for(i=0;i<n;i++){
		  printf("\n Elemanları giriniz : ");
		  scanf(" %d ",&A[i]);
	 }
	 
	 for(i=0;i<n;i++){
		  for(j=0;j<n-i-1;j++){
				if(A[j]>A[j+1]){
					 b=A[j+1];
					 A[j+1]=A[j];
					 A[j]=b;
				}
				
				printf("\n i=%d j=%d Sıralı -> ",i,j);
				for(k=0;k<n;k++)
					 printf("\n %d ",A[k]);
		  }
	 }
	 
	 printf("\n Sıralandı -> ");
	 for(i=0;i<n;i++)
		  printf(" %d ",A[i]);
		  
		  system("PAUSE");
		  return 0;
}
