#include<stdio.h>
#define p printf
main()
{
	int i,j,n=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			p("%d\t",n);
			n+=11;
		}
		p("\n");
	}
}
