#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n,i;
	p("enter size of array : ");
	s("%d",&n);
	int a[n];
	int b[n];
	int c[i];
	p("----Enter array A's elements:----\n");
	for(i=0;i<n;i++)
	{
		p("a[%d] = ",i);
		s("%d",&a[i]);

	}
	p("----Enter array B's elements:----\n");
	for(i=0;i<n;i++)
	{
		p("a[%d] = ",i);
		s("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	    c[i]=a[i]+b[i];
	   p("Array C is c[%d]: %d\n",i,c[i]);
	}
	



}

