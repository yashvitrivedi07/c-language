#include<stdio.h>
#define p printf
#define s scanf
void Cube(n);
void main()
{
	int n;
	p("Enter any number: ");
	s("%d",&n);
	Cube(n);
	
}
void Cube(int n)
{
	p("\nCube is : %d",n*(n*n));
}
