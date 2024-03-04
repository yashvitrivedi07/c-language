#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,row1,col1,sum=0,i,j,sum1=0;
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
	p("enter row number : ");
	s("%d",&row1);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row1)
			{
				p("%d ",a[i][j]);
				sum+=a[i][j];
			}
		}
	}
	p("sum of row : %d",sum);
	
	
	
	p("\n\nenter column number : ");
	s("%d",&col1);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==col1)
			{
				p("%d ",a[i][j]);
				sum1+=a[i][j];
			}
		}
	}
	p("sum of column : %d",sum);
}
