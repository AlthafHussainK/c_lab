#include<stdio.h>

int main(void)
{
  int a = 1, b = 2, x;

  x = a;
  a = b;
  b = x;

  printf("%d %d\n",a,b);
}
