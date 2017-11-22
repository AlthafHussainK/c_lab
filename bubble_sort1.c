#include<stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int array[], int n)
{
  int i, j;
  for(i = 0; i < n-1; i++)
  {
    for(int j = 0; j < n-1 - i; j++)
      if(array[j] > array[j+1])
        swap(&array[j], &array[j+1]);
  }
}

void print_array(int array[], int n)
{
  for(int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  int array[] = {9,8,7,6,5,4,3,2,1,0};
  int n = sizeof(array) / sizeof(int);
  bubble_sort(array,n);
  printf("Sorted Array:\n");
  print_array(array, n);
  return 0;
}
