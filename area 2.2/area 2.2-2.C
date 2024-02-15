#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	float h,b,area;
	clrscr();

	p("enter base value = ");
	s("%f",&b);
	p("enter height = ");
	s("%f",&h);
	area=b*h;
	p("are of a triangle = %.2f",0.5*area);
	getch();

}