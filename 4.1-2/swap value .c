#include<stdio.h>
#define p printf
#define s scanf

main(){
	int a,b;
	p("a= ");
	s("%d",&a);
	p("b= ");
	s("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	p("\n\na= %d\n",a);
	p("b= %d",b);
	
}
