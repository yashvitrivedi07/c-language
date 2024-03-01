#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n,count=0,i;
	p("enter size of array : ");
	s("%d",&n);
	int a[n];
	p("----Enter array elements----\n");
	for(i=0;i<n;i++)
	{
		p("a[%d] = ",i);
		s("%d",&a[i]);
		count++;
	}
	p("Length of an Array : %d",count);
}
