#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(void){
	
	setlocale(LC_ALL, "Turkish");
	
	int *ip;
	
	/* malloc() fonksiyonunun en önemli özelliği bir işaretçiye bir değer atamadan önce bir değişken adresi atama gereksinimini ortadan kaldırmış olmasıdır. Bunun nedeni, malloc() fonksiyonunun tahsis ettiği belleğin başlangıç adresini otomatik olarak işaretçiye geri vermesidir.*/
	
	ip = (int*) malloc(sizeof(int)); /* 1 */
	*ip = 126;

	printf(" %p \n", ip);
	printf(" %d ", *ip);
  
	free(ip);
  
	system("PAUSE");
	return 0;
}
