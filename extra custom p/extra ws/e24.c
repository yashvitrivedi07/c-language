#include<stdio.h>
#define p printf
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=5;s>=i;s--)
		{
			p("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2)
			{
				p("| ");
			}
			else
			{
				p("- ");
			}
		}
		p("\n");
	}
}