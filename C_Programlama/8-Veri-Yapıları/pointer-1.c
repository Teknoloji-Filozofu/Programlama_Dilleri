#include<stdio.h>
void yerDegistir(int *ilkdeger, int *sondeger){
	int temp = *ilkdeger;
	*ilkdeger = *sondeger;
	*sondeger = temp;
}
int main(){
	
	int x = 15;
	int y = 32;
	
	printf("x degiskeninin degeri: %d\n",x);
	printf("y degiskeninin degeri: %d\n",y);
	
	yerDegistir(&x,&y);
	
	printf("x degiskeninin degeri: %d\n",x);
	printf("y degiskeninin degeri: %d\n",y);
	
	return 0;
}
