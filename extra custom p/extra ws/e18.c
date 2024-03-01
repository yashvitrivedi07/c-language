#include<stdio.h>
#define p printf
main()
{
	int j,i,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			p("  ");
		}
		for(j=5;j>=i;j--)
		{
			p("%d ",j%2);
		}
		p("\n");
	}
}
