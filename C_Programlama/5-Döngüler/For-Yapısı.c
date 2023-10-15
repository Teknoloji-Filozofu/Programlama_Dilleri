#include<stdio.h>
#include<locale.h>

int main(int argc, char *argv[]){

    setlocale(LC_ALL, "Turkish");
	
	int n;
	int i;
	int toplam=0;

	printf("\n Lütfen bir sayı giriniz : ");
	scanf(" %d ",&n);

	for(i=1;i<=n;i++)
	    toplam+=n;

  printf("\n 1'den %d kadar olan sayıların toplamı : %d ",n,toplam);

  system("PAUSE");
  return 0;
}
/*
1 den n e kadar sayıların toplamı for örneği
*/
