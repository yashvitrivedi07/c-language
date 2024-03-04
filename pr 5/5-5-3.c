#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,i,j;
	p("Enter the array's row size: ");
	s("%d",&r);
	p("Enter the array's column size: ");
	s("%d",&c);
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] :",i,j);
			s("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",a[j][i]);
		}
		p("\n");
	}
}
