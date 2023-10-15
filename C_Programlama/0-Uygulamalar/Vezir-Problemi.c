#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define VEZIRLER  8   /* vezir sayısı ve tahta boyutu */
#define unsigned    /* işaretsiz tam sayı kullan */

int sayi = 0;  /* çözüm sayısı */
int tahta [VEZIRLER];  /* her eleman bir sırayı gösterir */

int tahtaTamam(register int sira){    /* tahtanın geçerliliğini kontrol et */

	register int r;
	
	for(r=0;r<sira;r++)  /* önceki tüm sıraları kontrol et */
		if(tahta[sira]==tahta[r] || tahta[sira]==tahta[r]<<sira-r || tahta[sira]==tahta[r]>>sira-r)
			return 0;  /* uyuşmazlık yoksa */
		return 1;     /* uyuşmazlık yoksa */
}

void cozumyaz(void){    /* çözümü göster; sayıyı arttır  */

	register int t,r;
	
	printf("\n Çözüm %u \n",++sayi);
	
	for(r=0;r<VEZIRLER;r++){
		for(t=1<<VEZIRLER;t>0;t>>=1)
			printf(" %c ",tahta[r]== t ? 'V' : '.');
	}
}

void yerlestir(int sira){    /* bir sonraki sıraya yerleştir */

	if(sira==VEZIRLER)  /* tüm sıralar dolu ve kontrol edilmiş */
		cozumyaz();
	else
		for(tahta[sira]=1;tahta[sira]<1<<VEZIRLER;tahta[sira]<<=1)
			if(tahtaTamam(sira))
				yerlestir(sira+1);  /* bir sonraki sırayı dene */
}

void main(void){

	yerlestir(0);   /* ilk sıradan başla */
	printf("\n %d vezir probleminin %u cozumu vardır. \n",VEZIRLER,sayi);
}
