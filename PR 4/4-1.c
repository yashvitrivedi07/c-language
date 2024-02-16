#include<stdio.h>
#define p printf
main()
{
	int i,j;
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=i;j++)
		{
			p("%d ",j);
		}
		p("\n");
	}
}
