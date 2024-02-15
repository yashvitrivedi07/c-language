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
	if(a<b){
		if(a<c){
			p("%d is minimum",a);
		}
		else{
			p("%d is minimum",c);
		}
	}
	else{
		if(a<c){
			p("%d is minimum",a);
		}
		else{
			p("%d is minimum",c);
		}
	}
	
	
}
