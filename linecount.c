#include<stdio.h>
main()
{

int c,nl;

	nl=0;
	
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
printf("\n No of Lines %d\n",nl);

}

