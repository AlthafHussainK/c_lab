#include<stdio.h>

int main(void)
{
  long c;

  c = 0;
  while(getchar() != EOF)
	c++;
  printf("%ld\n", c-1);
	
return 0;
}
