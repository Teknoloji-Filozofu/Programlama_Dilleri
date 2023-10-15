#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(int argc, char *argv[]){

  setlocale(LC_ALL, "Turkish");

  /* Karakter olarak atama */ 
  char c1[9] = { 'K', 'a', 'r', 'a', 'k', 't', 'e', 'r', '\0' };
  char c2[9] = "Karakter"; /* Kelime olarak atama */ 
  char c3[2][21]; /* Çok boyutlu char dizi bildirimi */ 
  char c4[ ] = "Diziler"; /* Boyutsuz char dizi bildirimi */ 

  int i1[10]; /* Tek boyutlu int dizi bildirimi */ 
  int i2[2][3][4]; /* Çok boyutlu int dizi bildirimi */ 
  int i3[ ] = { 1, 2, 3, 4, 5 }; /* Boyutsuz int dizi bildirimi */ 
  
  int id1, id2, id3;

  /* i1 int dizisine değer verilmesi ve ekrana yazılması */ 
  for (id1=0; id1<10; id1++){

      i1[id1]=id1;
      printf("%d ", i1[id1]);
} 

  /* c1 ve c2 char dizilerinin ekrana yazılması */ 
  printf("\n %s %s \n", c1, c2);

  /* Çok boyutlu i2 int dizisine değer atanması ve ekrana yazılması */ 
  for (id1=0; id1<2; id1++){
       for (id2=0; id2<3; id2++){
            for (id3=0; id3<4; id3++){
                 i2[id1][id2][id3] = 1;
                 printf("%d ", i2[id1][id2][id3]);
    }    
  }
}

  /* Çok boyutlu c3 char dizisine değer atanması ve ekrana yazılması */ 

  strcpy (c3[0], "Karakter dizileri");         /* Kopyalama yoluyla */

  for (id1=0; id1<21; id1++)
    c3[1][id1] = 'A'; /* Birer birer karakter atayarak */ 

    c3[1][id1] = '\0';

  printf("\n %s %s \n", c3[0], c3[1]);      /* Ekrana yazılması */     

  /* Boyutsuz i3 int dizisinin ekrana yazılması */   
  for (id1=0; id1<5; id1++)
    printf("%d ", i3[id1]);

  /* Boyutsuz cdizi4 char dizisinin ekrana yazılması */

  printf("\n%s\n", c4);  /* Tek komutla */

  for (id1=0; c4[id1]; id1++)
    printf("%c", c4[id1]); /* Birer birer */ 
  
  return 0;
}


