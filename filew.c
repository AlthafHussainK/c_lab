#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char fname[20];
  char ch;

  printf("Enter filename:\n" );
  scanf("%s",fname);

  fp = fopen(fname,"w");

  if(fp == NULL)
  {
    printf("File does'nt created!\n" );
    exit(0);
  }
  printf("File created successfully\n" );

  printf("Enter text\n" );

  while( (ch=getchar()) != EOF)
  {
    putc(ch,fp);
  }
  fclose(fp);

  fp = fopen(fname,"r");

  printf("File :\n" );

  while((ch=getc(fp)) != EOF)
  {
    printf("%c",ch );
  }
  fclose(fp);
  return 0;
}
