#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n,c,i;
	p("Enter array's size: ");
	s("%d",&n);
	int a[n];
	p("\n\n-----: Enter array elements :----- \n");
	for(i=0;i<n;i++)
	{
		p("a[%d]: ",i);
		s("%d",&a[i]);
	}
	p(" ------:square of each element from the given array:------ \n\n");
	for(i=0;i<n;i++)
	{
		c=a[i]*a[i];
		p("%d\t",c);
	}
}
