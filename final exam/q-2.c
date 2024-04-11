#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n,sum=0,i;
	p("Enter size of array : ");
	s("%d",&n);
	
	int array[n];
	
	p("\n--- : Enter Array Elements : ---");
	
	for(i=0; i<n; i++)
	{
		p("\narray[%d] : ",i);
		s("%d",&array[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum+=array[i];
	}
	
	p("\nSum of elements : %d",sum);
}
