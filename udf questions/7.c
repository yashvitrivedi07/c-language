/*
	
	07. Write a Program to check the number is magic or not magic using the recursion concept.
*/
#include<stdio.h>
#define p printf
#define s scanf

int magic(int n);
void main()
{
	int n;
	p("enter any number : ");
	s("%d",&n);
	magic(n);
	
	
}

int magic(int n)
{
	int rem,mul=1,sum=0;
	
	
	if(n!=0)
	{
		rem=n%10;
		mul *= rem;
		sum += rem;
		n=n/10;
		
		p("%d",mul);
		magic(n);
	}
	
	

	
}
