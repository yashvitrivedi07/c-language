#include<stdio.h>
#define p printf
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=5;s>=i;s--)
		{
			p(" ");
		}
		
		for(j=1;j<i;j++)
		{
			p("%d",j);
		}
		for(j=i;j>=1;j--)
		{
			p("%d",j);
		}
    	p("\n");
	}

}
