#include <stdio.h> 

int main() 
{ 
	int a = 10, b = 4; 
 
	if (a > b) 
		printf("\n a değeri b' den büyüktür. \n"); 
	else
		printf("\n a değeri b'den küçük yada eşittir. \n"); 

	if (a >= b) 
		printf("\n a değeri b'den büyük yada eşittir. \n"); 
	else
		printf("\n a değeri b'den küçüktür. \n"); 

	if (a < b) 
		printf("\n a değeri b'den küçüktür. \n"); 
	else
		printf("\n a değeri b'den büyüktür yada eşittir. \n"); 
 
	if (a <= b) 
		printf("\n a değeri b'den küçük yada eşittir. \n"); 
	else
		printf("\n a değeri b'den büyüktür. \n"); 

	if (a == b) 
		printf("\n a değeri b'ye eşittir. \n"); 
	else
		printf("\n a değeri b'ye eşit değildir. \n"); 
 
	if (a != b) 
		printf("\n a değeri b'ye eşit değildir. \n"); 
	else
		printf("\n a değeri b'ye eşittir. \n"); 

	return 0; 
} 
