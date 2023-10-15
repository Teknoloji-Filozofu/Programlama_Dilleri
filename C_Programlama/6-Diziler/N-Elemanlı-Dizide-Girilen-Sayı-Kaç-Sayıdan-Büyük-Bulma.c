#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i;
int A[100];

int main(int argc, char *argv[]){
	
    setlocale(LC_ALL, "Turkish");

    printf("\n Kaç eleman girişi olacak : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

      printf("\n Elemanları giriniz : ");
      scanf(" %d ",A[i]);
    }

	system("PAUSE");
	return 0;
}
