#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
//#include<conio.h>

int i,eb,n;
int A[100];

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	printf("\n Dizi eleman sayısını giriniz : \n");
	scanf(" %d ",&n);
    
    for(i=1;i<=n;i++){

    printf("\n Dizi elemanını giriniz : \n");
    scanf(" %d ",&A[i]);
}

    eb=A[0]; // dizinin ilk elemanını en büyük olarak belirliyoruz 

    for(i=1;i<=n;i++){
        if(eb<A[i])
            eb=A[i]; 
}

    printf("\n En büyük sayı : %d \n",eb);

    system("PAUSE");
    return 0;
}
