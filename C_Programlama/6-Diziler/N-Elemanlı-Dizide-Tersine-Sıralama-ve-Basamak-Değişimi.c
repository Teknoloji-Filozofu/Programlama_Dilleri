#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i,nn,b,o;
int A[100];
int C[100];

int main(int argc, char *argv[]){
	
    setlocale(LC_ALL, "Turkish");

    printf("\n Kaç adet sayı gireceksiniz : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

        printf("\n Dizi elemanını giriniz : ");
        scanf(" %d ",&A[i]);
}
    nn=n-1;

    for(i=0;i<=n;i++){

        o=A[i]%10;
        b=A[i]/10;
        C[nn-i]=o*10+b;
}

    for(i=0;i<=n;i++){

        printf("\n %d \n",C[i]);
}

    system("PAUSE");
    return 0;
}
