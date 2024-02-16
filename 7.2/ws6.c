#include<stdio.h>
#define p printf
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			p("  ");
		}
		for(j=5;j>=i;j--)
		{
			p("%d ",j);
		}
		p("\n");
	}
}
