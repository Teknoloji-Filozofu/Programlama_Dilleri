
/* 

  SADIK OKTAY BİÇİCİ
        1180505018


/* 

f(x) = x^3 + 2*x^2 - 5 [2,3] aralığında 10^-2 hata sınırı 
içerisinde doğrusal interpolasyon methodu ile hesaplayınız.


interpolasyıon         a(n)       b(n)     x(n)    hata
1                       --         --       --      --
2                       --         --       --     --
3
--
*/


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float kontrol(float,float);
float fonksiyon(float);
float iterasyon(float,float);
float hataoran(float,float);
float aralik(float);
float kontrol2(float, float);

float G = 2.6900;
float H = 0.01;
float z,h,y,x,d,f,r;
float a = 2;
float b = 3; 

int main(int argc, char *argv[]){

setlocale(LC_ALL, "Turkish");


/*

printf("İlk aralık değerini giriniz : \n");
scanf("%d",&a);

printf("İkinci aralığı giriniz :");
scanf("%d",&b);
*/
kontrol(a,b);

iterasyon(a,b);
printf(" İnterasyon(#)      A(n)         B(n)       X(n)       Hata \n");
printf(" 1. İterasyon       %.3f       %.3f      %.3f      %.3f   \n",a,b,z,h);

kontrol2(h,z);
aralik(z);

iterasyon(a,b);
printf(" 2. İterasyon       %.3f       %.3f      %.3f      %.3f   \n",a,b,z,h);

kontrol2(h,z);
aralik(z);

iterasyon(a,b);
printf(" 3. İterasyon       %.3f       %.3f      %.3f      %.3f   \n",a,b,z,h);

kontrol2(h,z);

return 0;

}

float fonksiyon(float x){

// f(x) = x^3 + 2*2^2 - 5 formülünü 
// sayıları hemen uygulamak için bir fonksiyon yazıyoruz

f = (x*x*x) - 2*(x*x) - 5;

return f;

}


float iterasyon(float a1, float b1){

x = fonksiyon(a1);
y = fonksiyon(b1);

// doğrusal interpolasyon formülünü uyguluyoruz
z = ((a1 * y) - (b1 * x)) / (y - x);

h = G - z;

if(h < 0)
    h = h * -1;


}

float kontrol(float a1, float b1){

x = fonksiyon(a1);
y = fonksiyon(b1);

d = x*y;

// verilen aralıkta kökün varlığını kontrol ediyoruz 
if (d<0)
    printf("Belirtilen aralıkta kök vardır işleme devam edebiliriz! \n");
else 
	printf("Bu arlıkda kök yoktur lütfen farklı bir aralık seçiniz! \n");
}

float aralik(float w){

r = fonksiyon(w);

if(r < 0)
	a = z;
else
	b = z;

}

float kontrol2(float q,float w){

if(q > 0.01)
	aralik(w);
else{
	printf("Belirlenen hata sınırı içerisinde fonksiyon interpolasyon methodu ile hesaplandı.");
}

}
