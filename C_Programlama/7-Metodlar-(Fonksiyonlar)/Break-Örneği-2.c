#include<stdio.h>
#include<locale.h>

#define  BREAK  0
#define  NO_BREAK  1

int test_fonk(int val);

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int i,j,k;
	int flag = NO_BREAK;
	
	for(i=0;i<100;++i){
		for(j=0;j<100;++j){
			for(k=0;k<20;++k){
				if(!test_fonk(k)){
					flag=BREAK;
					break;
				}
			}
			if(flag==BREAK)
				break;
		}
		if(flag==BREAK)
			break;
	}
	
	printf("\n Döngü dışındaki ilk deyim \n");
	
	return 0;

}
