#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

union bir {
  int id;
  double dd;
  char cd;
} bd;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	bd.id = 21;
	bd.cd = 'A';

	printf("%d %c\n", bd.id, bd.cd);  /* 1 */

	bd.id = 127;
	printf("%d %c\n", bd.id, bd.cd);  /* 2 */

	bd.dd = 34.75;
	printf("%d %f", bd.id, bd.dd);    /* 3 */
	

	system("PAUSE");
	return 0;
}
