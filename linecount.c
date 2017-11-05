#include<stdio.h>

int main(void)
{
  int c,nl = 0;
	
  while((c = getchar()) != EOF)
	if(c == '\n')
          ++nl;
  printf("\n No of Lines %d\n",nl);
}

