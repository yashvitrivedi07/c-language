#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n;
	
	p("Enter array size : ");
	s("%d",&n);
	
	int array[n],i,j;
	
	for(i=0;i<n;i++)
	{
		p("array[%d] : ",i);
		s("%d",&array[i]);
	}
	
	
	
	int rev[n];
	
	for(i=0;i<n;i++)
	{
		rev[i]=array[i];
		p("\narray[%d] : %d",i,rev[i]);
	}

		
	for(i=0;i<n;i++)
	{
			array[i] = rev[n - i - 1];
	}
	
	p("\n\n-------- : reverse : --------\n");
	for(i=0;i<n;i++)
	{
		p("\narray[%d] : %d",i,array[i]);
	}
	
	
	
}
