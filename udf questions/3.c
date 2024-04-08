
//03. Write a Program to print leap years using the recursion concept.
#include<stdio.h>
#define p printf
#define s scanf

void leap(int a , int b);

void main()
{
	int a,b;
	p("enter 1st year : ");
	s("%d",&a);
	p("\nenter 2nd year : ");
	s("%d",&b);
	
		leap(a,b);
} 


void leap(int a , int b)
{
	int y=0;
	if(a<=b)
	{
		y = a%4==0;
		p("\n%d",a);
		a+=4;
		leap(a,b);
		
	}
     
		
}
