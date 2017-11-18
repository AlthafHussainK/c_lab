#include<stdio.h>
int factr(int n);
int main()
{

	int n,r;
	scanf("%d",&n);
	
	r=factr(n);
	
	printf("%d",r);
	
int factr(int n)
	
	{
	
		int p=1;
		for(int i=n; i>0; i++)
		p=p*i;
		
		return p;
		
	}
	
}
 	
