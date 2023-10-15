#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int obeb(int numara1, int numara2){

	int i;
	int min= (numara1<numara2) ? numara1:numara2;
	
	for(i=min;i>=1;i--)
		if(numara1%i==0 && numara2%i==0)
		return i;
	return 1;
}

int okek(int numara1, int numara2){

	int i;
	int max=(numara1>numara2) ? numara1:numara2;
	
	for(i=max;i<=numara1*numara2;i+=max)
		if(i%numara1==0 && i%numara2==0)
			return i;
		return numara1 * numara2;
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int x,y;
	int n=5;
	
	while(n--){
		printf("\n İki tam sayı giriniz : ");
		scanf(" %d%d ",&x,&y);
		
		printf("\n Obeb = %d \n", obeb(x,y));
		printf("\n Okek = %d \n", okek(x,y));
	}

	system("PAUSE");
	return 0;
	
}
