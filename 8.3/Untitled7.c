#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,i,j;
	float sum=0;
	p("enter row size : ");
	s("%d",&r);
	p("enter column size : ");
	s("%d",&c);
	int a[r][c];
	p("\n\nenter elements : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
			sum+=a[i][j];
		}
		p("\n");
	}
		p("Average of an Array : %.2f",sum/(r*c));
}
