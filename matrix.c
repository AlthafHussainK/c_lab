#include<stdio.h>
int main()
{

int a[3][3],i,j;

printf("Enter the matrix\n");

for(i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{	scanf("%d",&a[i][j]);
	}	
}
for(i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
		{printf("%d\t",a[i][j]);}
		
		printf("\n");
		
}
return 0;

}
