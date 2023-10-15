#include<stdio.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Turkish");

	int t;
	int hiz=0;

	printf(" Kaçıncı dakikadaki hızı öğremek istersiniz? ");
	scanf(" %d ",&t);

	if(t<11)
	    hiz=t*4;
    else if(t>10 && t<131)
        hiz=40;
    else if(t>131 && t<151)
        hiz=40-((t-130)*2);

    printf("\n Geminin %d dakikadaki hızı %d dir. ",t,hiz);

    system("PAUSE");
    return 0;

}
