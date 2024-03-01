#include<stdio.h>
#define p printf
main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			p("%d ",j);
		}
		p("\n");
	}
}

