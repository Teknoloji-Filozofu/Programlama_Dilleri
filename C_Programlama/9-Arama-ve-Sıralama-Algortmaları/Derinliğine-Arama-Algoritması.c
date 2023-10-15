#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAKSIMUM 5

struct Dugum{

	char isim;
	bool ziyaretedildimi;
};

// yigin yapisiyla ilgili degiskenler
	int yigin[MAKSIMUM];
	int ust = -1;

	// dugumler dizisi
	struct Dugum* dugumlistesi[MAKSIMUM];
	
	// komsuluk matrisi
	int komsulukmatrisi[MAKSIMUM][MAKSIMUM];
	
	// dugum noktasi sayisi
	int dugumsayisi = 0;
	
	// yigin fonksiyonlari
void yigina_ekle(int veri){

	yigin[++ust] = veri;
}

int yigindan_cikar(){

	 return yigin[ust--];
}

int yigin_enusstekini_goster(){

	return yigin[ust];
}

bool yigin_bos(){
 
	return ust == -1;
}

	// cizge ile ilgili fonksiyonlar
	
	// dugum ekle
void dugum_ekle(char isim){

	struct Dugum* dugum = (struct Dugum*) malloc(sizeof(struct));
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
void dugum_goruntule(int vertexIndex){

	printf(" %c ", dugumlistesi[vertexIndex]->isim);
}

	// ziyaret edilmeyen komsu dugumu getir
int ziyaretedilmeyen_komsuyu_getir(int dugumindeksi){

	int i;
	
	for (i = 0; i<dugumsayisi; i++){
		if(komsulukmatrisi[dugumindeksi][i] == dugumlistesi[i]->ziyaretedildimi == false)
		return i;
}
	return -1;
}

void once_derinligine_arama_algoritmasi(){

	int i;
	
	// baslangic dugumunun durumunu ziyaret edildi olarak isaretle
	dugumlistesi[0]->ziyaretedildimi = true;
	
	//dugum goruntule
	dugum_goruntule(0);
	
	// dugum indeksini kuyruga ekle
	yigina_ekle(0);
	
	// ziyaret edilmemis dugum
	int ziyaretedilmemisdugum;
	
	while (!yigin_bos()){
		// ziyaret edilmemis kuyrugu getir
		ziyaretedilmemisdugum = ziyaretedilmeyen_komsuyu_getir(yigin_enusstekini_goster());
		
		if (ziyaretedilmemisdugum == -1){
			yigindan_cikar();
}
		else{
			dugumlistesi[ziyaretedilmemisdugum]->ziyaretedildimi = true;
			dugum_goruntule(ziyaretedilmemisdugum);
			yigina_ekle(ziyaretedilmemisdugum);
 }
}

	// yigin bos, arama tamamlandi, degiskenin degerini ilk haline getir
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

	dugum_ekle('S');  // 0
	dugum_ekle('A');  // 1
	dugum_ekle('B');  // 2
	dugum_ekle('C');  // 3
	dugum_ekle('D');  // 4

	yonsuz_kenarbaglantisi_ekle(0,1);   // S - A
	yonsuz_kenarbaglantisi_ekle(0,2);   // S - B
	yonsuz_kenarbaglantisi_ekle(0,3);   // S - C
	yonsuz_kenarbaglantisi_ekle(1,4);   // A - D
	yonsuz_kenarbaglantisi_ekle(2,4);   // B - D
	yonsuz_kenarbaglantisi_ekle(3,4);   // C - D 

	printf("\n Once Derinligine Arama Sonuclari: ");
	once_derinligine_arama_algoritmasi();
	
	getch();
}
