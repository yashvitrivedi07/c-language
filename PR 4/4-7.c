#include<stdio.h>
#define p printf
main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			p(" ");
		}
		for(j=i;j<=5;j++)
		{
			p("*");
		}
		for(j=4;j>=i;j--)
		{
			p("*");
		}
		p("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			p(" ");
		}
		for(j=i;j<=5;j++)
		{
			p("*");
		}
		for(j=4;j>=i;j--)
		{
			p("*");
		}
		p("\n");
	}
}
