#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int a,b,c,d;
	clrscr();
	p("enter value of a = ");
	scanf("\n%d",&a);
	p("enter value of b = ");
	scanf("\n%d",&b);
	p("enter value of c = ");
	scanf("\n%d",&c);
	p("enter value of d = ");
	scanf("\n%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(c>d)
			{
				printf("%d is max",a);
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is max",c);
			}
			else
			{
				printf("%d is max",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is max",b);
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is max",c);
			}
			else
			{
				printf("%d is max",d);
			}
		}





	}

	getch();
}