#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 int n,i,k;
	 int A[100];
	 int aranan,ilk,son,ort;
	 
	 printf("\n Dizi eleman sayısını giriniz : ");
	 scanf(" %d ",&n);
	 
	 for(i=0;i<n;i++){
		  printf("\n Elemanları giriniz : ");
		  scanf(" %d ",&A[i]);
	 }

    printf("\n Aranan değer : ");
    scanf(" %d ",&aranan);
    
    ilk=0; son=n; k=0;
    while(ilk<=son && k!=1){
		  ort=(ilk+son)/2;
		  if(aranan<A[ort])
				son=ort-1;
		  else if (aranan>A[ort])
				ilk=ort+1;
		  else 
				k=1;
}
   if(k==1)
	 printf("\n Değer:%d, Sırası: %d ",A[ort],ort+1);
   else
	 printf("\n Aranan değer yoktur. ");
	 
	 system("PAUSE");
	 return 0;
}
