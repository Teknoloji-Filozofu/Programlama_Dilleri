#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int i,j,n,k;
char h[100];
char b;

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	printf("\n Karakter dizisinin eleman sayısını girniz : \n");
	scanf(" %d ",&n);

	printf("\n Karakter dizsini boşluksuz girniz : \n");
	scanf(" %s ",h);

	printf("\n");

	k=n;

	for(i=1;i<=n;i++){   // dizinin ilk elemanı 0 indisinde dizinin son elemanı NULL 
        k--;
        for(j=0;j<=k;j++){
            printf("\n dizi -> %s ",h);
                if(h[j+1]<h[j]){

                    b=h[j];
                    h[j]=h[j+1];
                    h[j+1]=b;                    
                }

                printf("\n i=%d, j=%d sıralı dizi -> %s ",i,j,h);
        }
	}

	printf("\n Sıralanmış dizi --> %s \n",h);

	system("PAUSE");
	return 0;
}