#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void fonk1(char cd1);
char fonk2(char cd1);

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	char cd1 = 87;  /* 'W' 0101 0111 */
	char cd2;

	printf("Karakter değeri: %c %3d  ", cd1, cd1);  
	fonk1(cd1);
	
	cd2 = fonk2(cd1);
	
	printf("Karakter değeri: %c %3d  ", cd2, cd2); /* 'u' 0111 0101 */
	fonk1(cd2); 
	
	system("PAUSE");
	return 0;
}


void fonk1(char cd1){

	int id;

	for (id=128; id>0; id/=2){
		if (cd1&id)
			printf("\n 1 ");
			
		else printf("0 ");
  }
}

char fonk2(char cd1){

	struct yap1 {
		char cd1:4;
		char cd2:4;
};

	union bir1 {
		char cd1;
		struct yap1 yd1;
}bd1;
  
	char cd2;
  
	bd1.cd1 = cd1;              /* 1 */

	cd2 = bd1.yd1.cd1;          /* 2 */
	bd1.yd1.cd1 = bd1.yd1.cd2;  /* 3 */
	bd1.yd1.cd2 = cd2;          /* 4 */

	return bd1.cd1;
}
