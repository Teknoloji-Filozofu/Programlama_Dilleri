#include <stdio.h>

int main() {
   const int  UZUN = 10;
   const int  KISA = 5;
   const char NEWLINE = '\n';
   int alan;  
   
   alan = UZUN * KISA;
   printf(" Alan : %d ",alan);
   printf(" %c ", NEWLINE);

   return 0;
}