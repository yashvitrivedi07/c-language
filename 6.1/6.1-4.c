#include<stdio.h>
#define p printf
main(){
	int a=1,n;
	p("enter any number : ");
	scanf("%d",&n);
	while(n>=a)
	{
		if(n%2==1){
			p("%d\n",n);
		}
		n--;
	}
	
	
}
