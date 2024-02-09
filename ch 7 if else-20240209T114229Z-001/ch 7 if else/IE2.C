#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter any number = ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive ---",n);
	}
	else if(n==0)
	{
		printf("%d is neutral ---",n);
	}
	else
	{
		printf("%d is negative ---",n)
	}
	getch();
}