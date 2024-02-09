#include<stdio.h>
#define p printf
#define s scanf
main(){
	
	int a,b,c;
	p("enter value of a = ");
	s("%d",&a);
	p("enter value of b = ");
	s("%d",&b);	
	p("enter value of c = ");
	s("%d",&c);	
	(a<b)?
		(a<c)
			?p("%d is minimum",a)
			:p("%d is minimum",c)
		
	
	:(b<c)
			?p("%d is minimum",b)
			:p("%d is minimum",c);
		
	
	
	
}
