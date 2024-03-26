#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int r,c;
	p("enter row size : ");
	s("%d",&r);
	p("enter column size : ");
	s("%d",&c);
	
	int a[r][c];
	int i,j,k;
	
	
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
			p("%d ",a[i][j]);
		}
		p("\n");
	}
	
	
	int swap=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c-1;j++)	
		{
			for(k = 0; k < c-j-1; k++)
			{
				if(a[i][k] > a[i][k+1]) {
                    swap = a[i][k];
                    a[i][k] = a[i][k+1];
                    a[i][k+1] = swap;
                }			
			}				
		}
	}
	p("swap \n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)	
		{
			p("%d ",a[i][j]);
		}
		p("\n");
	}
}
