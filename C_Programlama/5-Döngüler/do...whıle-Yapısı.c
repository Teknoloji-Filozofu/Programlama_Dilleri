#include<stdio.h>
#include<locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int n;
	int toplam;
	int i=1;

	printf("\n Lütfen bir sayı giriniz : ");
	scanf(" %d ",&n);

	do{

	toplam+=i;
	i++;

}
    while(i<=n);

    printf("\n 1'den %d kadar sayıların toplamı : %d ",n,toplam);

    system("PAUSE");
    return 0;
}
/* 
1 den n w kadar olan sayıların toplamı do....while örneği
*/