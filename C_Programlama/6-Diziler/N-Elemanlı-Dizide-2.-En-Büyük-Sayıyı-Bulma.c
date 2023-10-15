#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i,eb,ib;
int A[100];

int main(int argc, char *argv[]){
	
    setlocale(LC_ALL, "Turkish");

    printf("\n Kaç eleman girişi olacak : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

        printf("\n Elemanları giriniz : ");
        scanf(" %d ",&A[i]);
}

eb=A[0];
ib=A[0];

    for(i=0;i<=n;i++){

        if(A[i]>eb){

            ib=eb;
            eb=A[i];
}
}
   
   printf("\n Dizideki en büyük 2. sayı %d dır. \n",ib);


	system("PAUSE");
	return 0;
}
