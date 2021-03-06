#include<stdio.h>

int collatz(int n);

int main(void)
{
  int x;
  printf("Enter n: \n");
  scanf("%d", &x);
  int cn = 1;
  cn = collatz(x);
  printf("CN: %d\n", cn);
  //return 0;
}

int collatz(int n)
{
  if(n == 1)
    return 0;
  else if ((n % 2) == 0)
    return 1 + collatz(n/2);
  else
    return 1 + collatz(3*n + 1);
}
