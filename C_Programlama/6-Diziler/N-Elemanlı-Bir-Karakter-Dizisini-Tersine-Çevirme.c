#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(void){
	
	setlocale(LC_ALL, "Turkish");
	
	char S[40];
	char gecici;
	int i, n;
	
	/* diziyi oku */
	printf("Bir seyler yazin : ");
	scanf(" %s ",&S);
	
	/* sonlandırıcı karaktere kadar */
	for(n=0; S[n] != '\0'; n++);
	for(i=0; i<n/2; i++){
		gecici= S[n-i-1];
		S[n-i-1]=S[i];
		S[i]=gecici;
}
	printf("Tersi : %s \n",S);

	system("PAUSE");
	return 0;
}
