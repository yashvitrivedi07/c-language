/*
			
		Q.2 Write a Program to swap two variables using Pointers.
		For example,
		Input:
		Enter the value of x: 5
		Enter the value of y: 3
		
		Output:
		Before swapping:
		x: 5
		y: 3
		
		After swapping:
		x: 3
		y: 5                             // logic : c=a   10
													a=b   20
													b=c   10
*/

#include<stdio.h>
#define p printf
#define s scanf

main()
{
	
	int x,y,swap;
	int *a;
	int *b;

	
	p("Enter the value of x : ");
	s("%d",&x);
	p("\nEnter the value of y : ");
	s("%d",&y);	
	
		p("\nBefore swapping : \n\tx = %d\n\ty = %d\n\n",x,y);
	
	a = &x;
	b = &y;
	
	swap = x;
	x = y;
	y = swap;
	

	p("After swapping  : \n\tx = %d\n\ty = %d\n\n",*a,*b);


	

}
