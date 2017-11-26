#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int board[3][3] = {{1,2,6},{4,7,8},{3,5}};
  int d = 3;

  for(int i = 0; i < d; i++)
    {
      for(int j = 0; j < d - 1; j++)
      {
        if(i == d-1 && j == d-1)
          {
            exit(-1);
          }

        if(board[i][j] > board[i][j+1])
        {
          printf("Loss! %d\n", board[i][j]);
          exit(0);
        }
        }
    }
    for(int j = 0; j < d; j++)
      {
        for(int i = 0; i < d - 1; i++)
        {
          if(i == d-1 && j == d-1)
            {
              return 1;
            }
          if(board[i][j] > board[i+1][j])
          {
            printf("Loss! %d\n", board[i][j]);
            exit(0);
          }
        }
      }
      return 1;
}
