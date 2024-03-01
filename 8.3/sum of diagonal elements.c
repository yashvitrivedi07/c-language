#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int x,y,sum=0,i,j;
	p("Enter the array's row & column size: ");
	s("%d %d",&x,&y);
	
	int a[x][y];
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
		}
		p("\n");
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	p("The sum of diagonal elements of an Array : %d",sum);
}
