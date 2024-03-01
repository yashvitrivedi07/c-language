#include<stdio.h>
#define p printf
#define s scanf
main(){

int x, y ,n;
calculator :
	p("\n\n\n-----------enter 1 for addition-------------\n");
	p("-----------enter 2 for subtraction-------------\n");
	p("-----------enter 3 for multiplication-------------\n");
	p("-----------enter 4 for division-------------\n");
	p("-----------enter 5 for modulus-------------\n");

	p("......enter your choice......\n");	
	s("%d",&n);
	p("enter first value : ");
	s("%d",&x);
	p("enter second value : ");
	s("%d",&y);
	switch(n)
	{
		case 1:
			p("addition ---- %d + %d = %d",x,y,x+y);
			break;
		case 2:
			p("subtraction ---- %d - %d = %d",x,y,x-y);
			break;
		case 3:
			p("multiplication ---- %d * %d = %d",x,y,x*y);
			break;
		case 4:
			p("division ---- %d / %d = %d",x,y,x/y);
			break;
		case 5:
			p("modulus ---- %d % %d = %d",x,y,x%y);
			break;
	    default:
			p( "\n\n--------------- invalid choice--------------- ");
			goto calculator;
	}
}
