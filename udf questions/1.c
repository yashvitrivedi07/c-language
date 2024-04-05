/*
		01. Write a program to print reverse number using the recursion concept.
		rem = rem % 10 ;
		
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
*/
#include<stdio.h>
#define p printf
#define s scanf

int reverse(int n);
void main()
{
	int n;
	p("enter any number : ");
	s("%d",&n);
	p("----reverse number----\n");
	reverse(n);
}

int reverse(int n)
{
	int rem,rev=0;
	if(n!=0)
	{
		rem=n%10;
		n=n/10;
		
		p("%d",rem);
		
		reverse(n);
	}
}
