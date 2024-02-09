#include<stdio.h>
#define p printf
#define s scanf
main(){
	int n,a;
	p("enter number : ");
	s("%d",&n);

	for(a=1;a<=10;a++)
	{
		p("%d  %d  %d \n",n,a,a*n);
	}
}
