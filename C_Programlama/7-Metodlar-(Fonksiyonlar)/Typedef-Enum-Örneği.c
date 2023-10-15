#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	typedef enum{
		dogru = 1,
		yanlis = 0
}boolean;

	typedef enum{
		kirmizi,
		mavi,
		yesil
}renk;

int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	renk sekilrengi = 2;

	if(sekilrengi == yesil){
		printf("sekil yesil\n");
}

	boolean dogrumu = 1;

	if(dogrumu == dogru){
		printf("dogru");
}
	else{
		printf("yanlis");
  }
  
	system("PAUSE");
	return 0;
}
