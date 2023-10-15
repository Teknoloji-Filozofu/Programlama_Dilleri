#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

double Integral(float, float, int);
double Fonk(float);

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Turkish");
	
	float bas,son;
	int bs;
	double sonuc;
	
	printf("\n İntegral aralık başlangıcı : ");
	scanf(" %f ",&bas);
	
	printf("\n İntegral aralık sonu : ");
	scanf(" %f ",&son);
	
	printf("\n Aralık bölüm sayısı(çift) : ");
	scanf(" %d ",&bs);
	
	sonuc=Integral(bas,son,bs);
	
	printf("\n İntegral değeri : %f ",sonuc);
	
	system("PAUSE");
	return 0;
}

double Integral(float a,float b, int n){

	double F[100], toplam,integ;
	float h,x;
	int i;
	
	h=(b-a)/n;
	x=a;
	
	for(i=0;i<n;i++){
		F[i]=Fonk(x);
		x+=h;
}

	toplam=0;
	
	for(i=1;i<n-1;i+=2){
		toplam+=4*F[i]+2*F[i+1];
}
	integ=(h/3)*(toplam+F[0]+F[n-1]);

	return integ;
}

double Fonk(float z){

	float f;
	
	f=exp(-4*z)*pow((0.5+z),5); /* hazır C matematik fonksiyonları */
	
	return f;
}
