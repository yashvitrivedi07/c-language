#include<stdio.h>
#define p printf
main()
{
	int j,i,s;
	for(i='E';i>='A';i--)
	{
		for(s='A';s<i;s++)
		{
			p("  ");
		}
		for(j='E';j>=i;j--)
		{
			p("%c ",j);
		}
		p("\n");
	}
}
