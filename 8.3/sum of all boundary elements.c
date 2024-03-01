#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int i,j,r,c;
	p("enter array size : ");
	s("%d",&r);
	p("enter array size : ");
	s("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			{
				p("%d ",a[i][j]);
			}
			else
			{
				p("  ");
			}
		}
		p("\n");
	}
}
