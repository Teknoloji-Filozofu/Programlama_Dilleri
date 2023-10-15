#include<stdio.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int x,n,toplam,i;

	printf("\n Fonksiyon için sayı giriniz : ");
	scanf(" %d ",&x);

	if(x > 0){
        for(i=1;i<=n;i++){
	        toplam+=(x*x+10);
  }
}

	else if(x = 0){
        for(i=1;i<=n-3;i++){
            toplam+=5;
  }
}

	else if(x < 0){
        for(i=1;i<=n;i++){
            toplam+=(i*i);
  }
}

    printf("\n Fonksiyon sonucu %d ",toplam);

    system("PAUSE");
    return 0;
}
