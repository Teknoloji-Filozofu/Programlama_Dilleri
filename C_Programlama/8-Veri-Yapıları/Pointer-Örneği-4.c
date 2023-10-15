#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int g = 90;

	int fonk(int x, int y){
		
		int l = 0;
		x++;
		return x+y;
}


	void fonk2(int *x, int *y, int *z){
	
	*x = 20;
	*z = *x + *y;
}

	int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int a = 10, b = 5, c = 0;

	//printf("%d\n", fonk(a,b));
	//printf("%d\n", a);

	fonk2(&a,&b,&c);
	printf(" %d \n", c);
	printf(" %d \n", a);

	int *z;
	z=&c;

	system("PAUSE");
	return 0;
}
