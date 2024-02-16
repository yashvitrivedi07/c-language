#include<stdio.h>
#define p printf
main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			p("  ");
		}
		for(j=i;j<=5;j++)
		{
			p("%d ",i);
		}
		p("\n");
	}
}
