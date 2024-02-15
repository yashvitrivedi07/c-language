#include<stdio.h>
#define p printf
#define s scanf

main(){
	int x,y;
	p("x= ");
	s("%d",&x);
	p("y= ");
	s("%d",&y);
	p("\n\nFORMULA = (x+y)^3");
	p("\n\nanswer = %d",(x+y)*(x+y)*(x+y));
}
