
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("char -> byte: %d bit: %d min: %d max: %d\n", sizeof(char), sizeof(char)*8, CHAR_MIN, CHAR_MAX);

  printf("unsigned char -> byte: %d bit: %d min: %d max: %d\n", sizeof(unsigned char), sizeof(unsigned char)*8, (unsigned char) 0, UCHAR_MAX);

  printf("signed char -> byte: %d bit: %d min: %d max: %d\n\n", sizeof(signed char), sizeof(signed char)*8, SCHAR_MIN, SCHAR_MAX);

  printf("int -> byte: %d bit: %d min: %d max: %d\n", sizeof(int), sizeof(int)*8, INT_MIN, INT_MAX);

  printf("unsigned int -> byte: %d bit: %d min: %u max: %u\n", sizeof(unsigned int), sizeof(unsigned int)*8, (unsigned int) 0, UINT_MAX);

  printf("short int -> byte: %d bit: %d min: %hd max: %hd\n", sizeof(short int), sizeof(short int)*8, SHRT_MIN, SHRT_MAX);

  printf("unsigned short int -> byte: %d bit: %d min: %hu max: %hu\n\n", sizeof(unsigned short int), sizeof(unsigned short int)*8, 0, USHRT_MAX);

  printf("long int -> byte: %d bit: %d min: %ld max: %ld\n", sizeof(long int), sizeof(long int)*8, LONG_MIN, LONG_MAX);

  printf("long long int -> byte: %d bit: %d min: %lld max: %lld\n", sizeof(long long int), sizeof(long long int)*8, LLONG_MIN, LLONG_MAX);

  printf("unsigned long int -> byte: %d bit: %d min: %lu max: %lu\n", sizeof(unsigned long int), sizeof(unsigned long int)*8, (unsigned long int) 0, ULONG_MAX);

  printf("unsigned long long int -> byte: %d bit: %d min: %llu max: %llu\n\n", sizeof(unsigned long long int), sizeof(unsigned long long int)*8, (unsigned long long int) 0, ULLONG_MAX);

  printf("float -> byte: %d bit: %d min: %g max: %g\n", sizeof(float), sizeof(float)*8, -FLT_MAX, FLT_MAX);
  printf("double -> byte: %d bit: %d min: %lg max: %lg\n", sizeof(double), sizeof(double)*8, -DBL_MAX, DBL_MAX);
  
  printf("long double -> byte: %d bit: %d min: %Lg max: %Lg\n", sizeof(long double), sizeof(long double)*8, -LDBL_MAX, LDBL_MAX);
  
  return 0;
}

