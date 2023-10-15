#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<string>

void Ekleme(void);
void Listeleme();
void Guncelleme(void);
void Silme(void);
void Arama(void);
void Menu(void);
FILE *filemain;
FILE *filetemp;

char cevap;
char kisiAdı[30];
char kisiSoyadı[50], aranan[50];
int kisiYasi;
int kisiMaasi;

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	do{
		Menu();
		do{
			cevap=getch();
		}
		while((cevap<'0') || (cevap>'6'));
		
		switch(cevap){
			case '1': printf("\n 1- Kayıt Ekleme");
				Ekleme(); 
				break;
			case '2': printf("\n 2- Kayıt Listeleme ");
				Listeleme();
				break;
			case '3': printf("\n 3- Kayıt Güncelleştirme ");
				Guncelleme();
				break;
			case '4': printf("\n 4- Kayıt Silme ");
				Silme();
				break;
			case '5': printf("\n 5- Kayıt Arama ");
				Arama();
				break;
			case '6': printf("\n 6- Progamdan Çıkış ");
				return 0;
				break;
			default: printf("\n Yeniden deneyin ");
		}
	}
	while(cevap='6');

	system("PAUSE");
	return 0;
}

void Ekleme(){

	printf("------------------------------------------------");
	printf("\n |             Kayıt Ekleme                  |");
	printf("\n--------------------------------------------\n");
	
	if((filemain=fopen("PersonelListesi.txt","a"))==NULL){
		printf("\n  Dosya açılamadı. ");
		exit(0);
	}
	printf("\n Kişi Adı : ");
	scanf(" %s ",kisiAdı);
	
	printf("\n Kişi kisiSoyadı : ");
	scanf(" %s ",kisiSoyadı);
	
	printf("\n Kişi Yaşı : ");
	scanf(" %d ",&kisiYasi);
	
	printf("\n Kişi Maaşı : ");
	scanf(" %d ",&kisiMaasi);
	
	fprintf(filemain,"\n %s  %s  %d  %d  \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
	fclose(filemain);
	
	printf("\n Ekleme işlemi başarı ile tamamlandı. Devam etmek için bir tuşa basısınız. ");
	getch();
}

void Listeleme(){

	printf("------------------------------------------------");
	printf("\n |             Kayıt Listeleme               |");
	printf("\n--------------------------------------------\n");
	
	if((filemain=fopen("PersonelListesi.txt","r"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
	}
	
	printf("\n Kişi Adı\tKişi Soyadı\tYaşı\tMaaşı");
	printf("\n---------\t-----------\t----\t-----");
	
	while( !feof(filemain)){
		fscanf(filemain," %s \t %s \t %d \t %d \n",kisiAdı, kisiSoyadı, &kisiYasi, &kisiMaasi);
		
		printf("\n %-15s ",kisiAdı);
		printf("\n %-15s ",kisiSoyadı);
		printf("\n %5d ",kisiYasi);
		printf("\n %10d ",kisiMaasi);
	}
	fclose(filemain);
	
	printf("\n Listeleme işlemi başarı ile tamamlandı. Devam etmek için bir tuşa basınız. ");
	getch();
}

void Guncelleme(){

	char kisiAdıGecici[30];
	char kisiSoyadıGecici[50];
	int kisiYasiGecici;
	int kisiMaasiGecici;
	
	printf("------------------------------------------------");
	printf("\n |         Dosyadan Kayıt Düzeltme           |");
	printf("\n--------------------------------------------\n");
	
	printf("\n Kişi Soyadı : ");
	scanf(" %s ",aranan);
	
	if((filemain= fopen("PersonelListesi.txt","r"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
}
	if((filetemp = fopen("GeciciPersonelListesi.txt","w"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
}
	do{
		fscanf(filemain, "%s  %s  %d  %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
		
		if(strstr(kisiSoyadı,aranan)){
			printf("------------------------------------------------");
			printf("\n |            Kişi Bilgileri                 |");
			printf("\n--------------------------------------------\n");
			
			printf("\n Kişi Adı : %s ",kisiAdı);
			printf("\n Kişi Soyadı : %s ",kisiSoyadı);
			printf("\n Kişi Yaşı : %d ",kisiYasi);
			printf("\n Kişi Maaşı : %d ",kisiMaasi);
			
			printf("------------------------------------------------");
			printf("\n |            Kaydı Düzeltme                 |");
			printf("\n--------------------------------------------\n");
			
			printf("\n Kişi Adı : ");
			scanf(" %s ",kisiAdıGecici);
			
			printf("\n Kişi Soyadı: ");
			scanf(" %s ",kisiSoyadıGecici);
			
			printf("\n Kişi Yaşı : ");
			scanf(" %d ",&kisiYasiGecici);
			
			printf("\n Kişi Maaşı : ");
			scanf(" %d ",&kisiMaasiGecici);
			
			printf("\n\n Yapılan değişikliği kaydetmek istiyor musunuz? ");
			
			printf("\n (e) evet || (h) hayır : ");
			scanf(" %s ",&cevap);
			
			if((cevap=='e')  ||  (cevap=='E'))
				fprintf(filetemp, " %s %s %d %d \n",kisiAdıGecici, kisiSoyadıGecici, kisiYasiGecici, kisiMaasiGecici);
			else 
			fprintf(filetemp, " %s %s %d %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
		}
		else
			fprintf(filetemp, " %s %s %d %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
	}
	while(!feof(filemain));
	fclose(filemain);
	fclose(filetemp);
	remove("PersonelListesi.txt");
	rename("GeciciPersonelListesi.txt","PersonelListesi.txt");
	printf("\n\n");
	printf("Güncelleme işlemi başarı ile tamamlandı. Devam etmek için bir tuşa basınız.");
	getch();
}

void Silme(){

	
	printf("------------------------------------------------");
	printf("\n |          Dosyadan Kayıt Silme             |");
	printf("\n--------------------------------------------\n");
	
	printf("\n Kişi Soyadı : ");
	scanf(" %s ",aranan);
	
	if((filemain= fopen("PersonelListesi.txt","r"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
}
	if((filetemp= fopen("GeciciPersonelListesi.txt","w"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
}
	do{
		fscanf(filemain," %s %s %d %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
		
		if(strstr(kisiSoyadı,aranan)){
			printf("------------------------------------------------");
			printf("\n |            Kişi Bilgileri                 |");
			printf("\n--------------------------------------------\n");
			
			printf("\n Kişi Adı : %s ",kisiAdı);
			printf("\n Kişi Soyadı : %s ",kisiSoyadı);
			printf("\n Kişi Yaşı : %d ",kisiYasi);
			printf("\n Kişi Maaşı : %d ",kisiMaasi);
			printf("\n Bu kaydı silmek istiyor musunuz? ");
			printf("\n (e) evet || (h) hayır : ");
			scanf(" %s ",&cevap);
			
			if(cevap =='e' || cevap=='E')
				fscanf(filemain," %s %s %d %d \n",kisiAdı, kisiSoyadı, &kisiYasi, &kisiMaasi);
			else
				fprintf(filetempi" %s %s %d %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
		}
		else
			fprintf(filetemp," %s %s %d %d \n",kisiAdı, kisiSoyadı, kisiYasi, kisiMaasi);
	}
	while(!feof(filemain));
	fclose(filemain);
	fclose(filetemp);
	remove("PersonelListesi.txt");
	rename("GeciciPersonelListesi.txt","PersonelListesi.txt");
	printf("\n\n");
	printf("Güncelleme başarı ile tamamlandı. Devam etmek için bir tuşa basınız.");
	getch();
}

void Arama(){

	printf("------------------------------------------------");
	printf("\n |          Dosyadan Kayıt Bulma             |");
	printf("\n--------------------------------------------\n");
	
	printf("\n Kişi Soyadı : ");
	scanf(" %s ",aranan);
	
	if((filemain= fopen("PersonelListesi.txt","r"))==NULL){
		printf("\n Dosya açılmadı. ");
		exit(0);
}
	do{
		fscanf(filemain," %s %s %d %d \n",kisiAdı, kisiSoyadı, &kisiYasi, &kisiMaasi);
		
		if(strstr(kisiSoyadı,aranan)){
			printf("------------------------------------------------");
			printf("\n |            Kişi Bilgileri                 |");
			printf("\n--------------------------------------------\n");
			
			printf("\n Kişi Adı : %s ",kisiAdı);
			printf("\n Kişi Soyadı : %s ",kisiSoyadı);
			printf("\n Kişi Yaşı : %d ",kisiYasi);
			printf("\n Kişi Maaşı : %d ",kisiMaasi);
			printf("\n\n");
			printf("Arama işlemi başarı ile tamamlandı. Devam etmek için bir tuşa basınız.");
	}
		else{
			printf("\n\n");
			printf("Aradığınız kayıt bulunamadı. Devam etmek için bir tuşa basınız.");
		}
  }
  while(!feof(filemain));
  
  fclose(filemain);
  getch();
}

void Menu(){

	printf("------------------------------------------------");
	printf("\n |         Personel Takip Programı           |");
	printf("\n--------------------------------------------\n");
	
	printf("\n 1- Kayıt Ekleme        ");
	printf("\n 2- Kayıt Listeleme     ");
	printf("\n 3- Kayıt Güncelleme    ");
	printf("\n 4- Kayıt Silme         ");
	printf("\n 5- Kayıt Arama         ");
	printf("\n 6- Progamdan Çıkış     ");
	
	printf("\n\n\n   SEÇİMİNİZ ?      ");
}
