#include<stdio.h>
#define p printf
main()
{
	int j,i,s;
	for(i='A';i<='E';i++)
	{
		for(s='A';s<i;s++)
		{
			p("  ");
		}
		for(j=i;j<='E';j++)
		{
			p("%c ",j);
		}
		p("\n");
	}
}
