#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct {
  char cdizi1[20];
  char cdizi2[20];
  int id;
} yap;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	 yap yd1, yd2;

  strcpy(yd1.cdizi1, "Bilgisayar");
  strcpy(yd1.cdizi2, "Programlama");
  strcpy(yd2.cdizi1, "C");
  strcpy(yd2.cdizi2, "Programlama");
  yd1.id = 21;
  yd2.id = 34;

  printf("%s %s\n%s %s\n", yd1.cdizi1, yd1.cdizi2, yd2.cdizi1, yd2.cdizi2);
  printf("%d %d", yd1.id, yd2.id);
	

	system("PAUSE");
	return 0;
}
