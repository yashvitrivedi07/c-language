#include<stdio.h>
#define p printf
#define s scanf
main(){
	
	int a,b,c,d;
	p("enter value of a = ");
	s("%d",&a);
	p("enter value of b = ");
	s("%d",&b);	
	p("enter value of c = ");
	s("%d",&c);	
	p("enter value of d = ");
	s("%d",&d);
	if(a>b){
		if(a>c){
			if(a>d){
			p("%d is max",a);
			}
			else{
			p("%d is max",d);
			}
		 }
		else{
			if(c>d){
			p("%d is max",c);
			}	
			else{
			p("%d is max",d);
			}
			
	   }
	}	
	else
	{
			if(b>c){
				if(b>d){
				p("%d is max",b);
				}
				else{
				p("%d is max",d);
				}
		      }
			else{
				if(c>d){
				p("%d is max",c);
				}
				else{
				p("%d is max",d);
				}
			
	    	}
		}
}
