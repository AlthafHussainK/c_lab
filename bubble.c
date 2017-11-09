#include<stdio.h>
#define N 8
int main(void)
{
    int a[N],i,j,t=0;

    printf("Enter nos: \n");

    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=0; j<N; j++)
    {
        if(a[j]>a[j+1])
        {
            t= a[j+1];
            a[j+1] = a[j];
            a[j] = t;
        }
    }

    for(int k=0; k<N; k++)
    {
        printf("%d\t",a[k]);
    }

    return 0;
}