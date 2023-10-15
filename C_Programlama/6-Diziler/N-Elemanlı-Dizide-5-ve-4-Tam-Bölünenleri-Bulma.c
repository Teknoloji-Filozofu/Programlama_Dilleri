#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int n,i;
int k,say=0;
int A[100];
int C[100];


int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	printf("\n Dizinin elaman sayısını girniz : ");
	scanf(" %d ",&n);

	for(i=0;i<=n;i++){

	    printf("\n Dizinin elemanlarını giriniz : ");
	    scanf(" %d ",&A[i]);

}

    for(i=0;i<=n;i++){
        if(A[i]%20==0){
            k=k+1;
            C[k]=A[i];
            say=say+1;
	    }
    }

    for(k=1;k<=say;k++){
        printf("\n %d ",C[k]);
}

    system("PAUSE");
    return 0;
   
}
