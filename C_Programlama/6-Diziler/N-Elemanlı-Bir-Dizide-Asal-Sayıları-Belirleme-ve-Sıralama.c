#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> // sqrt()
int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	 
	int n,i,j,e;
	int s=0;
	int gecici;
	int A[100];
	int T[100];
	 
	printf("\n Dizinin eleman sayısını giriniz : ");
	scanf(" %d ",&n);
	 
	for(i=0;i<n;i++){
		printf("\n Elemanları giriniz : ");
		scanf(" %d ",&A[i]);
}

	for(i=0;i<n;i++){
		if(A[i]=2){
			T[s]=A[i];
			s++;
}

		else if(A[i]>2){
			if(A[i]%2 !=0){
				for(j=3;j<sqrt((double)A[i]);i++)
					if(A[i%j==0])
						e++;
					if(e==0){
						T[s]=A[i];
						s++;
			}
		}
	}
}
 
	for(i=0;i<s;i++)
		for(j=0;j<s-i-1;j++)
			if(T[j]>T[j+1]){
				gecici=T[j+1];
				T[j+1]=T[j];
				T[j]=gecici;
}
 
	printf("\n Dizideki asal sayılar : ");
	
	for(i=0;i<s;i++)
		printf("\n %d ",T[i]);
		
	system("PAUSE");
	return 0;
}
