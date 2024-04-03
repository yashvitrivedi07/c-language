/*
		Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
		For example,
		Input:
		Enter the array's size: 5
		
		
		Enter array elements:
		a[0] = 5
		a[1] = 9
		a[2] = 4
		a[3] = 7
		a[4] = 3
		
		Output:
		Reversed array elements:
		3, 7, 4, 9, 5
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
	p("\n-----Enter array elements :-----\n");
	for(i=0;i<n;i++)
	{
		p("\ta[%d] : ",i);
		s("%d",&a[i]);
	}
	
	
	int *rev;
	int **rev2;
	p("\n\n-----Reversed array elements :-----\n");
	
	for(i = n-1 ; i>=0 ; i--)
	{
		rev = &a[i];
		rev2= &rev;
		
		p("\ta[%d] : %d\n",n-(i+1),**rev2);
	}
	
}
