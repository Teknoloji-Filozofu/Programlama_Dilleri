#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
  
void deneme(){
	
	int var = 20;  
	int *ptr;  
       
	ptr = &var;     
  
	printf(" ptrdeğeri = %p \n",ptr); 
	printf(" var değeri = %d \n",var); 
	printf(" *ptr değeri = %d \n", *ptr);      
} 
  
int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	deneme();
	
	system("PAUSE");
	return 0;
} 
