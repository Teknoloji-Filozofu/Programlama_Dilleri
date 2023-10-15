#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int a,c,d;
	float b;


	printf("\n Sayıyı giriniz : ");
	scanf(" %d ",&a);

	b = sqrt(a);
    c = fabs(b);  
    /* int c değişkenine atandığı için mutlak b'nin tam kısmı c'ye atanıyor */

    d = c*c;

    if(a==d)
        printf("\n Sayı tam karedir. \n");
    else
        printf("\n Sayı tam kare değildir. \n");

    system("PAUSE");
    return 0;     
}
