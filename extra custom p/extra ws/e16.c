#include<stdio.h>
#define p printf
main()
{
	int j,i,s;
	for(i='E';i>='A';i--)
	{
		for(s='E';s>i;s--)
		{
			p("  ");
		}
		for(j='A';j<=i;j++)
		{
			p("%c ",j);
		}
		p("\n");
	}
}
