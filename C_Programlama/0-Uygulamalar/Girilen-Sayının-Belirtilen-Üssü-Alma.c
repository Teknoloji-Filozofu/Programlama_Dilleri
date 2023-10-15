#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(int argc, char *argv){
	
   setlocale(LC_ALL, "Turkish");

   int taban,us;
   int n,i;
   int sonuc=1;

   printf("\n Üssü alınacak sayıyı girniz : ");
   scanf(" %d ",&taban);

   printf("\n Üssü giriniz : ");
   scanf(" %d ",&us);

    if(us>0)
        for(i=1;i<=us;i++)
            sonuc*=taban;
    else if(us=0)
        sonuc=1;
    else if(us<0)
        for(i=1;i<=n;i++)
           sonuc*=1/taban;

    printf("\n %d sayısnın %d. kuvveti : %d",taban,us,sonuc);

    system("PAUSE");
    return 0;
}
