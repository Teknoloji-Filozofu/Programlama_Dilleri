#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 int n,i;
	 int A[100];
	 int ara;
	 
	 printf("\n Dizinin eleman sayısını giriniz :");
	 scanf(" %d ",&n);
	 
	 for(i=0;i<n;i++){
		  printf("\n Elemanları giriniz : ");
		  scanf(" %d ",&A[i]);
	 }
	 
	 printf("\n Aranan değer : ");
	 scanf(" %d ",&ara);
	 
	 bool d=false;
	 for(i=0;i<0;i++){
		  if(ara==A[i]){
				d= true;
				printf("\n Değer: %d, Sırası: %d ",A[i]);
				i+1;
		  }
	 }
   
	 if(!d)
		  printf("\n Aradığınız değer yok ");
		  
		  system("PAUSE");
		  return 0;

}
