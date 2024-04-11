#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n,x,y;
	
	p("Enter 1 for Addition\n");
	p("Enter 2 for Subtraction\n");
	p("Enter 3 for Multiplication\n");
	p("Enter 4 for Division\n");
	p("Enter 5 for Modus\n");
	
	s("%d",&n);
	
	p("\nEnter values -----\n");
	
	p("enter first value : ");
	s("%d",&x);
	p("enter second value : ");
	s("%d",&y);
	
	p("\n\n---Answer---\n");
	
	switch(n)
	{
		case 1 :
			p("\nAddition : \n%d + %d = %d",x,y,x+y);
			break;
		case 2 :
			p("\nSubtraction : \n%d - %d = %d",x,y,x-y);
			break;
		case 3 :
			p("\nMultiplication : \n%d * %d = %d",x,y,x*y);
			break;
		case 4 :
			p("\nDivision : \n%d // %d = %d",x,y,x/y);
			break;
		case 5 :
			p("\nDivision : \n%d %% %d = %d",x,y,x%y);
			break;
		default :
			p("\n---Invalid Input---");
			
	}
	
}
