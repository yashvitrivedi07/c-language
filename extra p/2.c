#include<stdio.h>
#define p printf
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			p("%d ",j);
		}
		p("\n");
	}
}

