#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){

	 setlocale(LC_ALL, "Turkish");
	 
	 int n,i,j,k,b;
    int A[100];
    int eSKI;
    
    printf("\n Dizi eleman sayısını giriniz : ");
    scanf(" %d ",&n);
    
    for(i=0;i<=n;i++){
    
		  printf("\n A[%d] : ",i);
		  scanf(" %d ",&A[i]);
}
    
    for(i=0;i<=n;i++){
        eSKI=i;
		  for(j=i+1;j<n;j++){
				if(A[j]>A[eSKI])
					 eSKI=j;
					 
	 printf("\n i=%d j=%d sıralı ->",i,j);
				
	 for(k=0;k<n;k++){
		  printf("\n %d ",A[k]);
}
	 printf("\n \n ");
}				
		     
		  b=A[i];
		  A[i]=A[eSKI];
		  A[eSKI]=b;
}
    
	 printf("\n sıralandı ->");
	 for(i=0;i<n;i++){
		  printf(" %d ",A[i]);
}
	 system("PAUSE");
	 return 0;
}
