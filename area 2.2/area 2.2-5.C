#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
	float r,t;
	clrscr();
	printf("enter radius = ");
	scanf("%f",&r);
	t=2*r;
	printf("PERIMETER OF A CIRCLE = %.2f",pi*t);

	getch();
}
