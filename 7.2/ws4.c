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
		for(j=i;j<=5;j++)
		{
			p("%d ",j%2);
		}
		p("\n");
	}
}
