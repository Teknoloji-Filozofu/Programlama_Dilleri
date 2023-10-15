#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i;
int b,o,y;
int A[1000];

int main(int argc, char *argv[]){
	
    setlocale(LC_ALL, "Turkish");

    printf("\n Kaç eleman girişi olacak : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

        printf("\n Elemanları giriniz : ");
        scanf(" %d ",&A[i]);
    }
 
    for(i=0;i<=n;i++){
        
        if(A[i]<10)
            b++;
        else if((A[i]>9) && (A[i]<100))
            o++;
        else if((A[i]>99) && (A[i]<1000))
            y++;
}        
         
    printf("\n 1 basamaklı sayılar %d \n",b);
    printf("\n 2 basamkalı sayılar %d \n",o);
    printf("\n 3 basamaklı sayılar %d \n",y);
    
	system("PAUSE");
	return 0;
}
