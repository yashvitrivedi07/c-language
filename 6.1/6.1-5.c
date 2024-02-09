#include<stdio.h>
#define p printf
#define s scanf
main(){
	int a,b;
	p("enter first year : ");
	s("%d",&a);
	p("enter second year :");
	s("%d",&b);
	while(a<=b){
		p("%d\n",a);
		a+=4;
	}
}
