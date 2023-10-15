#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAKSIMUM 5

struct Dugum{

	char isim;
	 bool ziyaretedildimi;
};

	// kuyruk yapisiyla ilgili degiskenler
	int kuyruk[MAKSIMUM];
	int arkasi = -1;
	int onu = 0;
	int kuyrukelemanisayisi = 0;
	
	// cizge degiskenleri

	// dugumler dizisi
	struct Dugum* dugumlistesi[MAKSIMUM];
	
	// komsuluk matrisi
	int komsulukmatrisi[MAKSIMUM][MAKSIMUM];
	
	// dugum noktasi sayisi
	int dugumsayisi = 0;
	
	//kuyruk fonksiyonlari
void kuyruga_ekle(int veri){

	kuyruk[++arkasi] = veri;
	kuyrukelemanisayisi++;
}

int kuyruktan_cikar(){

	kuyrukelemanisayisi--;
	return kuyruk[onu++];
}

bool kuyruk_bos(){

	return kuyrukelemanisayisi == 0;
}

	// cizge ile ilgili fonksiyonlar
	
	// dugum ekle
void dugum_ekle(char isim){

	struct Dugum* dugum = (struct Dugum*) malloc(sizeof(struct Dugum));
	dugum->isim = isim;
	dugum->ziyaretedildimi = false;
	dugumlistesi[dugumsayisi++] = dugum;
}

	// yeni cift yonlu kenar baglantisi ekle
void yonsuz_kenarbaglantisi_ekle(int baslangic, int bitis){

	komsulukmatrisi[baslangic][bitis] = 1;
	komsulukmatrisi[bitis][baslangic] = 1;
}

	// yeni tek yonlu kenar baglantisi ekle
void yonlu_kenarbaglantisi_ekle(int baslangic, int bitis){

	komsulukmatrisi[baslangic][bitis] = 1;
}

	// dugum goruntule
void dugum_goruntule(int dugumindeksi){

	printf(" %c ", dugumlistesi[dugumindeksi]->isim);
}

	// ziyaret edilmeyen komsu dugumu getir
int ziyaretedilmeyen_komsuyu_getir(int dugumindeksi){

	int i;
	
	for (i = 0; i<dugumsayisi; i++){
		if(komsulukmatrisi[dugumindeksi][i] ==1 && dugumlistesi[i]->ziyaretedildimi == false)
	return i;
}
	 return -1;
}

void enine_arama_algoritmasi(){

	int i;
	
	// baslangic dugumunun durumunu ziyaret edildi olarak isaretle
	dugumlistesi[0]->ziyaretedildimi = true;
	
	//dugum goruntule
	dugum_goruntule(0);
	
	// dugum indeksini kuyruga ekle
	kuyruga_ekle(0);
	
	// ziyaret edilmemis gudum
	int ziyaretedilmemisdugum;
	
	while (!kuyruk_bos()){
	
		// islem yapilacak ziyaret edilmemis dugumu getir
		int islemyapilandugum = kuyruktan_cikar();
		
		// islem yapilan dugumun tum komsu dugumlerini ziyaret et
		while ((ziyaretedilmemisdugum =ziyaretedilmeyen_komsuyu_getir(islemyapilandugum)) != -1){
			dugumlistesi[ziyaretedilmemisdugum]->ziyaretedildimi = true;
			dugum_goruntule(ziyaretedilmemisdugum);
			kuyruga_ekle(ziyaretedilmemisdugum);
 }
}
	// kuyruk bos, arama tamamlandi, degiskenin degerini ilk haline getir
	for (i = 0; i<dugumsayisi; i++){
		dugumlistesi[i]->ziyaretedildimi = false;
  }
}

void main(){

	int i, j;
	
	// komsuluk matrisini baslangicta sifirla
	for (i = 0; i<MAKSIMUM; i++){
		for (j = 0; j<MAKSIMUM; j++)
			komsulukmatrisi[i][j] = 0;
}

	// dugumleri ekle
	dugum_ekle('S');   // 0
	dugum_ekle('A');   // 1
	dugum_ekle('B');   // 2
	dugum_ekle('C');   // 3
	dugum_ekle('D');   // 4
	
	// kenar baglantilarini ekle
	yonsuz_kenarbaglantisi_ekle(0, 1);   // S - A
	yonsuz_kenarbaglantisi_ekle(0, 2);   // S - B
	yonsuz_kenarbaglantisi_ekle(0, 3);   // S - C
	yonsuz_kenarbaglantisi_ekle(1, 4);   // A - D
	yonsuz_kenarbaglantisi_ekle(2, 4);   // B - D
	yonsuz_kenarbaglantisi_ekle(3, 4);   // C - D
	
	printf("\n Enine Arama Sonuclari: ");
	enine_arama_algoritmasi();
	
	getch();
}
