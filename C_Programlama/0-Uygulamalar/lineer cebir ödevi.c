#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
// 1180505018 SADIK OKTAY BÝÇÝCÝ
// 1180505005 CÝHAT CAN BAYTOZ
int main () {
	int a;
	donbasa: 
	
	//Giris sayfasini ve arayuz tarzi bir seyler olusturuyoruz.
	printf ("\t\tMatris Hesaplamalarinin Yapildigi Programa\n\t\t\t\tHOSGELDINIZ\n\n");
	printf ("1) Iki Matris Ile Yapilan Islemler \t \t 2) Tek Matris Ile Yapilan Islemeler\n\n");
	printf ("Yukaridaki islemlerden birini seciniz: ");
	scanf ("%d", &a);
	printf ("\n\n\n---------------------------------------------------------------------");
	
	
	//Iki matris ile yapilcak islemleri olusturuyoruz.
	if (a==1){
	
	int satir, satir1, sutun, sutun1, satirSay = 0, sutunSay = 0, i, k, l, sayac, deger;
		
	basadon:
		
	//Kullanicidan hesaplanacak ilk matrisi aliyoruz. 
	printf("\n\nHesaplanacak ilk matrisin satir ve sutun sayilarini belirleyiniz. \n");
    printf("Matirisin satir buyuklugunu giriniz: ");
    scanf("%d", &satir);
    printf("Matrisin sutun buyuklugunu giriniz: ");
    scanf("%d", &sutun);
    
    int matris[satir][sutun];
    
	printf("\nIlk matrisin degerlerini giriniz: \n");
	for(satirSay = 0; satirSay < satir; satirSay++){
        for(sutunSay = 0; sutunSay < sutun; sutunSay++){
            printf("%d. satir %d. sutun degerini giriniz: ",satirSay+1,sutunSay+1);
            scanf("%d", &matris[satirSay][sutunSay]);
            printf("\n");
            }
        }


	printf("\n--------------------------------------------------------------------------------------\n");
    
    //Kullanicidan hesaplanacak ikinci matrisi aliyoruz.
    printf("Hesaplanacak ikinci matrisin satir ve sutun sayilarini belirleyiniz. \n");   
    printf("Matirisin satir buyuklugunu giriniz: ");
    scanf("%d", &satir1);
    printf("Matrisin sutun buyuklugunu giriniz: ");
    scanf("%d", &sutun1);
    
    int matris1[satir1][sutun1];
    
	printf("\nIkinci matrisin degerlerini giriniz: \n");
    for(satirSay = 0; satirSay < satir1; satirSay++){
    for(sutunSay = 0; sutunSay < sutun1; sutunSay++){
        printf("%d. satir %d. sutun degerini giriniz: ",satirSay+1,sutunSay+1);
        scanf("%d", &matris1[satirSay][sutunSay]);
        printf("\n");
}
}
        
        
	printf("\n--------------------------------------------------------------------------------------\n");
	
	
	//Kullanicidan alinan matrisleri gosterelim.
	printf("Girdiginiz ilk matris: \n");
	for(satirSay = 0; satirSay < satir; satirSay++){
    for(sutunSay = 0; sutunSay < sutun; sutunSay++){
        printf("%3d", matris[satirSay][sutunSay]);
}
        printf("\n");
}
        
    printf("Girdiginiz ikinci matris: \n");    
    for(satirSay = 0; satirSay < satir1; satirSay++){
    for(sutunSay = 0; sutunSay < sutun1; sutunSay++){
        printf("%3d", matris1[satirSay][sutunSay]);
}
        printf("\n");
}
        
    printf("\n--------------------------------------------------------------------------------------\n");
        
    islem:
    //Kullanicidan yapmak istedigi islemi secmesini isteyelim.
    printf("1) Toplama \t 2) Cikarma \t 3) Carpma \t 4) Baslangic \n Lutfen yukarida belirtilen seceneklerden yapmak istediginiz secenegin rakamini giriniz: ");
    scanf("%d", &i); 
    
    printf("\n--------------------------------------------------------------------------------------\n");
    
    int toplam[satir][sutun];
	int cikarma[satir][sutun];
	int carpma[satir][sutun1];
    
    switch(i){
	//Toplama islemi
	case 1: 
	if(satir!=satir1 || sutun!=sutun1){
        printf("Hesaplamalarin yapilabilmesi icin matrislerin ayni boyutta olmasi gerek.\n");
		goto basadon;
}
		else ;
		
	for (k=0; k<satir; k++){
	for(l=0; l<sutun; l++){
		toplam [k][l] = matris [k][l] + matris1 [k][l];
}
}
	
	printf("Sonuc: \n");
	
	for (k=0; k<satir; k++){
	for(l=0; l<sutun; l++){
		printf("%3d", toplam [k][l]);
}
		printf ("\n");
}       goto islem;
	    break;
	
	//Cikarma islemi
	case 2: 
	if(satir!=satir1 || sutun!=sutun1){
        printf("Hesaplamalarin yapilabilmesi icin matrislerin ayni boyutta olmasi gerek.\n");
		goto basadon;
}
		else ;
		
	for (k=0; k<satir; k++){
	for(l=0; l<sutun; l++){
		cikarma [k][l] = matris [k][l] - matris1 [k][l];
}
}
	
	printf ("Sonuc: \n");
	for (k=0; k<satir; k++){
	for(l=0; l<sutun; l++){
		printf("%3d", cikarma [k][l]);
}
		printf ("\n");
}       goto islem;
	    break;
	
	//Carpma islemi
	case 3:
	if (satir!=sutun1){
		printf ("Hesaplamanin yapilabilmesi icin ilk matrisin satiri ile ikinci matrisin sutun degerleri ayni olmalidir.");
		goto basadon;
} 
	else ;
	
	for(k=0; k<satir; k++){
	for (l=0; l<sutun; l++){
		deger=0;
	for (sayac=0; sayac<sutun; sayac++){
		deger+= matris [k][l] * matris1 [l][k];
}
		carpma [k][l] = deger;
}
}
	
	printf("Sonuc:\n");
	
	for (k=0; k<satir; k++){
	for(l=0; l<sutun; l++){
		printf ("%3d", carpma [k][l]);
}
		printf ("\n");
}       goto islem; 
	    break;
	    
	    case 4:
	    	goto donbasa;
	    	break;
	
	//Kullanicinin olmayan bir secenegin rakamini girmesi durumunda bunu duzeltmesini isteyelim.
	
	default: 
	
	    printf ("Lutfen dogru bir rakam giriniz!!\n\n");
	
	    goto islem;
} 
    
}

	
	
	//Tek matris ile yapilacak islemleri olusturuyoruz.
	
	else {
	int satir2, sutun2,satirSay1 = 0, sutunSay1 = 0,c,t,r,determinant = 0,sayac1,count=0;	
	int satir, satir1, sutun, sutun1, sutunSay = 0, i, k, l,z, sayac, deger;

    dondon:

	printf("\n\n Islem yapmak istediginiz matrisin satir ve sutun sayilarini belirleyiniz. \n");
    printf("Matirisin satir buyuklugunu giriniz: ");
    scanf("%d", &satir2);
    printf("Matrisin sutun buyuklugunu giriniz: ");
    scanf("%d", &sutun2);
    
    int matris2[satir2][sutun2];
    int elemansys= satir2*sutun2;
    
	printf("\n  Matrisin degerlerini giriniz: \n");
	for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
    for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
        printf("%d. satir %d. sutun degerini giriniz: ",satirSay1+1,sutunSay1+1);
        scanf("%d", &matris2[satirSay1][sutunSay1]);
        printf("\n");
}
}

    printf("Girdiginiz matris: \n");
	for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
    for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
        printf("%3d", matris2[satirSay1][sutunSay1]);
}
        printf("\n");
}
    printf("\n--------------------------------------------------------------------------------------\n");
        
        tonton:
    islem2:
    //Kullanicidan yapmak istedigi islemi secmesini isteyelim.
    printf("\n 1) Determinant hesabi \t 2) Involitif Kontrolu \t 3) Matrisin Tersi \t 4) Sabit sayi ile carpma \t 5) Baslangic \n Lutfen yukarida belirtilen seceneklerden yapmak istediginiz secenegin rakamini giriniz: ");
    scanf("%d", &c); 
    
    printf("\n--------------------------------------------------------------------------------------\n");
    
   int birim_matris[satir2][sutun2];
    for(satir2=0; satir2<satir; satir2++){
	    for (sutun2=0; sutun2<sutun; sutun2++){
		if(satir2 == sutun2){
			birim_matris[satir2][sutun2]=1;
		}
		else{
			birim_matris[satir2][sutun2]=0;
		}
}
}

	int matris2_invo[t][r];
	int matris2_ters[t][r];
	int matris2_ek[satir2][sutun2];
	int matris_crpm[satir2][sutun2];
	
	switch(c){
	//Determinant hesaplama
	case 1: 
/*	if(satir2 != sutun2 ){
		printf("Lutfen kare bir matris giriniz");
		goto dondon;
}*/
	 if(satir2 == sutun2 && satir2 == 2){
        determinant = (matris2[0][0]*matris2[1][1])-(matris2[0][1]*matris2[1][0]);
        
        printf("determinant: %3d ",determinant);
		
}
	else if (satir2 == sutun2 && satir2 == 3){
		determinant = matris2[0][0] * ((matris2[1][1]*matris2[2][2]) - (matris2[2][1]*matris2[1][2])) -matris2[0][1] * (matris2[1][0]
        * matris2[2][2] - matris2[2][0] * matris2[1][2]) + matris2[0][2] * (matris2[1][0] * matris2[2][1] - matris2[2][0] * matris2[1][1]);
   
       		printf("determinant: %3d ",determinant);
       		 
}
    goto tonton;
	break;
	
	//involitif kontrolu
	case 2: 
	
        for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
        for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
		    matris2_invo [satir2][sutun2]+= matris2[satir2][sutun2] * matris2[satir2][sutun2];	
}
}
       for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
       for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
       	    if(matris2_invo[satir2][sutun2] == birim_matris[satir2][sutun2]){
       		count++;
}
}
}
    if(count == elemansys){
    	printf("\n Matris involotiftir. \n");
	}
	else {
		printf("\n matris involotif degilildir.");
	}
   goto tonton;
   break;
	    
	
	//matrisin tersi alma 
	case 3:
		if(satir2 != sutun2){
			printf(" Lutfen kare bir matris giriniz.");
			goto dondon;
}
		else if(satir2 == 2){
			determinant=matris2[0][0]*matris2[1][1]-matris2[0][1]*matris2[1][0];
		
		if(determinant == 0)
			printf("\n Bu matrisin tersi mevcut degildir");
			
		else{
				matris2_ters[0][0]=matris2[1][1]/ determinant;
				matris2_ters[0][1]=(-1)*matris2[0][1]/determinant;
				matris2_ters[1][0]=(-1)*matris2[1][0]/determinant;
				matris2_ters[1][1]=matris2[0][0]/determinant;
				
			printf ("\n Girdiginiz matrisin tersi: \n");
			for (satir2=0; satir2<satir; satir2++){
	        for(sutun2=0; sutun2<sutun; sutun2++){
		        printf ("%3d", matris2_ters[satir2][sutun2]);
}
}
}
}
		else if(satir2 == 3){
			
			matris2_ek[0][0]= (matris2[1][1]*matris2[2][2]-matris2[1][2]*matris2[2][1]);
            matris2_ek[0][1]= (-1)*(matris2[1][0]*matris2[2][2]-matris2[1][2]*matris2[2][0]);
            matris2_ek[0][2]= (matris2[1][0]*matris2[2][1]-matris2[1][1]*matris2[2][0]);
            matris2_ek[1][0]= (-1)*(matris2[0][1]*matris2[2][2]-matris2[0][2]*matris2[2][1]);
            matris2_ek[1][1]= (matris2[0][0]*matris2[2][2]-matris2[0][2]*matris2[2][0]);
            matris2_ek[1][2]= (-1)*(matris2[0][0]*matris2[2][1]-matris2[0][1]*matris2[2][0]);
            matris2_ek[2][0]= (matris2[0][1]*matris2[1][2]-matris2[1][1]*matris2[0][2]);
            matris2_ek[2][1]= (-1)*(matris2[0][0]*matris2[1][2]-matris2[1][0]*matris2[0][2]);
            matris2_ek[2][2]= (matris2[0][0]*matris2[1][1]-matris2[1][0]*matris2[0][1]);
			
			
			determinant = matris2[0][0] * ((matris2[1][1]*matris2[2][2]) - (matris2[2][1]*matris2[1][2])) -matris2[0][1] * (matris2[1][0]
        * matris2[2][2] - matris2[2][0] * matris2[1][2]) + matris2[0][2] * (matris2[1][0] * matris2[2][1] - matris2[2][0] * matris2[1][1]);
   
       		 
			matris2_ters [satir2][sutun2]=matris2_ek [satir2][sutun2]/determinant;
		
		printf ("Girdiginiz matrisin tersi: \n");
		for (satir2=0; satir2<satir; satir2++){
	    for(sutun2=0; sutun2<sutun; sutun2++){
		    printf ("%3d", matris2_ters[satir2][sutun2]);
}
}
}
    goto tonton;
	break;  
	
	
   // matrisi sabit sayý ile çarpma 
   case 4:
   	printf("\n Carpmak istediginiz sayiyi giriniz\n");
   	scanf("%d", &z);
   		
   for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
    for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
		matris_crpm[satirSay1][sutunSay1]=z * matris2[satir2][sutun2];
}
}
	
	printf("Sonuc:\n");
	
    for(satirSay1 = 0; satirSay1 < satir2; satirSay1++){
    for(sutunSay1 = 0; sutunSay1 < sutun2; sutunSay1++){
        printf("%3d", matris_crpm[satirSay1][sutunSay1]);
}
}
       goto tonton; 
	break;
   
   //Baþa dönmek için 
    case 5:
	    goto donbasa;
	    break;
	    
	    
	    default: 
	
	    printf ("Lutfen dogru bir rakam giriniz!!\n\n");
	
	    goto dondon;
} 
	
}
}

