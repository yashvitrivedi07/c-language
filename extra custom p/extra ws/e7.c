#include<stdio.h>
#define p printf
main()
{
	int j,i,s;
	for(i=5;i>=1;i--)
	{
		for(s=5;s>i;s--)
		{
			p("  ");
		}
		for(j=1;j<=i;j++)
		{
			p("%d ",j);
		}
		p("\n");
	}
}
