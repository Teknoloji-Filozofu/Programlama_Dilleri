#include <stdio.h>

int main(void)
{
  char cd1;
  int id1, id2 = 27, id3;
  float fd1;
  double dd1;

  cd1 = 'A';
  id1 = 124;
  fd1 = 8.5;
  dd1 = 64.25;
  
  scanf("%d", &id3);
  
  printf("%c %d %d %d %f %f", cd1, id1, id2, id3, fd1, dd1);
  
  return 0;
}
