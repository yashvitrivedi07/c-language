#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n,sum=0,i;
	float avg;

	p("enter size of array : ");
	s("%d",&n);
	int a[n];
	p("----Enter array elements----\n");
	for(i=0;i<n;i++)
	{
		p("a[%d] = ",i);
		s("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/(float)n;
	p("Length of an Array : %.2f",avg);
}
