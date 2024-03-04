#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n,i,j;
	p("Enter the array's size : ");
	s("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		p("a[%d] :",i);
		s("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			p("Negative elements from an Array: %d ",a[i]);
		}
	}
		
	
}
