#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n;
	p("Enter any number: ");
	s("%d",&n);
	if(n%5==0&&n%3==0)
	{
		p("\t\n%d : The given number is divisible by both 3 & 5.",n);
	}else
	{
		p("\t\n%d : The given number is not divisible by both 3 & 5.",n);
	}
}
