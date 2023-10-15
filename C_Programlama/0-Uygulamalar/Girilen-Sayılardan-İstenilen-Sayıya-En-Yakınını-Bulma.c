#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int n,i,sabit,aranan;
	int fark,gecici;
	int A[100];

	printf("\n Kaç adet sayı gireceksiniz : ");
	scanf(" %d ",&n);

	for(i=0;i<=n;i++){

	    printf("\n %d. sayısı giriniz : ",i);
	    scanf(" %d ",A[i]);
	}

	printf("\n Sabit sayıyı giriniz :  ");
	scanf(" %d ",&sabit);

    fark=abs(sabit-A[0]);
    aranan=A[0];

    for(i=1;i<n;i++)
        gecici=abs(sabit-A[i]);
        if(gecici<fark){

        fark=gecici;
        aranan=A[i];
}

    printf("\n Girilen sayılar içerisindeki %d sayısına en yakın sayı : %d \n",sabit,aranan);

    system("PAUSE");
    return 0;
}
