#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i,s=0;
int A[100];
int B[100];
int Y[100];

int main(int argc, char *argv[]){

    printf("\n Kaç eleman girişi olacak : ");
    scanf(" %d ",&n);

    printf("\n Elemanlar sadece (0/1) değerlerinden oluşabilir");

    for(i=0;i<=n;i++){
    
    printf("\n Belirtilen değerlerden belirlediğinizi ilk dizi için giriniz : ");
    scanf(" %d ",&A[i]);

}

    for(i=0;i<=n;i++){

        printf("\n Belirtilen değerlerden belirlediğinizi ikinci dizi için giriniz : ");
        scanf(" %d ",&B[i]);
}

    for(i=0;i<=n;i++){
        if(A[i]==1 || B[i]==1){

            Y[s]=1;
            s++;
  }
}
	
    for(i=0;i<=s;i++){

        printf("\n %d ",Y[i]);
}

	system("PAUSE");
	return 0;
}
