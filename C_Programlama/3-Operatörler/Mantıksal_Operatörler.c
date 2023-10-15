#include <stdio.h> 

int main(){ 

	int a = 10, b = 4, c = 10, d = 20; 

	if (a > b && c == d) 
		printf("\n a değeri b'den büyüktür AND(VE) c değeri d'ye eşittir. \n"); 
	else
		printf("\n AND(VE) koşulu yerine getirlmedi \n"); 
 
	if (a > b || c == d) 
		printf("\n a değeri b'den büyüktür OR(VEYA) c değeri d'ye eşittir. \n"); 
	else
		printf("\n her iki koşul da sağlamamaktadır. \n"); 

	if (!a) 
		printf("\n a değeri 0 dır. \n"); 
	else
		printf("\n a değeri 0 değildir. \n"); 


	return 0; 
} 
