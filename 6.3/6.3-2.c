#include<stdio.h>
#define p printf
#define s scanf
main(){
	int n,multiplication=1,a;
	p("enter any number : ");
	s("%d",&n);
	for(a=1;a<=n;a++)
	{
		multiplication*=a;
	}
			p("%d ",multiplication);

	
	
}
