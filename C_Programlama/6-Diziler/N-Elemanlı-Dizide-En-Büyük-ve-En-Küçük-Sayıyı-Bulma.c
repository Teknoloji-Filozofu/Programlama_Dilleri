#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n, eb, ek, yerb, yerk, i;
int A[100];

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	printf("\n Diznin eleman sayısını giriniz : ");
	scanf(" %d ",&n);

	for(i=0;i<=n;i++){

	    printf("\n Dizinin elemanlarını giriniz : ");
	    scanf(" %d ",&A[i]);
}

    eb=A[0];
    ek=A[0];

    yerb=0;
    yerk=0;

    for(i=0;i<=n;i++){
        if(eb<A[i]){

            eb=A[i];
            yerb=i+1;
        }

        else if(ek>A[i]){

            ek=A[i];
            yerk=i+1;
        }
    }

    printf("\n En büyük sayı : %d ",eb);
    printf("\n Yer sırası : %d ",yerb);

    printf("\n En küçük sayı : %d ",ek);
    printf("\n Yer sırası : %d ",yerk);

    system("PAUSE");
    return 0;    

}