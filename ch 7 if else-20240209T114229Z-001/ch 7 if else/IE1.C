#include<stdio.h>
#include<conio.h>
 main()
{
	int a,b;
	clrscr();
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a<b)
	{
	      printf("%d is minimum",a);
	}
	else if(b<a)
	{
	      printf("%d is minimum",b);
	}
	else
	{
	      printf("both are same");
	}
	getch();
}
