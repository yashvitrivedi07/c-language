/*
	
	07. Write a Program to check the number is magic or not magic using the recursion concept.
*/
#include<stdio.h>
#define p printf
#define s scanf

void magic(int n);
void main()
{
	int n;
	p("enter any number : ");
	s("%d",&n);
	magic(n);

}

void magic(int n)
{
	int rem,mul=1,sum=0,random;
	int real = n;

	while(n!=0)
	{
		rem=n%10;
		sum += rem;
		mul *= rem;
		n=n/10;
		
	}
	if(sum==mul)
	{
		p("%d = magic number",real);
	}
	else
	{
		p("%d = not magic number",real);
	}	
			
}
