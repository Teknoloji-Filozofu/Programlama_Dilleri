#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int bolum(int s1,int s2){

	int s3;
    s3=s1/s2;
    return s3;
}
 
int main(){

	setlocale(LC_ALL, "Turkish");
	
	int m,n,z=0,t,u,k=0,j,f=0,i;
	int byk,flag=0;
	float ortortk,ort1,ort2;
	int asalsylr[16];
	int ortkdizitplm=0,matris1tplm=0,matris2tplm=0;
	int matris1[4][4];
	int matris2[4][4];
	//int matris1[4][4]={1,2,1,5,5,7,7,8,9,10,1,12,3,14,15,16};
	//int matris2[4][4]={1,3,4,5,6,7,8,8,7,6,5,4,3,2,7,16};
	int ortkdizi[16];
	
	printf(" lutfen 4x4 luk matrislerin sayisal degerlerini tam sayi olarak giriniz \n\n");

	for(m=0;m<4;m++){
	    for(n=0;n<4;n++){

	        printf(" 1. matris [%d][%d] = ",m,n);
	        scanf("%d",&matris1[m][n]);

	        matris1tplm+=matris1[m][n];	
  }
}

    printf(" \n \n  ");
    
    for(m=0;m<4;m++){
	    for(n=0;n<4;n++){

	        printf(" 2. matris [%d][%d] = ",m,n);
	        scanf("%d",&matris2[m][n]);

	        matris2tplm+=matris2[m][n];
 }
}

    for(m=0;m<4;m++){
	    for(n=0;n<4;n++){
	        if( matris1[m][n] == matris2[m][n]){

	            ortkdizi[z]=matris1[m][n];
	            ortkdizitplm+=ortkdizi[z];
	            z++;
}

    else{

	    ortkdizi[z]=0;
	    z++;    
    }
  }
}

       printf(" \n ");

    for(t=0;t<16;t++){    
	    for(u=0;u<16;u++){
            if(ortkdizi[t] > ortkdizi[u]){

	            byk=ortkdizi[t];
	            ortkdizi[t]=ortkdizi[u];
	            ortkdizi[u]=byk;
    }
  }
}

    for(t=0;t<16;t++){

	   printf(" %d\n ",ortkdizi[t]);    
}

    for(m=0;m<4;m++){
	    for(n=0;n<4;n++){

	   matris1tplm+=matris1[m][n];
	   matris2tplm+=matris2[m][n];	
  }
}

       ort1=bolum(matris1tplm,16);
       ort2=bolum(matris2tplm,16);
       ortortk=bolum(ortkdizitplm,z);
    
    if( ort1>ortortk)
       printf(" 1. matrisin ortalamasi ortak dizinin ortalamasindan buyuktur \n");
    else if (ort1=ortortk)
	   printf(" 1. matrisin ortalamasi ortak dizinin ortalamasina eþittir \n ");
	else 
	   printf(" 1. matrisin ortalmasi ortak dizinin ortalamasindan kuçuktur ");
	   
	if(ort2>ortortk)
	   printf("  2. matrisisn ortalmasi ortak dizinin ortalamasindan buyuktur \n ");
	else if (ort2=ortortk)
	   printf(" 2. matrisin ortalamasi ortak dizinin ortalamasina eþittir \n ");
	else 
	   printf(" 2. matrisin ortalamasi ortak dizizinin ortalamasindan kuçuktur \n ");

    for(i=0;i<z;i++){
	    for(j=2;j<ortkdizi[i];j++){
	        if(ortkdizi[i]%j==0)
	            k++;
}	 	
	if(k==0){

	   asalsylr[f]=ortkdizi[i];
	   f++;	
}

	   k=0;
}

	printf(" \n ORTAK DÝZÝDE  ASAL SAYILAR ");

	for(i=0;i<f;i++)
        if(asalsylr[i] !=0 && asalsylr[i]!=1 )
            printf(" %d,",asalsylr[i]);
		  
	system("PAUSE");
	return 0;
}
    


