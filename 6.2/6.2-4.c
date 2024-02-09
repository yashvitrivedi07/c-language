#include<stdio.h>
#define p printf
main(){
	int a=0,b=1,c,n;
	p("enter any number : ");
	scanf("%d",&n);
	p("%d %d ",a,b);
	do{
		c=a+b;
		p("%d ",c);
		a=b;
		b=c;
	}while(c<=n);
	
	
}
