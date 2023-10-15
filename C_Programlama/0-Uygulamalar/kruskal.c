#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i=0,j=0,x;
    char y;

    FILE *fp = fopen("input.txt","r");

    int dugumSayisi;
    fscanf(fp,"%d",&dugumSayisi);

    int * kimden = (int *)malloc(sizeof(int) * dugumSayisi); 
    int * kime = (int *)malloc(sizeof(int) * dugumSayisi);
    int * agirlik = (int *)malloc(sizeof(int) * dugumSayisi);

    while(!feof(fp)){
         fscanf(fp,"%d %d %d" ,&kimden[i],&kime[i],&agirlik[i]);
         i++;
  }  

for(int i=0; i<dugumSayisi; i++){
        printf("%d " ,kimden[i]);
        printf("%d " ,kime[i]);
        printf("%d" ,agirlik[i]);
}
  for(int i=0; i<dugumSayisi; i++){
      for(int j=0; j<dugumSayisi-1; j++){	
          if(agirlik[j]>agirlik[j+1]){
            
             x = agirlik[j];
             agirlik[j] = agirlik[j+1];
             agirlik[j+1] = x;  

             y = kime[j];
             kime[j] = kime[j+1];
             kime[j+1] = y;    

             y = kimden[j];
             kimden[j] = kimden[j+1];
             kimden[j+1] = y;        
   }
  } 
 }
    for(int i=0; i<dugumSayisi; i++){
        printf("%d " ,kimden[i]);
        printf("%d " ,kime[i]);
        printf("%d" ,agirlik[i]);

 }
}
