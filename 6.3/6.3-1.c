#include<stdio.h>
#define p printf
#define s scanf
main(){
	int n,sum=0,a;
	p("enter any number : ");
	s("%d",&n);
	for(a=1;a<=n;a++)
	{
		sum+=a;
	}
			p("%d ",sum);

	
	
}
