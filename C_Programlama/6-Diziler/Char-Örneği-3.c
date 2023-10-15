#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char *aylar[]={"OCAK","SUBAT","MART",
	            "NISAN","MAYIS","HAZIRAN",
					"TEMMUZ","AGUSTOS","EYLUL",
					"EKIM","KASIM","ARALIK"};
					
int ngun[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	int yil, t, gun, i;
	int ngun[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("\n Yılı girin : ");
	scanf(" %d ",&yil);
	
	printf("\n Kaçıncı gün : ");
	scnaf(" %d ",&gun);
	t=0;
	
	if(yil%4==0)
		ngun[1]=29;
	
	for(i=0;i<12;i++){
		t=t+ngun[i];
		if(t>=gun)
			break;
	}
	
	printf("\n &d. gün %s ayındadır... ",gun,aylar[i]);
	
	system("PAUSE");
	return 0;
}
