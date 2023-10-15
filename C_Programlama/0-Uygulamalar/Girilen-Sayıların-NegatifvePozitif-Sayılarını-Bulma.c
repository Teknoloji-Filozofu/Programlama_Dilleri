#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  setlocale(LC_ALL, "Turkish");
	
	int n,sayi,i;
	int negatif=0;
	int pozitif=0;

    printf("\n Kaç adet sayı gireceksiniz :  ");
    scanf(" %d ",&n);

    for(i=1;i<=n;i++){

        printf("\n Sayıyı girniz : ");
        scanf(" %d ",&sayi);

        if(sayi<0)
            negatif++;
        else 
            pozitif++;     
}

   printf("\n Negatif sayıların adedi : %d ",negatif);
   printf("\n Pozitif sayıların adedi : %d \n",pozitif);

   system("PAUSE");
   return 0;
}
/*
n tam sayıdan pozitif ve negatif sayıların adedini bulan 
ve ekrana bastıran kod
*/
