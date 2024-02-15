#include<stdio.h>
#define p printf
#define s scanf

main(){
	int a,b,c;
	p("a= ");
	s("%d",&a);
	p("b= ");
	s("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	p("a= %d\n",a);
	p("b= %d",b);
	
}
