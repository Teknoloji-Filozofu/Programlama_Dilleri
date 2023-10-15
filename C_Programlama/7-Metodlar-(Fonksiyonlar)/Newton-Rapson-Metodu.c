/* 


   SADIK OKTAY B���C�
          1180505018



/* 

f(x) = x^3 - 2*x^2 - 5 [2,3] aralığında 10^-2 hata sınırı 
içerisinde Newton Raphson methodu ile hesaplayınız.


interasyon         a(n)       b(n)     x(n)    hata
1                       --         --       --      --
2                       --         --       --     --
3
--
*/


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float fonksiyon(float);
float fonksiyonturev(float);
float iterasyon(float);
float kontrol(float);

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

iterasyon(a);
printf(" İnterasyon(#)      X(n)         X(n+1)           Hata \n");
printf(" 1. İterasyon       %.3f       X(1)            %.3f   \n",a,h);

kontrol(h);

iterasyon(a);
printf(" 2. İterasyon       %.3f       X(2)            %.3f   \n",a,h);

kontrol(h);

iterasyon(a);
printf(" 3. İterasyon       %.3f       X(3)            %.3f   \n",a,h);

kontrol(h);

return 0;

}

float fonksiyon(float x){

// f(x) = x^3 - 2*2^2 - 5 formülünü 
// sayıları hemen uygulamak için bir fonksiyon yazıyoruz

f = (x*x*x) - 2*(x*x) - 5;

return f;

}

float fonksiyonturev(float x){

// f(x) = x^3 - 2*2^2 -5 fonksiyonunun türevini alıyoruz

f = 3*(x*x) - 4 *x ;

return f;

}


float iterasyon(float a1){

x = fonksiyon(a1);
y = fonksiyonturev(a1);

// doğrusal interpolasyon formülünü uyguluyoruz
z = a - (x/y);

h = G - z;

if(h < 0)
    h = h * -1;


}

float kontrol(float q){

if(q > 0.01)
	a = z;
else{
	printf("Belirlenen hata sinirlari icerisinde fonksiyon Newton Raphson methodu ile hesaplandi.");
}

}
