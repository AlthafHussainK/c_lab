#include<stdio.h>

int main(void)
{
  int numbers[] = {9,8,7,6,5,4,3,2,1,0};
  int sort[10];

  int swapc = 1,i = 0;

  while(swapc != 0)
  {
    swapc = 0;
    if(i > 9)
      i = 0;
    if (numbers[i] > numbers[i+1])
        {
          sort[i] = numbers[i+1];
          sort[i+1] = numbers[i];

          swapc++;
        }
        i++;
  

  }
  for(int i = 0; i < 10; i++)
  {
    printf("%d\n", sort[i]);
  }
}
