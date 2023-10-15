#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int n,i;
	int s=0;
	int A[100];
	int B[100];
	int C[100];
	int D[100];
	
	printf("\n  Dizinin eleman sayısını giriniz : ");
	scanf(" %d ",&n);
	
	for(i=0;i<n;i++){
		printf("\n A Dizisinin elemanlarını giriniz : ");
		scanf(" %d ",&A[i]);
}

	for(i=0;i<n;i++){
		printf("\n B Dizisinin elemanlarını giriniz : ");
		scanf(" %d ",&B[i]);
}
 
	for(i=0;i<n;i++){
		if(A[i]=B[i]){
			C[s]=A[i]-B[i];
			D[s]=i;
			s++;
  }
}
 
	system("PAUSE");
	return 0;
}
