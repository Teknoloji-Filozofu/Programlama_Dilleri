#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n,i;
int A[100];
int N[100],w=0,wT,wO;
int P[100],p=0,pT,pO;

int main(int argc, char *argv[]){
	
    setlocale(LC_ALL, "Turkish");

    printf("\n Kaç eleman girişi olacak : ");
    scanf(" %d ",&n);

    for(i=0;i<=n;i++){

       printf("\n Elemanları giriniz : ");
       scanf(" %d ",&A[i]);
}

    for(i=0;i<=n;i++){
        
       if(A[i]<0){
            N[w]=A[i];
            w++;
}
       else if (A[i]>0){
            P[p]=A[i];
            p++;
  }
}
      for(i=0;i<=w;i++){
          wT+=N[i];
}
      for(i=0;i<=p;i++){
          pT+=P[i];
}
       wO=wT/w;
       pO=pT/p;
       
       if(w!=0) // 0'a bölme hatasından kurtulmak için 
           wO=wT/w;
       if(p!=0)
           pO=pT/p;
       
       printf("\n Negatif sayıların toplamı %d \n",wT);
       printf("\n Negatif sayıların ortalaması %d \n",wO);
       
       printf("\n Pozitif sayıların toplamı %d \n",pT);
       printf("\n Pozitif sayıların ortalaması %d \n",pO);
       
        
	system("PAUSE");
	return 0;
}
