#include <stdio.h> 

int main() 
{ 
	int a = 10, b = 4, sonuc,res; 

	// printing a and b 
	printf("a is %d and b is %d\n", a, b); 

	sonuc = a + b; // toplama işlemi 
	printf("a+b is %d\n", res); 

	sonuc = a - b; // çıkarma işlemi  
	printf("a-b is %d\n", res); 

	sonuc = a * b; // çarpma işlemi 
	printf("a*b is %d\n", res); 

	sonuc = a / b; // bölme işlemi
	printf("a/b is %d\n", res); 

	sonuc = a % b; // mod işlemi
	printf("a%b is %d\n", res); 

	return 0; 
} 
