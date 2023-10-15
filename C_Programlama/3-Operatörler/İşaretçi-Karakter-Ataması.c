#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char *cp1 = "Bilgisayar"; /* İlk değer atama yöntemi ile atama */
	char *cp2;
	char *cp3;

	cp2 = "Donanım"; /* Atama işlemcisi ile atama */

	cp3 = malloc(10); /* Bellek tahsisi */
	strcpy(cp3, "Yazılım"); /* Bu işlem satırının doğru çalışmasını sağlayan malloc() fonksiyonu ile bir bellek adresinin cp3 işaretçisine atanmış olmasıdır. */

	printf("%s %s %s\n", cp1, cp2, cp3);

	free(cp3); /* Bellek boşaltma */

	system("PAUSE");
	return 0;
}
