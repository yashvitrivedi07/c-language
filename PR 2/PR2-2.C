#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int n;
	clrscr();
	printf("enter any number = ");
	scanf("%d",&n);
	(n%2==0)
		?p("%d is even",n)
		:p("%d is odd",n);
	getch();


}