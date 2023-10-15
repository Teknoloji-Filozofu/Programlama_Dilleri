#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	
	setlocale(LC_ALL, "Turkish");
		
	int i,j;
	float sakla;
	float carpim1=1,carpim2=1;
	float matris[2][2];
	float carpan;
 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d x %d elemanini giriniz:",i+1,j+1);
			scanf("%f",&matris[i][j]);
  }   
}

	printf("\n\n Matris \n");
        
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3f ",matris[i][j]);
  }    
		printf("\n");   
}
 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j){
				carpim1=carpim1*matris[i][j]; 
}
			else{
				carpim2=carpim2*matris[i][j];  
    }
  }    
}
  
	carpan=1/(carpim1-carpim2); 
  
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j){
				sakla=matris[i][j];
				matris[i][j]=matris[i+1][j+1];
				matris[i+1][j+1]=sakla;  
}
			else{
				matris[i][j]=-1*matris[i][j];
    }  
  }
}

	printf("\n\n Matrisin Tersi \n");
  
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3f  ",carpan*matris[i][j]);
} 
   
		printf("\n");   
}
  system("PAUSE");
  return 0; 
}
