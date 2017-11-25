#include<stdio.h>
#define d 4

int main(void)
{
  int board[d][d];
  int n = d*d - 1;

  for(int i = 0; i < d; i++)
  {
    for(int j = 0; j < d; j++)
    {
      board[i][j] = n;
      n--;
    }
  }


    for(int i = 0; i < d; i++)
    {
      for(int j = 0; j < d; j++)
      {
        printf("%d\t", board[i][j]);

      }
      printf("\n");
    }
}
