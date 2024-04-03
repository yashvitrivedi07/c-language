/*
	Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
	For example,
	Input:
	Enter the array's size: 5
	
	Enter array's elements:
	a[0] = 2
	a[1] = 4
	a[2] = 1
	a[3] = 3
	a[4] = 7
	
	Output:
	Square of each element:
	4, 16, 1, 9, 49

*/
#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n,i;
	p("Enter the array's size : ");
	s("%d",&n);
	
	int a[n];
	int *square[n];
	
	for(i=0;i<n;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		square[i] = &a[i];
	}
	
	p("\n\n-----Square of each element:-----\n");
	for(i=0;i<n;i++)
	{
		p("\n\ta[%d] : %d",i,(*square[i])*(*square[i]));
	}
}
