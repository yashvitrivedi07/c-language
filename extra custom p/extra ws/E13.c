#include<stdio.h>
#define p printf
main()
{
	char j,i,s;
	for(i='A';i<='E';i++)
	{
		for(s='E';s>i;s--)
		{
			p("  ");
		}
		for(j=i;j>='A';j--)
		{
			p("%c ",j);
		}
		p("\n");
	}
}
