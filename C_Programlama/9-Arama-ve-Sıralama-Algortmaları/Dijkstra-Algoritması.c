#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAKS 5
#define SONSUZ 9999

struct Dugum{

	char isim;
	bool ziyaretedildimi;
};

	// cizge degiskenleri
	
	// dugumler dizisi
	struct Dugum* dugumlistesi[MAKS];
	
	// komsuluk matrisi
	int komsulukmatrisi[MAKS][MAKS];
	
	// dugum noktasi sayisi
	int dugumsayisi = 0;
	
	// cizge ile ilgili fonksiyonlar
	
	// dugum ekle
void dugum_ekle(char isim){

	struct Dugum* dugum = (struct Dugum*) malloc(sizeof(struct Dugum));
	dugum->isim = isim;
	dugum->ziyaretedildimi = false;
	dugumlistesi[dugumsayisi++] = dugum;
}

	// yeni cift yonlu kenar baglantisi ekle
void yonsuz_kenarbaglantisi_ekle(int baslangic, int bitis,int mesafe){

	komsulukmatrisi[baslangic][bitis] = mesafe;
	komsulukmatrisi[bitis][baslangic] = mesafe;
}

	// yeni tek yonlu kenar baglantisi ekle
void yonlu_kenarbaglantisi_ekle(int baslangic, int bitis, int mesafe){

	komsulukmatrisi[baslangic][bitis] = mesafe;
}

	// dugum goruntule
void dugum_goruntule(int dugumindeksi){

	printf(" %c ", dugumlistesi[dugumindeksi]->isim);
}

	// en kisa yol algoritma fonksiyonu
void dijkstra(int baslangicdugumu){

	int mtablosu[MAKS][MAKS],mesafe[MAKS],onceki[MAKS],enkisayol[MAKS];
	int ziyaretli[MAKS], sayi, enkmesafe, sonraki, i, j, k;
	
	//onceki[] her dugumun oncesindeki dugumu saklar
	//en kisa yollari tutan mesafe tablosu matrisini olustur
	for (i = 0; i<MAKS; i++)
		for (j = 0; j<MAKS; j++)
			if (komsulukmatrisi[i][j] == 0)
				mtablosu[i][j] = SONSUZ;
			else
				mtablosu[i][j] = komsulukmatrisi[i][j];
				
	for (i = 0; i<MAKS; i++){
		mesafe[i] = mtablosu[baslangicdugumu][i];
		onceki[i] = baslangicdugumu;
		ziyaretli[i] = 0;
} 

	mesafe[baslangicdugumu] = 0;
	ziyaretli[baslangicdugumu] = 1;
	sayi = 1;
	while (sayi<MAKS - 1){
		enkmesafe = SONSUZ;
		
	//sonraki en kisa mesafeyi verir
	for (i = 0; i<MAKS; i++)
	if (mesafe[i]<enkmesafe && !ziyaretli[i]){
		enkmesafe = mesafe[i];
		sonraki = i;
}

	//daha iyi bir yol olup olmadigini kontrol et
	ziyaretli[sonraki] = 1;
	for (i = 0; i<MAKS; i++)
		if (!ziyaretli[i])
			if (enkmesafe + mtablosu[sonraki][i] < mesafe[i]){
				mesafe[i] = enkmesafe + mtablosu[sonraki][i];
				onceki[i] = sonraki;
}
		sayi++;
}

	//en kisa mesafenin elde edildigi yolu ekrana bas
	for (i = 0; i < MAKS; i++){
		for (k = 0; k < MAKS; k++){
			enkisayol[k] = -1;
}
		k = MAKS;
		if (i != baslangicdugumu){
			j = i;
			do{
				k--;
				j = onceki[j];
				enkisayol[k] = j;
				//printf(" %d ", j);
} 
			while (j != baslangicdugumu);
}

		printf("\n %d. dugum icin en kisa mesafe= %d ", i,mesafe[i]);
		printf("\n Yol = ");
		
		for (k = 0; k<MAKS; k++){
			if (enkisayol[k]!=-1)
				printf(" %d ",enkisayol[k]);
}
			printf(" %d ", i);
 }
}

void main(){

	int i, j, baslangic_dugum;
	
	// komsuluk matrisini baslangicta sifirla
	for (i = 0; i<MAKS; i++){
		for (j = 0; j<MAKS; j++)
			komsulukmatrisi[i][j] = SONSUZ;
}
	// dugumleri ekle
	dugum_ekle('0'); // 0
	dugum_ekle('1'); // 1
	dugum_ekle('2'); // 2
	dugum_ekle('3'); // 3
	dugum_ekle('4'); // 4
	
	// kenar baglantilarini ekle
	yonsuz_kenarbaglantisi_ekle(0, 1, 4);  // 0 - 1 = 4
	yonsuz_kenarbaglantisi_ekle(0, 3, 8);  // 0 - 3 = 8
	yonsuz_kenarbaglantisi_ekle(1, 2, 3);  // 1 - 2 = 3
	yonsuz_kenarbaglantisi_ekle(2, 3, 4);  // 2 - 3 = 4
	yonsuz_kenarbaglantisi_ekle(3, 4, 7);  // 3 - 4 = 7
 
	// Baslangic dugumunu gir
	printf("\n Baslangic dugumunu sec: ");
	scanf(" %d ", &baslangic_dugum);

	// Dijkstra algoritmasini calistir
	dijkstra(baslangic_dugum);
	
	getch();
}





