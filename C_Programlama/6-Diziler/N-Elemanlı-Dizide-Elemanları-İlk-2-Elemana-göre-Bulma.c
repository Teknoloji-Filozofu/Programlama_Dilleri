#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i;
int s=2,toplam=0;
int A[100];

int main(int argc, char *argv[]){

  setlocale(LC_ALL, "Turkish");

  printf("\n Kaç eleman bir dizi olacak : ");
  scanf(" %d ",&n);

  printf("\n 1. elemanını giriniz : ");
  scanf(" %d ",&A[0]);

  printf("\n 2. elemanı giriniz :  ");
  scanf(" %d ",A[1]);
   
  while(s<n){
    for(i=0;i<=s;i++)
      toplam+=A[i];

      A[s]=toplam+3;
      s++;
}  
 

  for(i=0;i<=n;i++){

    printf("\n Dizinin %d. elemanı : %d ",i,A[i]);
}

	system("PAUSE");
	return 0;
}
