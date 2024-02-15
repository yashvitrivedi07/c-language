#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int unit;
	float bill;
	clrscr();
	p("enter unit = ");
	scanf("%d",&unit);

	if(unit>=0&&unit<=50)
	{
		bill=unit*0.50;
		p("bill =%.2f",bill);
	}
	else if(unit>50&&unit<=150)
	{
		bill=(unit-50)*0.75+25;
		p("bill =%.2f",bill);
	}
	else if(unit>=150&&unit<=250)
	{
		bill=(unit-150)*1.2+150;
		p("bill =%.2f",bill);
	}

	else if(unit>250)
	{
		bill=(unit-250)*1.5+220;
		p("bill =%.2f",bill);
	}
	bill=bill+(bill*0.20);
	p("total bill =%.2f",bill);
	getch();


}