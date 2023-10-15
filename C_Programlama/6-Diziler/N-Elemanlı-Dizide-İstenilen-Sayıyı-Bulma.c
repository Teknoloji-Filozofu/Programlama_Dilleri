#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,sayi,i,b,s,t,ort;
int A[100];

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

    printf("\n Kaç adet sayı gireceksiniz : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

        printf("\n Dizi elemanını küçükten büyüğe doğru giriniz : ");
        scanf(" %d ",&A[i]);
}
    t=1;
    b=1;
    s=n+1;

    printf("\n Aranacak sayıyı giriniz : ");
    scanf(" %d ",&sayi);
   
    while(t!=0){

        ort=(b+s)/2;

        if(A[ort]==sayi){
            printf("\n Aranan sayı : ",A[ort]);
            printf("\n Sırası : ",ort);
            t=0;
}
        else{
            if(s==b+1){
                printf("\n Sayı yok !");
                t=0;
  }
}

    if(A[ort]<sayi)
        b=ort;
    
    if(A[ort]>sayi)
        s=ort;    
}

    system("PAUSE");
    return 0;
}
