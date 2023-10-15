#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int val;
	
	while(1){
		printf("\n Bir sayı giriniz : ");
		scanf(" %d ",&val);
			if(val<0)
				break;
			printf("\n karakök %d = %1f ",val,sqrt(val));
	}
	
	printf("\n Döngüden çıkıldı prıgram sonlandırılıyor. ");
	
	system("PAUSE");
	return 0;
}
