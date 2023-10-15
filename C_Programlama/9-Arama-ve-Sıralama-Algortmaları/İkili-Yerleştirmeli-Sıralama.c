#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void MatrisOku(int);
void MatrisSirala(int);
void SutunDiziyeDonustur(int);
void Sirala(int);
void IkiliYerlestirmeliSiralama(int[], int);
void YerlestirmeliSiralama(int[], int);
void SecmeSiralama(int[], int);
void KumeleSiralama(int[], int);
void Kumele(int[], int, int);
void DiziyiSutunaDonustur(int);
void MatrisYaz(int);

int A[100][4];
int B[100];
int C[100];
int D[100];
int E[100];
int W[100][4];

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int satirSayisi;
	
	printf("\n Satır sayısını giriniz : ");
	scanf(" %d ",&satirSayisi);
	
	MatrisOku(satirSayisi);
	MatrisSirala(satirSayisi);
	MatrisYaz(satirSayisi);
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}

void MatrisOku(int satir){

	int i,j;
	
	for(i=0;i<satir;i++){
		for(j=0;j<4;j++){
			printf("\n A[%d][%d] : ",i,j);
			scanf(" %d ",&A[i][j]);
    }
  }
}

void MatrisYaz(int satir){

	int i,j;
	
	for(i=0;i<satir;i++){
		for(j=0;j<4;j++){
			printf("\n A[%d][%d] : %d ",i,j,W[i][j]);
		}
	}
}

void SutunDiziyeDonustur(int s){

	int i,j;
	
	for(j=0;j<4;j++){
		for(i=0;i<s;i++){
			if(j==0)
				B[i]=A[i][j];
			else if(j==1)
				C[i]=A[i][j];
			else if(j==2)
				D[i]=A[i][j];
			else if(j==3)
				E[i]=A[i][j];
		}
	}
}

void DiziyiSutunaDonustur(int s){

	int i,j;
	
	for(j=0;j<4;j++){
		for(i=0;i<s;i++){
			if(j==0)
				W[i][j]=B[i];
			else if(j==1)
				W[i][j]=C[i];
			else if(j==2)
				W[i][j]=D[i];
			else if(j==3)
				W[i][j]=E[i];
		}
	}
}

void Sirala(int s){

	int i,j;
	
	for(j=0;j<4;j++){
		for(i=0;i<s;i++){
			if(j==0)
				IkiliYerlestirmeliSiralama(B,s);
			else if(j==1)
				YerlestirmeliSiralama(C,s);
			else if(j==2)
				SecmeSiralama(D,s);
			else if(j==3)
				KumeleSiralama(E,s);
		}
	}
}

void IkiliYerlestirmeliSiralama(int G[], int satir){

	int i,j,gecici;
	
	for(i=0;i<satir;i++){
		for(j=0;j<satir-i-1;j++){
			if(G[j]>G[j+1]){
				gecici=G[j+1];
				G[j+1]=B[j];
				G[j]=gecici;
			}
		}
	}
}

void YerlestirmeliSiralama(int G[], int satir){

	int i,j,tasinan;
	
	for(i=0;i<satir;i++){
		tasinan=G[i];
		j=i-1;
		
		while((G[j]>tasinan) && (j>=0)){
			G[j+1]=G[j];
			j--;
		}
		G[j+1]=tasinan;
	}
}

void SecmeSiralama(int G[], int satir){

	int i,j,onceki,gecici;
	
	for(i=0;i<satir;i++){
		onceki=i;
		for(j=i+1;j<satir;j++){
			if(G[j]<G[onceki])
				onceki=j;
				
			gecici=G[i];
			G[i]=G[onceki];
			G[onceki]=gecici;
		}
	}
}

void KumeleSiralama(int G[], int satir){

	int i, nd, gecici;
	nd=satir;
	
	for(i=nd/2;i>0;i--)
		Kumele(G,i,nd);
		
	do{
		gecici=G[0],
		G[0]=G[nd-1];
		G[nd-1]=gecici;
		nd--;
		Kumele(G,1,nd);
	}
	while(nd>1);
}

void Kumele(int F[], int k, int nx){

	int j, gecici;
	gecici=F[k-1];
	
	while(k<=nx/2){
		j=2*k;
		
		if((j<nx) && (F[j-1]<F[j]))
			 j++;
		if(gecici>=F[j-1])
			break;
		else{
			F[k-1]=F[j-1];
			k=j;
		}
	}
	 F[k-1]=gecici;
}
