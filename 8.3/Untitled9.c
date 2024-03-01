#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,i,j;
	p("enter row size : ");
	s("%d",&r);
	p("enter column size : ");
	s("%d",&c);
	
	int a[r][c],b[r][c];
	
	p("\n\nEnter array A's elements: \n\n");
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
		}
		p("\n");
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("b[%d][%d] : ",i,j);
			s("%d",&b[i][j]);
		}
		p("\n");
	}
	int sum[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",sum[i][j]);
		}
		p("\n");
	}
	
	
}
