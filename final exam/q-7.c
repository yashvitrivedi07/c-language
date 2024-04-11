#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int i,j,k=11;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++,k++)
		{
			p("%d ",k);
		}
		p("\n");
	}
}
